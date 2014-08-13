/*
 * Copyright (C) 2007, 2008, 2010 Apple Inc. All rights reserved.
 * Copyright (C) 2007 Justin Haygood (jhaygood@reaktix.com)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * Note: The implementations of InterlockedIncrement and InterlockedDecrement are based
 * on atomic_increment and atomic_exchange_and_add from the Boost C++ Library. The license
 * is virtually identical to the Apple license above but is included here for completeness.
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef ThreadSafeRefCounted_h
#define ThreadSafeRefCounted_h

#include "Platform.h"

#include <wtf/Atomics.h>
#include <wtf/DynamicAnnotations.h>
#include <wtf/ThreadingPrimitives.h>

namespace WTF {

class ThreadSafeRefCountedBase {
    WTF_MAKE_NONCOPYABLE(ThreadSafeRefCountedBase);
    WTF_MAKE_FAST_ALLOCATED;
public:
    ThreadSafeRefCountedBase(int initialRefCount = 1)
        : m_refCount(initialRefCount)
    {
    }

    void ref()
    {
#if USE(LOCKFREE_THREADSAFEREFCOUNTED)
        atomicIncrement(&m_refCount);
#else
        MutexLocker locker(m_mutex);
        ++m_refCount;
#endif
    }

    bool hasOneRef()
    {
        return refCount() == 1;
    }

    int refCount() const
    {
#if !USE(LOCKFREE_THREADSAFEREFCOUNTED)
        MutexLocker locker(m_mutex);
#endif
        return static_cast<int const volatile &>(m_refCount);
    }

protected:
    // Returns whether the pointer should be freed or not.
    bool derefBase()
    {
#if USE(LOCKFREE_THREADSAFEREFCOUNTED)
        WTF_ANNOTATE_HAPPENS_BEFORE(&m_refCount);
        if (atomicDecrement(&m_refCount) <= 0) {
            WTF_ANNOTATE_HAPPENS_AFTER(&m_refCount);
            return true;
        }
#else
        int refCount;
        {
            MutexLocker locker(m_mutex);
            --m_refCount;
            refCount = m_refCount;
        }
        if (refCount <= 0)
            return true;
#endif
        return false;
    }

private:
    template<class T>
    friend class CrossThreadRefCounted;

    int m_refCount;
#if !USE(LOCKFREE_THREADSAFEREFCOUNTED)
    mutable Mutex m_mutex;
#endif
};

template<class T> class ThreadSafeRefCounted : public ThreadSafeRefCountedBase {
public:
    void deref()
    {
        if (derefBase())
            delete static_cast<T*>(this);
    }

protected:
    ThreadSafeRefCounted()
    {
    }
};

} // namespace WTF

using WTF::ThreadSafeRefCounted;

#endif // ThreadSafeRefCounted_h
