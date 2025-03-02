#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <functional>

class ClickableLabel : public QLabel
{
    Q_OBJECT

public:
    explicit ClickableLabel(QWidget *parent = nullptr);  // 默认构造函数
    explicit ClickableLabel(const QString &text, QWidget *parent = nullptr);  // 带文本参数的构造函数

    // 设置点击回调函数
    void setClickCallback(std::function<void()> callback);

signals:
    void clicked();  // 定义点击信号

protected:
    void mousePressEvent(QMouseEvent *event) override;  // 重写鼠标按下事件

private:
    std::function<void()> m_clickCallback; // 点击回调
};

#endif // CLICKABLELABEL_H
