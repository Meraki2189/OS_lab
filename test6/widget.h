#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <ctime>
#include <string.h>
using namespace std;

typedef struct{
    string name;
    int start_id;
}NewFile; //文件

typedef struct{
    int start_id;
    int size;
}FreeBlock; //空闲表

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
