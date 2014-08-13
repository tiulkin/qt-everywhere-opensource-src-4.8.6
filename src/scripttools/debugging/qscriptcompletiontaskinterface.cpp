/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSCriptTools module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qscriptcompletiontaskinterface_p.h"
#include "qscriptcompletiontaskinterface_p_p.h"

#include "private/qobject_p.h"

QT_BEGIN_NAMESPACE

QScriptCompletionTaskInterfacePrivate::QScriptCompletionTaskInterfacePrivate()
{
    type = QScriptCompletionTaskInterface::NoCompletion;
}

QScriptCompletionTaskInterfacePrivate::~QScriptCompletionTaskInterfacePrivate()
{
}

QScriptCompletionTaskInterface::~QScriptCompletionTaskInterface()
{
}

QScriptCompletionTaskInterface::QScriptCompletionTaskInterface(
    QScriptCompletionTaskInterfacePrivate &dd, QObject *parent)
    : QObject(dd, parent)
{
}

QScriptCompletionTaskInterface::CompletionType QScriptCompletionTaskInterface::completionType() const
{
    Q_D(const QScriptCompletionTaskInterface);
    return static_cast<QScriptCompletionTaskInterface::CompletionType>(d->type);
}

int QScriptCompletionTaskInterface::resultCount() const
{
    Q_D(const QScriptCompletionTaskInterface);
    return d->results.size();
}

QString QScriptCompletionTaskInterface::resultAt(int index) const
{
    Q_D(const QScriptCompletionTaskInterface);
    return d->results.value(index);
}

void QScriptCompletionTaskInterface::addResult(const QString &result)
{
    Q_D(QScriptCompletionTaskInterface);
    d->results.append(result);
}

int QScriptCompletionTaskInterface::position() const
{
    Q_D(const QScriptCompletionTaskInterface);
    return d->position;
}

int QScriptCompletionTaskInterface::length() const
{
    Q_D(const QScriptCompletionTaskInterface);
    return d->length;
}

QString QScriptCompletionTaskInterface::appendix() const
{
    Q_D(const QScriptCompletionTaskInterface);
    return d->appendix;
}

QT_END_NAMESPACE
