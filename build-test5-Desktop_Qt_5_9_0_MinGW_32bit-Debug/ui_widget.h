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
    QPushButton *sstfBtn;
    QPushButton *scanBtn;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *text_label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *scanBtn_2;
    QLineEdit *start;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1325, 1223);
        sstfBtn = new QPushButton(Widget);
        sstfBtn->setObjectName(QStringLiteral("sstfBtn"));
        sstfBtn->setGeometry(QRect(260, 1000, 211, 111));
        scanBtn = new QPushButton(Widget);
        scanBtn->setObjectName(QStringLiteral("scanBtn"));
        scanBtn->setGeometry(QRect(620, 1000, 211, 111));
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 140, 961, 661));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 880, 231, 101));
        text_label = new QLabel(Widget);
        text_label->setObjectName(QStringLiteral("text_label"));
        text_label->setGeometry(QRect(440, 890, 231, 101));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(510, 60, 521, 71));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 10, 531, 41));
        scanBtn_2 = new QPushButton(Widget);
        scanBtn_2->setObjectName(QStringLiteral("scanBtn_2"));
        scanBtn_2->setGeometry(QRect(980, 1000, 211, 111));
        start = new QLineEdit(Widget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(100, 40, 161, 81));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 0, 111, 41));

        retranslateUi(Widget);
        QObject::connect(scanBtn_2, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        sstfBtn->setText(QApplication::translate("Widget", "SSTF\347\256\227\346\263\225", Q_NULLPTR));
        scanBtn->setText(QApplication::translate("Widget", "SCAN\347\256\227\346\263\225", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\350\242\253\350\256\277\351\227\256\347\232\204\344\270\213\344\270\200\344\270\252\347\243\201\351\201\223\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\347\247\273\345\212\250\350\267\235\347\246\273", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\347\247\273\350\207\202\346\200\273\351\207\217:", Q_NULLPTR));
        text_label->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\347\243\201\347\233\230\350\257\267\346\261\202\351\230\265\345\210\227\357\274\214\347\224\250\347\251\272\346\240\274\351\227\264\351\232\224", Q_NULLPTR));
        scanBtn_2->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        start->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\350\265\267\347\202\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
