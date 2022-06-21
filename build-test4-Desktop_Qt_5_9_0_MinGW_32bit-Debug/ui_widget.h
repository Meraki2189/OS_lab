/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QPushButton *addBtn;
    QPushButton *deleteBtn;
    QPushButton *fifoBtn;
    QPushButton *lruBtn;
    QLabel *label;
    QLabel *lackTime;
    QLabel *lackRate;
    QPushButton *exit;
    QLabel *lackTime_2;
    QLabel *lackRate_2;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1200, 1000);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(150, 230, 941, 421));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 120, 911, 51));
        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(140, 30, 161, 61));
        deleteBtn = new QPushButton(Widget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(360, 30, 161, 61));
        fifoBtn = new QPushButton(Widget);
        fifoBtn->setObjectName(QStringLiteral("fifoBtn"));
        fifoBtn->setGeometry(QRect(600, 30, 161, 61));
        lruBtn = new QPushButton(Widget);
        lruBtn->setObjectName(QStringLiteral("lruBtn"));
        lruBtn->setGeometry(QRect(840, 30, 161, 61));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 180, 731, 41));
        lackTime = new QLabel(Widget);
        lackTime->setObjectName(QStringLiteral("lackTime"));
        lackTime->setGeometry(QRect(140, 940, 321, 41));
        lackRate = new QLabel(Widget);
        lackRate->setObjectName(QStringLiteral("lackRate"));
        lackRate->setGeometry(QRect(740, 940, 321, 41));
        exit = new QPushButton(Widget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(990, 920, 161, 61));
        lackTime_2 = new QLabel(Widget);
        lackTime_2->setObjectName(QStringLiteral("lackTime_2"));
        lackTime_2->setGeometry(QRect(10, 940, 141, 41));
        lackRate_2 = new QLabel(Widget);
        lackRate_2->setObjectName(QStringLiteral("lackRate_2"));
        lackRate_2->setGeometry(QRect(530, 940, 181, 41));
        tableWidget_3 = new QTableWidget(Widget);
        if (tableWidget_3->rowCount() < 1)
            tableWidget_3->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(150, 800, 941, 101));
        tableWidget_2 = new QTableWidget(Widget);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem1);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(150, 670, 941, 111));

        retranslateUi(Widget);
        QObject::connect(exit, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        addBtn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\347\211\251\347\220\206\345\235\227", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\347\211\251\347\220\206\345\235\227", Q_NULLPTR));
        fifoBtn->setText(QApplication::translate("Widget", "FIFO", Q_NULLPTR));
        lruBtn->setText(QApplication::translate("Widget", "LRU", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\351\241\265\351\235\242\345\274\225\347\224\250\345\272\217\345\210\227\357\274\214\344\273\245\347\251\272\346\240\274\351\227\264\351\232\224", Q_NULLPTR));
        lackTime->setText(QString());
        lackRate->setText(QString());
        exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        lackTime_2->setText(QApplication::translate("Widget", "\347\274\272\351\241\265\346\254\241\346\225\260", Q_NULLPTR));
        lackRate_2->setText(QApplication::translate("Widget", "\347\274\272\351\241\265\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\346\267\230\346\261\260\351\241\265\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\346\230\257\345\220\246\347\274\272\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
