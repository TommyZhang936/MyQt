#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mybasedialog.h"

class Widget : public MyBaseDialog
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
