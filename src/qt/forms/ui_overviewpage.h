/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacerWalletSecruity;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWalletStatus;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchPending;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QSpacerItem *horizontalSpacerWalletSecruity1;
    QFrame *frameWalletSecurity;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_41;
    QLabel *labelWalletSecurity;
    QHBoxLayout *hLayoutWalletSecurity;
    QPushButton *pushButtonEncryptWallet;
    QPushButton *pushButtonLockWallet;
    QPushButton *pushButtonUnlockWallet;
    QSpacerItem *horizontalSpacerWalletSecruity2;
    QPushButton *pushButtonChangePassphrase;
    QPushButton *pushButtonBackupWallet;
    QFrame *framePSHeader;
    QVBoxLayout *vboxLayout;
    QLabel *labelPrivateSendHeader;
    QHBoxLayout *hboxLayout1;
    QPushButton *buttonShowPrivateSend;
    QPushButton *buttonHidePrivateSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *privateSendInfo;
    QFrame *framePrivateSend;
    QVBoxLayout *VerticalLayout_PS1;
    QGridLayout *privateSendFormLayout;
    QLabel *labelPrivateSendEnabledText;
    QLabel *labelPrivateSendEnabled;
    QLabel *labelCompletitionText;
    QProgressBar *privateSendProgress;
    QLabel *labelAnonymizedText;
    QFrame *framePrivateSendBalance;
    QHBoxLayout *hboxLayout2;
    QLabel *labelAnonymized;
    QFrame *frame2;
    QHBoxLayout *hboxLayout3;
    QLabel *labelPrivateSendSyncStatus;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelAmountAndRoundsText;
    QLabel *labelAmountRounds;
    QLabel *labelSubmittedDenomText;
    QLabel *labelSubmittedDenom;
    QVBoxLayout *VerticalLayout_PS;
    QLabel *labelPrivateSendLastMessage;
    QHBoxLayout *hboxLayout4;
    QPushButton *togglePrivateSend;
    QPushButton *privateSendAuto;
    QSpacerItem *horizontalSpacer1;
    QPushButton *privateSendReset;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(480, 585);
        OverviewPage->setMinimumSize(QSize(480, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setAlignment(Qt::AlignHCenter);
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        topLayout->addWidget(labelAlerts);

        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        horizontalSpacerWalletSecruity = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacerWalletSecruity);

        frame1 = new QFrame(frame);
        frame1->setObjectName(QStringLiteral("frame1"));
        verticalLayout_4 = new QVBoxLayout(frame1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSpendable = new QLabel(frame1);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame1);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame1);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame1);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWalletStatus = new QLabel(frame1);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelWalletStatus, 1, 2, 1, 1);

        labelWatchAvailable = new QLabel(frame1);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame1);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame1);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchPending = new QLabel(frame1);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frame1);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelImmature = new QLabel(frame1);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelWatchImmature = new QLabel(frame1);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame1);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame1);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame1);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelTotal = new QLabel(frame1);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame1);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 HLX"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        hboxLayout->addWidget(frame1);

        horizontalSpacerWalletSecruity1 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacerWalletSecruity1);


        topLayout->addWidget(frame);

        frameWalletSecurity = new QFrame(OverviewPage);
        frameWalletSecurity->setObjectName(QStringLiteral("frameWalletSecurity"));
        frameWalletSecurity->setFrameShape(QFrame::StyledPanel);
        frameWalletSecurity->setFrameShadow(QFrame::Raised);
        verticalLayout_41 = new QVBoxLayout(frameWalletSecurity);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        labelWalletSecurity = new QLabel(frameWalletSecurity);
        labelWalletSecurity->setObjectName(QStringLiteral("labelWalletSecurity"));

        horizontalLayout_41->addWidget(labelWalletSecurity);


        verticalLayout_41->addLayout(horizontalLayout_41);

        hLayoutWalletSecurity = new QHBoxLayout();
        hLayoutWalletSecurity->setSpacing(8);
        hLayoutWalletSecurity->setObjectName(QStringLiteral("hLayoutWalletSecurity"));
        hLayoutWalletSecurity->setContentsMargins(-1, -1, -1, 10);
        pushButtonEncryptWallet = new QPushButton(frameWalletSecurity);
        pushButtonEncryptWallet->setObjectName(QStringLiteral("pushButtonEncryptWallet"));
        pushButtonEncryptWallet->setStyleSheet(QStringLiteral(""));
        pushButtonEncryptWallet->setAutoDefault(false);

        hLayoutWalletSecurity->addWidget(pushButtonEncryptWallet);

        pushButtonLockWallet = new QPushButton(frameWalletSecurity);
        pushButtonLockWallet->setObjectName(QStringLiteral("pushButtonLockWallet"));
        pushButtonLockWallet->setStyleSheet(QStringLiteral(""));
        pushButtonLockWallet->setAutoDefault(false);

        hLayoutWalletSecurity->addWidget(pushButtonLockWallet);

        pushButtonUnlockWallet = new QPushButton(frameWalletSecurity);
        pushButtonUnlockWallet->setObjectName(QStringLiteral("pushButtonUnlockWallet"));
        pushButtonUnlockWallet->setStyleSheet(QStringLiteral(""));
        pushButtonUnlockWallet->setAutoDefault(false);

        hLayoutWalletSecurity->addWidget(pushButtonUnlockWallet);

        horizontalSpacerWalletSecruity2 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutWalletSecurity->addItem(horizontalSpacerWalletSecruity2);

        pushButtonChangePassphrase = new QPushButton(frameWalletSecurity);
        pushButtonChangePassphrase->setObjectName(QStringLiteral("pushButtonChangePassphrase"));
        pushButtonChangePassphrase->setStyleSheet(QStringLiteral(""));
        pushButtonChangePassphrase->setAutoDefault(false);

        hLayoutWalletSecurity->addWidget(pushButtonChangePassphrase);

        pushButtonBackupWallet = new QPushButton(frameWalletSecurity);
        pushButtonBackupWallet->setObjectName(QStringLiteral("pushButtonBackupWallet"));
        pushButtonBackupWallet->setStyleSheet(QStringLiteral(""));
        pushButtonBackupWallet->setAutoDefault(false);

        hLayoutWalletSecurity->addWidget(pushButtonBackupWallet);


        verticalLayout_41->addLayout(hLayoutWalletSecurity);


        topLayout->addWidget(frameWalletSecurity);

        framePSHeader = new QFrame(OverviewPage);
        framePSHeader->setObjectName(QStringLiteral("framePSHeader"));
        framePSHeader->setFrameShape(QFrame::StyledPanel);
        framePSHeader->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(framePSHeader);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        labelPrivateSendHeader = new QLabel(framePSHeader);
        labelPrivateSendHeader->setObjectName(QStringLiteral("labelPrivateSendHeader"));

        vboxLayout->addWidget(labelPrivateSendHeader);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        buttonShowPrivateSend = new QPushButton(framePSHeader);
        buttonShowPrivateSend->setObjectName(QStringLiteral("buttonShowPrivateSend"));

        hboxLayout1->addWidget(buttonShowPrivateSend);

        buttonHidePrivateSend = new QPushButton(framePSHeader);
        buttonHidePrivateSend->setObjectName(QStringLiteral("buttonHidePrivateSend"));
        buttonHidePrivateSend->setVisible(false);

        hboxLayout1->addWidget(buttonHidePrivateSend);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);

        privateSendInfo = new QPushButton(framePSHeader);
        privateSendInfo->setObjectName(QStringLiteral("privateSendInfo"));

        hboxLayout1->addWidget(privateSendInfo);


        vboxLayout->addLayout(hboxLayout1);


        topLayout->addWidget(framePSHeader);

        framePrivateSend = new QFrame(OverviewPage);
        framePrivateSend->setObjectName(QStringLiteral("framePrivateSend"));
        framePrivateSend->setVisible(true);
        framePrivateSend->setLayoutDirection(Qt::LeftToRight);
        framePrivateSend->setFrameShape(QFrame::StyledPanel);
        framePrivateSend->setFrameShadow(QFrame::Raised);
        VerticalLayout_PS1 = new QVBoxLayout(framePrivateSend);
        VerticalLayout_PS1->setObjectName(QStringLiteral("VerticalLayout_PS1"));
        privateSendFormLayout = new QGridLayout();
        privateSendFormLayout->setObjectName(QStringLiteral("privateSendFormLayout"));
        privateSendFormLayout->setHorizontalSpacing(11);
        privateSendFormLayout->setVerticalSpacing(12);
        labelPrivateSendEnabledText = new QLabel(framePrivateSend);
        labelPrivateSendEnabledText->setObjectName(QStringLiteral("labelPrivateSendEnabledText"));

        privateSendFormLayout->addWidget(labelPrivateSendEnabledText, 0, 0, 1, 1);

        labelPrivateSendEnabled = new QLabel(framePrivateSend);
        labelPrivateSendEnabled->setObjectName(QStringLiteral("labelPrivateSendEnabled"));

        privateSendFormLayout->addWidget(labelPrivateSendEnabled, 0, 1, 1, 1);

        labelCompletitionText = new QLabel(framePrivateSend);
        labelCompletitionText->setObjectName(QStringLiteral("labelCompletitionText"));

        privateSendFormLayout->addWidget(labelCompletitionText, 1, 0, 1, 1);

        privateSendProgress = new QProgressBar(framePrivateSend);
        privateSendProgress->setObjectName(QStringLiteral("privateSendProgress"));
        privateSendProgress->setMaximumSize(QSize(154, 16777215));
        privateSendProgress->setValue(0);

        privateSendFormLayout->addWidget(privateSendProgress, 1, 1, 1, 1);

        labelAnonymizedText = new QLabel(framePrivateSend);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));

        privateSendFormLayout->addWidget(labelAnonymizedText, 2, 0, 1, 1);

        framePrivateSendBalance = new QFrame(framePrivateSend);
        framePrivateSendBalance->setObjectName(QStringLiteral("framePrivateSendBalance"));
        hboxLayout2 = new QHBoxLayout(framePrivateSendBalance);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        labelAnonymized = new QLabel(framePrivateSendBalance);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setFont(font);
        labelAnonymized->setText(QStringLiteral("0 HLX"));

        hboxLayout2->addWidget(labelAnonymized);


        privateSendFormLayout->addWidget(framePrivateSendBalance, 2, 1, 1, 1);

        frame2 = new QFrame(framePrivateSend);
        frame2->setObjectName(QStringLiteral("frame2"));
        hboxLayout3 = new QHBoxLayout(frame2);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        labelPrivateSendSyncStatus = new QLabel(frame2);
        labelPrivateSendSyncStatus->setObjectName(QStringLiteral("labelPrivateSendSyncStatus"));
        labelPrivateSendSyncStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelPrivateSendSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelPrivateSendSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        hboxLayout3->addWidget(labelPrivateSendSyncStatus);


        privateSendFormLayout->addWidget(frame2, 2, 2, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        privateSendFormLayout->addItem(horizontalSpacer_21, 2, 3, 1, 1);

        labelAmountAndRoundsText = new QLabel(framePrivateSend);
        labelAmountAndRoundsText->setObjectName(QStringLiteral("labelAmountAndRoundsText"));

        privateSendFormLayout->addWidget(labelAmountAndRoundsText, 3, 0, 1, 1);

        labelAmountRounds = new QLabel(framePrivateSend);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));

        privateSendFormLayout->addWidget(labelAmountRounds, 3, 1, 1, 1);

        labelSubmittedDenomText = new QLabel(framePrivateSend);
        labelSubmittedDenomText->setObjectName(QStringLiteral("labelSubmittedDenomText"));

        privateSendFormLayout->addWidget(labelSubmittedDenomText, 4, 0, 1, 1);

        labelSubmittedDenom = new QLabel(framePrivateSend);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));

        privateSendFormLayout->addWidget(labelSubmittedDenom, 4, 1, 1, 1);


        VerticalLayout_PS1->addLayout(privateSendFormLayout);

        VerticalLayout_PS = new QVBoxLayout();
        VerticalLayout_PS->setObjectName(QStringLiteral("VerticalLayout_PS"));
        labelPrivateSendLastMessage = new QLabel(framePrivateSend);
        labelPrivateSendLastMessage->setObjectName(QStringLiteral("labelPrivateSendLastMessage"));
        labelPrivateSendLastMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelPrivateSendLastMessage->setWordWrap(true);

        VerticalLayout_PS->addWidget(labelPrivateSendLastMessage);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        togglePrivateSend = new QPushButton(framePrivateSend);
        togglePrivateSend->setObjectName(QStringLiteral("togglePrivateSend"));

        hboxLayout4->addWidget(togglePrivateSend);

        privateSendAuto = new QPushButton(framePrivateSend);
        privateSendAuto->setObjectName(QStringLiteral("privateSendAuto"));

        hboxLayout4->addWidget(privateSendAuto);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(horizontalSpacer1);

        privateSendReset = new QPushButton(framePrivateSend);
        privateSendReset->setObjectName(QStringLiteral("privateSendReset"));
        privateSendReset->setAutoFillBackground(false);

        hboxLayout4->addWidget(privateSendReset);


        VerticalLayout_PS->addLayout(hboxLayout4);


        VerticalLayout_PS1->addLayout(VerticalLayout_PS);


        topLayout->addWidget(framePrivateSend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        topLayout->addItem(verticalSpacer);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Home", 0));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Hilux network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", 0));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelWalletSecurity->setText(QApplication::translate("OverviewPage", "Wallet Security", 0));
        pushButtonEncryptWallet->setText(QApplication::translate("OverviewPage", "Encrypt Wallet", 0));
        pushButtonLockWallet->setText(QApplication::translate("OverviewPage", "Lock Wallet", 0));
        pushButtonUnlockWallet->setText(QApplication::translate("OverviewPage", "Unlock Wallet", 0));
        pushButtonChangePassphrase->setText(QApplication::translate("OverviewPage", "Change Passphrase", 0));
        pushButtonBackupWallet->setText(QApplication::translate("OverviewPage", "Backup Wallet", 0));
        labelPrivateSendHeader->setText(QApplication::translate("OverviewPage", "PrivateSend Balance", 0));
