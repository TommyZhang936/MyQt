#include "widget.h"

Widget::Widget(QWidget *parent)
    : MyBaseDialog(parent)
{
    //setGeometry(100, 100, 600, 400);
    QString strTitle = QStringLiteral("自定义窗口");
    setTitleName(strTitle);
}

Widget::~Widget()
{

}
