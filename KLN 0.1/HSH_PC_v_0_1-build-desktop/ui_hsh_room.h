/********************************************************************************
** Form generated from reading ui file 'hsh_room.ui'
**
** Created: Wed 12. Feb 23:29:55 2014
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_HSH_ROOM_H
#define UI_HSH_ROOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSH_Room
{
public:
    QWidget *widget;
    QFrame *frame;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider;
    QLabel *label;

    void setupUi(QDialog *HSH_Room)
    {
        if (HSH_Room->objectName().isEmpty())
            HSH_Room->setObjectName(QString::fromUtf8("HSH_Room"));
        HSH_Room->resize(640, 435);
        widget = new QWidget(HSH_Room);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(339, 79, 211, 171));
        frame = new QFrame(HSH_Room);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 120, 171, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget1 = new QWidget(frame);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 40, 153, 91));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider_3 = new QSlider(widget1);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_3);

        horizontalSlider_2 = new QSlider(widget1);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 46, 13));

        retranslateUi(HSH_Room);

        QMetaObject::connectSlotsByName(HSH_Room);
    } // setupUi

    void retranslateUi(QDialog *HSH_Room)
    {
        HSH_Room->setWindowTitle(QApplication::translate("HSH_Room", "Dialog", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("HSH_Room", "Light 1", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("HSH_Room", "Light 2", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("HSH_Room", "Light 3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HSH_Room", "Lights", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(HSH_Room);
    } // retranslateUi

};

namespace Ui {
    class HSH_Room: public Ui_HSH_Room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSH_ROOM_H
