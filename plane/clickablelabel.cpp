#include "ClickableLabel.h"
#include <QCursor>

ClickableLabel::ClickableLabel(QWidget *parent)
    : QLabel(parent)
{
    setCursor(Qt::PointingHandCursor);  // 设置鼠标悬停时显示手指图标
}

ClickableLabel::ClickableLabel(const QString &text, QWidget *parent)
    : QLabel(text, parent)
{
    setCursor(Qt::PointingHandCursor);  // 设置鼠标悬停时显示手指图标
}

void ClickableLabel::setClickCallback(std::function<void()> callback)
{
    m_clickCallback = callback;
}

void ClickableLabel::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit clicked();  // 发送点击信号
        if (m_clickCallback) {
            m_clickCallback();  // 调用回调函数
        }
    }
}
