/********************************************************************************
** Form generated from reading UI file 'receivecoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVECOINSDIALOG_H
#define UI_RECEIVECOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "hiluxamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameSendTopButton;
    QHBoxLayout *topSendButtons;
    QSpacerItem *horizontalSpacerWalletSecruity;
    QPushButton *receivingAddressesButton;
    QFrame *frameReceiveForm;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *reuseAddress;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *reqLabel;
    QLineEdit *reqMessage;
    QLabel *labelRequestForm;
    QLabel *label_2;
    QLabel *label;
    HiluxAmountField *reqAmount;
    QCheckBox *checkUseInstantSend;
    QFrame *frame2;
    QVBoxLayout *verticalLayout_3_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *receiveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *frameHistory;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRequestedPaymentsHistory;
    QTableView *recentRequestsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showRequestButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *removeRequestButton;

    void setupUi(QWidget *ReceiveCoinsDialog)
    {
        if (ReceiveCoinsDialog->objectName().isEmpty())
            ReceiveCoinsDialog->setObjectName(QStringLiteral("ReceiveCoinsDialog"));
        ReceiveCoinsDialog->resize(776, 387);
        verticalLayout = new QVBoxLayout(ReceiveCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        frameSendTopButton = new QFrame(ReceiveCoinsDialog);
        frameSendTopButton->setObjectName(QStringLiteral("frameSendTopButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameSendTopButton->sizePolicy().hasHeightForWidth());
        frameSendTopButton->setSizePolicy(sizePolicy);
        frameSendTopButton->setMaximumSize(QSize(16777215, 16777215));
        frameSendTopButton->setFrameShape(QFrame::StyledPanel);
        frameSendTopButton->setFrameShadow(QFrame::Sunken);
        topSendButtons = new QHBoxLayout(frameSendTopButton);
        topSendButtons->setObjectName(QStringLiteral("topSendButtons"));
        topSendButtons->setContentsMargins(0, 0, 0, 20);
        horizontalSpacerWalletSecruity = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topSendButtons->addItem(horizontalSpacerWalletSecruity);

        receivingAddressesButton = new QPushButton(frameSendTopButton);
        receivingAddressesButton->setObjectName(QStringLiteral("receivingAddressesButton"));
        receivingAddressesButton->setAutoDefault(false);

        topSendButtons->addWidget(receivingAddressesButton);


        verticalLayout->addWidget(frameSendTopButton);

        frameReceiveForm = new QFrame(ReceiveCoinsDialog);
        frameReceiveForm->setObjectName(QStringLiteral("frameReceiveForm"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameReceiveForm->sizePolicy().hasHeightForWidth());
        frameReceiveForm->setSizePolicy(sizePolicy1);
        frameReceiveForm->setFrameShape(QFrame::StyledPanel);
        frameReceiveForm->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frameReceiveForm);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        reuseAddress = new QCheckBox(frameReceiveForm);
        reuseAddress->setObjectName(QStringLiteral("reuseAddress"));

        gridLayout->addWidget(reuseAddress, 7, 2, 1, 1);

        label_4 = new QLabel(frameReceiveForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_3 = new QLabel(frameReceiveForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        reqLabel = new QLineEdit(frameReceiveForm);
        reqLabel->setObjectName(QStringLiteral("reqLabel"));

        gridLayout->addWidget(reqLabel, 4, 2, 1, 1);

        reqMessage = new QLineEdit(frameReceiveForm);
        reqMessage->setObjectName(QStringLiteral("reqMessage"));

        gridLayout->addWidget(reqMessage, 6, 2, 1, 1);

        labelRequestForm = new QLabel(frameReceiveForm);
        labelRequestForm->setObjectName(QStringLiteral("labelRequestForm"));

        gridLayout->addWidget(labelRequestForm, 2, 2, 1, 1);

        label_2 = new QLabel(frameReceiveForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(frameReceiveForm);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        reqAmount = new HiluxAmountField(frameReceiveForm);
        reqAmount->setObjectName(QStringLiteral("reqAmount"));
        reqAmount->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(reqAmount, 5, 2, 1, 1);

        checkUseInstantSend = new QCheckBox(frameReceiveForm);
        checkUseInstantSend->setObjectName(QStringLiteral("checkUseInstantSend"));
        checkUseInstantSend->setChecked(true);

        gridLayout->addWidget(checkUseInstantSend, 8, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout->addWidget(frameReceiveForm);

        frame2 = new QFrame(ReceiveCoinsDialog);
        frame2->setObjectName(QStringLiteral("frame2"));
        sizePolicy1.setHeightForWidth(frame2->sizePolicy().hasHeightForWidth());
        frame2->setSizePolicy(sizePolicy1);
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Sunken);
        verticalLayout_3_2 = new QVBoxLayout(frame2);
        verticalLayout_3_2->setObjectName(QStringLiteral("verticalLayout_3_2"));
        verticalLayout_3_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        receiveButton = new QPushButton(frame2);
        receiveButton->setObjectName(QStringLiteral("receiveButton"));
        receiveButton->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(receiveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearButton = new QPushButton(frame2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        frameHistory = new QFrame(ReceiveCoinsDialog);
        frameHistory->setObjectName(QStringLiteral("frameHistory"));
        sizePolicy1.setHeightForWidth(frameHistory->sizePolicy().hasHeightForWidth());
        frameHistory->setSizePolicy(sizePolicy1);
        frameHistory->setFrameShape(QFrame::StyledPanel);
        frameHistory->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameHistory);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, -1);
        labelRequestedPaymentsHistory = new QLabel(frameHistory);
        labelRequestedPaymentsHistory->setObjectName(QStringLiteral("labelRequestedPaymentsHistory"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelRequestedPaymentsHistory->setFont(font);

        verticalLayout_2->addWidget(labelRequestedPaymentsHistory);

        recentRequestsView = new QTableView(frameHistory);
        recentRequestsView->setObjectName(QStringLiteral("recentRequestsView"));
        recentRequestsView->setContextMenuPolicy(Qt::CustomContextMenu);
        recentRequestsView->setTabKeyNavigation(false);
        recentRequestsView->setSortingEnabled(true);

        verticalLayout_2->addWidget(recentRequestsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showRequestButton = new QPushButton(frameHistory);
        showRequestButton->setObjectName(QStringLiteral("showRequestButton"));
        showRequestButton->setEnabled(false);
        showRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(showRequestButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        removeRequestButton = new QPushButton(frameHistory);
        removeRequestButton->setObjectName(QStringLiteral("removeRequestButton"));
        removeRequestButton->setEnabled(false);
        removeRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(removeRequestButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frameHistory);

        verticalLayout->setStretch(4, 1);
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(reqMessage);
        label_2->setBuddy(reqLabel);
        label->setBuddy(reqAmount);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(reqLabel, reqAmount);
        QWidget::setTabOrder(reqAmount, reqMessage);
        QWidget::setTabOrder(reqMessage, reuseAddress);
        QWidget::setTabOrder(reuseAddress, receiveButton);
        QWidget::setTabOrder(receiveButton, clearButton);
        QWidget::setTabOrder(clearButton, recentRequestsView);
        QWidget::setTabOrder(recentRequestsView, showRequestButton);
        QWidget::setTabOrder(showRequestButton, removeRequestButton);

        retranslateUi(ReceiveCoinsDialog);

        QMetaObject::connectSlotsByName(ReceiveCoinsDialog);
    } // setupUi

    void retranslateUi(QWidget *ReceiveCoinsDialog)
    {
#ifndef QT_NO_TOOLTIP
        receivingAddressesButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Clear all fields of the form.", 0));
#endif // QT_NO_TOOLTIP
        receivingAddressesButton->setText(QApplication::translate("ReceiveCoinsDialog", "My Addresses...", 0));
#ifndef QT_NO_TOOLTIP
        reuseAddress->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Reuse one of the previously used receiving addresses.<br>Reusing addresses has security and privacy issues.<br>Do not use this unless re-generating a payment request made before.", 0));
#endif // QT_NO_TOOLTIP
        reuseAddress->setText(QApplication::translate("ReceiveCoinsDialog", "R&euse an existing receiving address (not recommended)", 0));
        label_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request, which will be displayed when the request is opened. Note: The message will not be sent with the payment over the Hilux network.", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ReceiveCoinsDialog", "&Message:", 0));
#ifndef QT_NO_TOOLTIP
        reqLabel->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        reqMessage->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request, which will be displayed when the request is opened.<br>Note: The message will not be sent with the payment over the Hilux network.", 0));
#endif // QT_NO_TOOLTIP
        labelRequestForm->setText(QApplication::translate("ReceiveCoinsDialog", "Use this form to request payments. All fields are <b>optional</b>.", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ReceiveCoinsDialog", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ReceiveCoinsDialog", "&Amount:", 0));
#ifndef QT_NO_TOOLTIP
        reqAmount->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", 0));
#endif // QT_NO_TOOLTIP
        checkUseInstantSend->setText(QApplication::translate("ReceiveCoinsDialog", "Request Instant Send", 0));
        receiveButton->setText(QApplication::translate("ReceiveCoinsDialog", "&Request payment", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Clear all fields of the form.", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("ReceiveCoinsDialog", "Clear", 0));
        labelRequestedPaymentsHistory->setText(QApplication::translate("ReceiveCoinsDialog", "Requested Payments History", 0));
#ifndef QT_NO_TOOLTIP
        showRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Show the selected request (does the same as double clicking an entry)", 0));
#endif // QT_NO_TOOLTIP
        showRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Show", 0));
#ifndef QT_NO_TOOLTIP
        removeRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Remove the selected entries from the list", 0));
#endif // QT_NO_TOOLTIP
        removeRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Remove", 0));
        Q_UNUSED(ReceiveCoinsDialog);
    } // retranslateUi

};

namespace Ui {
    class ReceiveCoinsDialog: public Ui_ReceiveCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVECOINSDIALOG_H
