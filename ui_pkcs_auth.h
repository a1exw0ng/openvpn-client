/********************************************************************************
** Form generated from reading ui file 'pkcs_auth.ui'
**
** Created: Thu 29. Oct 11:16:09 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PKCS_AUTH_H
#define UI_PKCS_AUTH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pkcs_auth
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *txtPKCSPwd;
    QPushButton *cmdOK;

    void setupUi(QDialog *pkcs_auth)
    {
        if (pkcs_auth->objectName().isEmpty())
            pkcs_auth->setObjectName(QString::fromUtf8("pkcs_auth"));
        pkcs_auth->resize(265, 104);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pkcs_auth->setWindowIcon(icon);
        pkcs_auth->setModal(true);
        groupBox = new QGroupBox(pkcs_auth);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 1, 241, 61));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 24, 61, 16));
        txtPKCSPwd = new QLineEdit(groupBox);
        txtPKCSPwd->setObjectName(QString::fromUtf8("txtPKCSPwd"));
        txtPKCSPwd->setGeometry(QRect(65, 22, 161, 20));
        cmdOK = new QPushButton(pkcs_auth);
        cmdOK->setObjectName(QString::fromUtf8("cmdOK"));
        cmdOK->setGeometry(QRect(180, 70, 75, 24));
        cmdOK->setFlat(true);

        retranslateUi(pkcs_auth);

        QMetaObject::connectSlotsByName(pkcs_auth);
    } // setupUi

    void retranslateUi(QDialog *pkcs_auth)
    {
        pkcs_auth->setWindowTitle(QApplication::translate("pkcs_auth", "PKCS Authentication", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pkcs_auth", "User data:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pkcs_auth", "Password:", 0, QApplication::UnicodeUTF8));
        cmdOK->setText(QApplication::translate("pkcs_auth", "Co&nnect", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(pkcs_auth);
    } // retranslateUi

};

namespace Ui {
    class pkcs_auth: public Ui_pkcs_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PKCS_AUTH_H