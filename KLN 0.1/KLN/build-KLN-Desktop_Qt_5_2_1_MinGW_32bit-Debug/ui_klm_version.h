/********************************************************************************
** Form generated from reading UI file 'klm_version.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KLM_VERSION_H
#define UI_KLM_VERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_KLM_Room
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KLM_Room)
    {
        if (KLM_Room->objectName().isEmpty())
            KLM_Room->setObjectName(QStringLiteral("KLM_Room"));
        KLM_Room->resize(400, 300);
        buttonBox = new QDialogButtonBox(KLM_Room);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(KLM_Room);
        QObject::connect(buttonBox, SIGNAL(accepted()), KLM_Room, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KLM_Room, SLOT(reject()));

        QMetaObject::connectSlotsByName(KLM_Room);
    } // setupUi

    void retranslateUi(QDialog *KLM_Room)
    {
        KLM_Room->setWindowTitle(QApplication::translate("KLM_Room", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class KLM_Room: public Ui_KLM_Room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KLM_VERSION_H