#ifndef QT_NO_TOOLTIP
        buttonShowPrivateSend->setToolTip(QApplication::translate("OverviewPage", "Hide/Show PrivateSend Controls", 0));
#endif // QT_NO_TOOLTIP
        buttonShowPrivateSend->setText(QApplication::translate("OverviewPage", "Show PrivateSend Controls", 0));
#ifndef QT_NO_TOOLTIP
        buttonHidePrivateSend->setToolTip(QApplication::translate("OverviewPage", "Hide/Show PrivateSend Controls", 0));
#endif // QT_NO_TOOLTIP
        buttonHidePrivateSend->setText(QApplication::translate("OverviewPage", "Hide PrivateSend Controls", 0));
#ifndef QT_NO_TOOLTIP
        privateSendInfo->setToolTip(QApplication::translate("OverviewPage", "Information about PrivateSend", 0));
#endif // QT_NO_TOOLTIP
        privateSendInfo->setText(QApplication::translate("OverviewPage", "Info on PrivateSend", 0));
        labelPrivateSendEnabledText->setText(QApplication::translate("OverviewPage", "Status:", 0));
        labelPrivateSendEnabled->setText(QApplication::translate("OverviewPage", "Loading...", 0));
        labelCompletitionText->setText(QApplication::translate("OverviewPage", "Completion:", 0));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "PrivateSend Balance:", 0));
#ifndef QT_NO_TOOLTIP
        labelPrivateSendSyncStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Hilux network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelAmountAndRoundsText->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", 0));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 HLX / 0 Rounds", 0));
        labelSubmittedDenomText->setText(QApplication::translate("OverviewPage", "Submitted Denom:", 0));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", 0));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", 0));
        labelPrivateSendLastMessage->setText(QApplication::translate("OverviewPage", "(Last Message)", 0));
        togglePrivateSend->setText(QApplication::translate("OverviewPage", "Start/Stop PrivateSend", 0));
#ifndef QT_NO_TOOLTIP
        privateSendAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a PrivateSend request.", 0));
#endif // QT_NO_TOOLTIP
        privateSendAuto->setText(QApplication::translate("OverviewPage", "Try PrivateSend", 0));
#ifndef QT_NO_TOOLTIP
        privateSendReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of PrivateSend (can interrupt PrivateSend if it's in the process of Mixing, which can cost you money!)", 0));
#endif // QT_NO_TOOLTIP
        privateSendReset->setText(QApplication::translate("OverviewPage", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
