/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Designer of the Qt Toolkit.
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

#ifndef TABORDEREDITOR_H
#define TABORDEREDITOR_H

#include "tabordereditor_global.h"

#include <QtCore/QPointer>
#include <QtGui/QWidget>
#include <QtGui/QRegion>
#include <QtGui/QFont>
#include <QtGui/QFontMetrics>

QT_BEGIN_NAMESPACE

class QUndoStack;
class QDesignerFormWindowInterface;

namespace qdesigner_internal {

class QT_TABORDEREDITOR_EXPORT TabOrderEditor : public QWidget
{
    Q_OBJECT

public:
    TabOrderEditor(QDesignerFormWindowInterface *form, QWidget *parent);

    QDesignerFormWindowInterface *formWindow() const;

public slots:
    void setBackground(QWidget *background);
    void updateBackground();
    void widgetRemoved(QWidget*);
    void initTabOrder();

private slots:
    void showTabOrderDialog();

protected:
    virtual void paintEvent(QPaintEvent *e);
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void mousePressEvent(QMouseEvent *e);
    virtual void mouseDoubleClickEvent(QMouseEvent *e);
    virtual void contextMenuEvent(QContextMenuEvent *e);
    virtual void resizeEvent(QResizeEvent *e);
    virtual void showEvent(QShowEvent *e);

private:
    QRect indicatorRect(int index) const;
    int widgetIndexAt(const QPoint &pos) const;
    bool skipWidget(QWidget *w) const;

    QPointer<QDesignerFormWindowInterface> m_form_window;

    QWidgetList m_tab_order_list;

    QWidget *m_bg_widget;
    QUndoStack *m_undo_stack;
    QRegion m_indicator_region;

    QFontMetrics m_font_metrics;
    int m_current_index;
    bool m_beginning;
};

}  // namespace qdesigner_internal

QT_END_NAMESPACE

#endif
