/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frameNav;
    QVBoxLayout *navButtons;
    QFrame *frameNavMain;
    QHBoxLayout *hboxLayout;
    QLabel *labelNavMain;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonChevron1;
    QFrame *frameNavNetwork;
    QHBoxLayout *hboxLayout1;
    QLabel *labelNavNetwork;
    QSpacerItem *horizontalSpacer1;
    QPushButton *buttonChevron2;
    QFrame *frameNavExpert;
    QHBoxLayout *hboxLayout2;
    QLabel *labelNavExpert;
    QSpacerItem *horizontalSpacer2;
    QPushButton *buttonChevron3;
    QSpacerItem *verticalSpacer_Wallet;
    QFrame *frameNavOpenConf;
    QHBoxLayout *hboxLayout3;
    QLabel *labelNavOpenConf;
    QSpacerItem *horizontalSpacer3;
    QPushButton *buttonOpen1;
    QFrame *frameNavOpenMNConf;
    QHBoxLayout *hboxLayout4;
    QLabel *labelNavOpenMNConf;
    QSpacerItem *horizontalSpacer4;
    QPushButton *buttonOpen2;
    QFrame *frameNavOpenBackups;
    QHBoxLayout *hboxLayout5;
    QLabel *labelNavOpenBackups;
    QSpacerItem *horizontalSpacer5;
    QPushButton *buttonOpen3;
    QSpacerItem *verticalSpacer_Wallet1;
    QScrollArea *scrollArea;
    QFrame *frameSettings;
    QVBoxLayout *vboxLayout;
    QFrame *frameMain;
    QVBoxLayout *vboxLayout1;
    QLabel *labelSettingsStartup;
    QCheckBox *hiluxAtStartup;
    QLabel *labelSettingsTray;
    QCheckBox *hideTrayIcon;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QLabel *labelSettingsLanguage;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QSpacerItem *spacerItem;
    QLabel *labelSettingsCurrency;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QSpacerItem *spacerItem1;
    QHBoxLayout *horizontalLayout_5_Display;
    QLabel *digitsLabel;
    QValueComboBox *digits;
    QSpacerItem *spacerItem2;
    QSpacerItem *verticalSpacerBottom;
    QFrame *frameNetwork;
    QVBoxLayout *verticalLayout_Wallet;
    QLabel *labelSettingsUPnP;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QLabel *labelSettingsListen;
    QVBoxLayout *vboxLayout2;
    QCheckBox *allowIncoming;
    QLabel *labelSettingsProxy;
    QVBoxLayout *vboxLayout3;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *spacerItem3;
    QHBoxLayout *horizontalLayout_2_Network;
    QLabel *proxyActiveNets;
    QCheckBox *proxyReachIPv4;
    QLabel *proxyReachIPv4Label;
    QCheckBox *proxyReachIPv6;
    QLabel *proxyReachIPv6Label;
    QCheckBox *proxyReachTor;
    QLabel *proxyReachTorLabel;
    QSpacerItem *horizontalSpacer_2_Network;
    QLabel *labelSettingsHSProxy;
    QCheckBox *connectSocksTor;
    QHBoxLayout *horizontalLayout_3_Network;
    QLabel *proxyIpTorLabel;
    QValidatedLineEdit *proxyIpTor;
    QLabel *proxyPortTorLabel;
    QLineEdit *proxyPortTor;
    QSpacerItem *horizontalSpacer_4_Network;
    QSpacerItem *verticalSpacerBottom1;
    QFrame *frameExpert;
    QVBoxLayout *verticalLayout_Wallet1;
    QLabel *labelSettingsSending;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coinControlFeatures;
    QCheckBox *spendZeroConfChange;
    QLabel *labelSettingsMasternodes;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *showMasternodesTab;
    QLabel *labelSettingsPrivateSend;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *showAdvancedPSUI;
    QCheckBox *lowKeysWarning;
    QCheckBox *privateSendMultiSession;
    QHBoxLayout *horizontalLayout_4_Wallet;
    QLabel *label;
    QSpinBox *privateSendRounds;
    QSpacerItem *spacerItem4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *privateSendAmount;
    QSpacerItem *spacerItem5;
    QLabel *labelSettingsNode;
    QHBoxLayout *horizontalLayout_2_Main;
    QLabel *databaseCacheLabel;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *spacerItem6;
    QHBoxLayout *horizontalLayout_3_Main;
    QLabel *threadsScriptVerifLabel;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_3_Main;
    QSpacerItem *spacerItem7;
    QSpacerItem *verticalSpacer_Wallet2;
    QFrame *frameControlButtons;
    QHBoxLayout *layoutControlButtons;
    QPushButton *saveButton;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer6;
    QPushButton *cancelButton;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName(QStringLiteral("SettingsPage"));
        SettingsPage->resize(480, 585);
        topLayout = new QVBoxLayout(SettingsPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(5, 20, 5, 0);
        frameNav = new QFrame(SettingsPage);
        frameNav->setObjectName(QStringLiteral("frameNav"));
        navButtons = new QVBoxLayout(frameNav);
        navButtons->setObjectName(QStringLiteral("navButtons"));
        frameNavMain = new QFrame(frameNav);
        frameNavMain->setObjectName(QStringLiteral("frameNavMain"));
        hboxLayout = new QHBoxLayout(frameNavMain);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        labelNavMain = new QLabel(frameNavMain);
        labelNavMain->setObjectName(QStringLiteral("labelNavMain"));

        hboxLayout->addWidget(labelNavMain);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        buttonChevron1 = new QPushButton(frameNavMain);
        buttonChevron1->setObjectName(QStringLiteral("buttonChevron1"));

        hboxLayout->addWidget(buttonChevron1);


        navButtons->addWidget(frameNavMain);

        frameNavNetwork = new QFrame(frameNav);
        frameNavNetwork->setObjectName(QStringLiteral("frameNavNetwork"));
        hboxLayout1 = new QHBoxLayout(frameNavNetwork);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelNavNetwork = new QLabel(frameNavNetwork);
        labelNavNetwork->setObjectName(QStringLiteral("labelNavNetwork"));

        hboxLayout1->addWidget(labelNavNetwork);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer1);

        buttonChevron2 = new QPushButton(frameNavNetwork);
        buttonChevron2->setObjectName(QStringLiteral("buttonChevron2"));

        hboxLayout1->addWidget(buttonChevron2);


        navButtons->addWidget(frameNavNetwork);

        frameNavExpert = new QFrame(frameNav);
        frameNavExpert->setObjectName(QStringLiteral("frameNavExpert"));
        hboxLayout2 = new QHBoxLayout(frameNavExpert);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        labelNavExpert = new QLabel(frameNavExpert);
        labelNavExpert->setObjectName(QStringLiteral("labelNavExpert"));

        hboxLayout2->addWidget(labelNavExpert);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(horizontalSpacer2);

        buttonChevron3 = new QPushButton(frameNavExpert);
        buttonChevron3->setObjectName(QStringLiteral("buttonChevron3"));

        hboxLayout2->addWidget(buttonChevron3);


        navButtons->addWidget(frameNavExpert);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navButtons->addItem(verticalSpacer_Wallet);

        frameNavOpenConf = new QFrame(frameNav);
        frameNavOpenConf->setObjectName(QStringLiteral("frameNavOpenConf"));
        hboxLayout3 = new QHBoxLayout(frameNavOpenConf);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        labelNavOpenConf = new QLabel(frameNavOpenConf);
        labelNavOpenConf->setObjectName(QStringLiteral("labelNavOpenConf"));

        hboxLayout3->addWidget(labelNavOpenConf);

        horizontalSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(horizontalSpacer3);

        buttonOpen1 = new QPushButton(frameNavOpenConf);
        buttonOpen1->setObjectName(QStringLiteral("buttonOpen1"));

        hboxLayout3->addWidget(buttonOpen1);


        navButtons->addWidget(frameNavOpenConf);

        frameNavOpenMNConf = new QFrame(frameNav);
        frameNavOpenMNConf->setObjectName(QStringLiteral("frameNavOpenMNConf"));
        hboxLayout4 = new QHBoxLayout(frameNavOpenMNConf);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        labelNavOpenMNConf = new QLabel(frameNavOpenMNConf);
        labelNavOpenMNConf->setObjectName(QStringLiteral("labelNavOpenMNConf"));

        hboxLayout4->addWidget(labelNavOpenMNConf);

        horizontalSpacer4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(horizontalSpacer4);

        buttonOpen2 = new QPushButton(frameNavOpenMNConf);
        buttonOpen2->setObjectName(QStringLiteral("buttonOpen2"));

        hboxLayout4->addWidget(buttonOpen2);


        navButtons->addWidget(frameNavOpenMNConf);

        frameNavOpenBackups = new QFrame(frameNav);
        frameNavOpenBackups->setObjectName(QStringLiteral("frameNavOpenBackups"));
        hboxLayout5 = new QHBoxLayout(frameNavOpenBackups);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        labelNavOpenBackups = new QLabel(frameNavOpenBackups);
        labelNavOpenBackups->setObjectName(QStringLiteral("labelNavOpenBackups"));

        hboxLayout5->addWidget(labelNavOpenBackups);

        horizontalSpacer5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(horizontalSpacer5);

        buttonOpen3 = new QPushButton(frameNavOpenBackups);
        buttonOpen3->setObjectName(QStringLiteral("buttonOpen3"));

        hboxLayout5->addWidget(buttonOpen3);


        navButtons->addWidget(frameNavOpenBackups);

        verticalSpacer_Wallet1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navButtons->addItem(verticalSpacer_Wallet1);


        topLayout->addWidget(frameNav);

        scrollArea = new QScrollArea(SettingsPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        frameSettings = new QFrame();
        frameSettings->setObjectName(QStringLiteral("frameSettings"));
        frameSettings->setFrameShape(QFrame::StyledPanel);
        frameSettings->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frameSettings);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(77, 0, 77, 0);
        frameMain = new QFrame(frameSettings);
        frameMain->setObjectName(QStringLiteral("frameMain"));
        frameMain->setFrameShape(QFrame::StyledPanel);
        frameMain->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frameMain);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        labelSettingsStartup = new QLabel(frameMain);
        labelSettingsStartup->setObjectName(QStringLiteral("labelSettingsStartup"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelSettingsStartup->setFont(font);

        vboxLayout1->addWidget(labelSettingsStartup);

        hiluxAtStartup = new QCheckBox(frameMain);
        hiluxAtStartup->setObjectName(QStringLiteral("hiluxAtStartup"));

        vboxLayout1->addWidget(hiluxAtStartup);

        labelSettingsTray = new QLabel(frameMain);
        labelSettingsTray->setObjectName(QStringLiteral("labelSettingsTray"));
        labelSettingsTray->setFont(font);

        vboxLayout1->addWidget(labelSettingsTray);

        hideTrayIcon = new QCheckBox(frameMain);
        hideTrayIcon->setObjectName(QStringLiteral("hideTrayIcon"));

        vboxLayout1->addWidget(hideTrayIcon);

        minimizeToTray = new QCheckBox(frameMain);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));

        vboxLayout1->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(frameMain);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));

        vboxLayout1->addWidget(minimizeOnClose);

        labelSettingsLanguage = new QLabel(frameMain);
        labelSettingsLanguage->setObjectName(QStringLiteral("labelSettingsLanguage"));
        labelSettingsLanguage->setFont(font);

        vboxLayout1->addWidget(labelSettingsLanguage);

        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QStringLiteral("horizontalLayout_1_Display"));
        langLabel = new QLabel(frameMain);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(frameMain);
        lang->setObjectName(QStringLiteral("lang"));

        horizontalLayout_1_Display->addWidget(lang);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Display->addItem(spacerItem);


        vboxLayout1->addLayout(horizontalLayout_1_Display);

        labelSettingsCurrency = new QLabel(frameMain);
        labelSettingsCurrency->setObjectName(QStringLiteral("labelSettingsCurrency"));
        labelSettingsCurrency->setFont(font);

        vboxLayout1->addWidget(labelSettingsCurrency);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QStringLiteral("horizontalLayout_2_Display"));
        unitLabel = new QLabel(frameMain);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(frameMain);
        unit->setObjectName(QStringLiteral("unit"));

        horizontalLayout_2_Display->addWidget(unit);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Display->addItem(spacerItem1);


        vboxLayout1->addLayout(horizontalLayout_2_Display);

        horizontalLayout_5_Display = new QHBoxLayout();
        horizontalLayout_5_Display->setObjectName(QStringLiteral("horizontalLayout_5_Display"));
        digitsLabel = new QLabel(frameMain);
        digitsLabel->setObjectName(QStringLiteral("digitsLabel"));

        horizontalLayout_5_Display->addWidget(digitsLabel);

        digits = new QValueComboBox(frameMain);
        digits->setObjectName(QStringLiteral("digits"));

        horizontalLayout_5_Display->addWidget(digits);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5_Display->addItem(spacerItem2);


        vboxLayout1->addLayout(horizontalLayout_5_Display);

        verticalSpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacerBottom);


        vboxLayout->addWidget(frameMain);

        frameNetwork = new QFrame(frameSettings);
        frameNetwork->setObjectName(QStringLiteral("frameNetwork"));
        verticalLayout_Wallet = new QVBoxLayout(frameNetwork);
        verticalLayout_Wallet->setObjectName(QStringLiteral("verticalLayout_Wallet"));
        labelSettingsUPnP = new QLabel(frameNetwork);
        labelSettingsUPnP->setObjectName(QStringLiteral("labelSettingsUPnP"));
        labelSettingsUPnP->setFont(font);

        verticalLayout_Wallet->addWidget(labelSettingsUPnP);

        verticalLayout_Network = new QVBoxLayout();
        verticalLayout_Network->setObjectName(QStringLiteral("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(frameNetwork);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);


        verticalLayout_Wallet->addLayout(verticalLayout_Network);

        labelSettingsListen = new QLabel(frameNetwork);
        labelSettingsListen->setObjectName(QStringLiteral("labelSettingsListen"));
        labelSettingsListen->setFont(font);

        verticalLayout_Wallet->addWidget(labelSettingsListen);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        allowIncoming = new QCheckBox(frameNetwork);
        allowIncoming->setObjectName(QStringLiteral("allowIncoming"));

        vboxLayout2->addWidget(allowIncoming);


        verticalLayout_Wallet->addLayout(vboxLayout2);

        labelSettingsProxy = new QLabel(frameNetwork);
        labelSettingsProxy->setObjectName(QStringLiteral("labelSettingsProxy"));
        labelSettingsProxy->setFont(font);

        verticalLayout_Wallet->addWidget(labelSettingsProxy);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        connectSocks = new QCheckBox(frameNetwork);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));

        vboxLayout3->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QStringLiteral("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(frameNetwork);
        proxyIpLabel->setObjectName(QStringLiteral("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(frameNetwork);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 0));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(frameNetwork);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(frameNetwork);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimumSize(QSize(55, 0));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(spacerItem3);


        vboxLayout3->addLayout(horizontalLayout_1_Network);

        horizontalLayout_2_Network = new QHBoxLayout();
        horizontalLayout_2_Network->setObjectName(QStringLiteral("horizontalLayout_2_Network"));
        proxyActiveNets = new QLabel(frameNetwork);
        proxyActiveNets->setObjectName(QStringLiteral("proxyActiveNets"));
        proxyActiveNets->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyActiveNets);

        proxyReachIPv4 = new QCheckBox(frameNetwork);
        proxyReachIPv4->setObjectName(QStringLiteral("proxyReachIPv4"));
        proxyReachIPv4->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4);

        proxyReachIPv4Label = new QLabel(frameNetwork);
        proxyReachIPv4Label->setObjectName(QStringLiteral("proxyReachIPv4Label"));
        proxyReachIPv4Label->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4Label);

        proxyReachIPv6 = new QCheckBox(frameNetwork);
        proxyReachIPv6->setObjectName(QStringLiteral("proxyReachIPv6"));
        proxyReachIPv6->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6);

        proxyReachIPv6Label = new QLabel(frameNetwork);
        proxyReachIPv6Label->setObjectName(QStringLiteral("proxyReachIPv6Label"));
        proxyReachIPv6Label->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6Label);

        proxyReachTor = new QCheckBox(frameNetwork);
        proxyReachTor->setObjectName(QStringLiteral("proxyReachTor"));
        proxyReachTor->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachTor);

        proxyReachTorLabel = new QLabel(frameNetwork);
        proxyReachTorLabel->setObjectName(QStringLiteral("proxyReachTorLabel"));
        proxyReachTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachTorLabel);

        horizontalSpacer_2_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Network->addItem(horizontalSpacer_2_Network);


        vboxLayout3->addLayout(horizontalLayout_2_Network);

        labelSettingsHSProxy = new QLabel(frameNetwork);
        labelSettingsHSProxy->setObjectName(QStringLiteral("labelSettingsHSProxy"));
        labelSettingsHSProxy->setFont(font);

        vboxLayout3->addWidget(labelSettingsHSProxy);

        connectSocksTor = new QCheckBox(frameNetwork);
        connectSocksTor->setObjectName(QStringLiteral("connectSocksTor"));

        vboxLayout3->addWidget(connectSocksTor);

        horizontalLayout_3_Network = new QHBoxLayout();
        horizontalLayout_3_Network->setObjectName(QStringLiteral("horizontalLayout_3_Network"));
        proxyIpTorLabel = new QLabel(frameNetwork);
        proxyIpTorLabel->setObjectName(QStringLiteral("proxyIpTorLabel"));
        proxyIpTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyIpTorLabel);

        proxyIpTor = new QValidatedLineEdit(frameNetwork);
        proxyIpTor->setObjectName(QStringLiteral("proxyIpTor"));
        proxyIpTor->setMinimumSize(QSize(140, 0));
        proxyIpTor->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_3_Network->addWidget(proxyIpTor);

        proxyPortTorLabel = new QLabel(frameNetwork);
        proxyPortTorLabel->setObjectName(QStringLiteral("proxyPortTorLabel"));
        proxyPortTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyPortTorLabel);

        proxyPortTor = new QLineEdit(frameNetwork);
        proxyPortTor->setObjectName(QStringLiteral("proxyPortTor"));
        proxyPortTor->setMinimumSize(QSize(55, 0));
        proxyPortTor->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_3_Network->addWidget(proxyPortTor);

        horizontalSpacer_4_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Network->addItem(horizontalSpacer_4_Network);


        vboxLayout3->addLayout(horizontalLayout_3_Network);

        verticalSpacerBottom1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(verticalSpacerBottom1);


        verticalLayout_Wallet->addLayout(vboxLayout3);


        vboxLayout->addWidget(frameNetwork);

        frameExpert = new QFrame(frameSettings);
        frameExpert->setObjectName(QStringLiteral("frameExpert"));
        verticalLayout_Wallet1 = new QVBoxLayout(frameExpert);
        verticalLayout_Wallet1->setObjectName(QStringLiteral("verticalLayout_Wallet1"));
        labelSettingsSending = new QLabel(frameExpert);
        labelSettingsSending->setObjectName(QStringLiteral("labelSettingsSending"));
        labelSettingsSending->setFont(font);

        verticalLayout_Wallet1->addWidget(labelSettingsSending);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        coinControlFeatures = new QCheckBox(frameExpert);
        coinControlFeatures->setObjectName(QStringLiteral("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        spendZeroConfChange = new QCheckBox(frameExpert);
        spendZeroConfChange->setObjectName(QStringLiteral("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);


        verticalLayout_Wallet1->addLayout(verticalLayout_2);

        labelSettingsMasternodes = new QLabel(frameExpert);
        labelSettingsMasternodes->setObjectName(QStringLiteral("labelSettingsMasternodes"));
        labelSettingsMasternodes->setFont(font);

        verticalLayout_Wallet1->addWidget(labelSettingsMasternodes);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        showMasternodesTab = new QCheckBox(frameExpert);
        showMasternodesTab->setObjectName(QStringLiteral("showMasternodesTab"));

        verticalLayout_21->addWidget(showMasternodesTab);


        verticalLayout_Wallet1->addLayout(verticalLayout_21);

        labelSettingsPrivateSend = new QLabel(frameExpert);
        labelSettingsPrivateSend->setObjectName(QStringLiteral("labelSettingsPrivateSend"));
        labelSettingsPrivateSend->setFont(font);

        verticalLayout_Wallet1->addWidget(labelSettingsPrivateSend);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        showAdvancedPSUI = new QCheckBox(frameExpert);
        showAdvancedPSUI->setObjectName(QStringLiteral("showAdvancedPSUI"));

        verticalLayout_22->addWidget(showAdvancedPSUI);

        lowKeysWarning = new QCheckBox(frameExpert);
        lowKeysWarning->setObjectName(QStringLiteral("lowKeysWarning"));

        verticalLayout_22->addWidget(lowKeysWarning);

        privateSendMultiSession = new QCheckBox(frameExpert);
        privateSendMultiSession->setObjectName(QStringLiteral("privateSendMultiSession"));

        verticalLayout_22->addWidget(privateSendMultiSession);


        verticalLayout_Wallet1->addLayout(verticalLayout_22);

        horizontalLayout_4_Wallet = new QHBoxLayout();
        horizontalLayout_4_Wallet->setObjectName(QStringLiteral("horizontalLayout_4_Wallet"));
        label = new QLabel(frameExpert);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4_Wallet->addWidget(label);

        privateSendRounds = new QSpinBox(frameExpert);
        privateSendRounds->setObjectName(QStringLiteral("privateSendRounds"));
        privateSendRounds->setMinimum(2);
        privateSendRounds->setMaximum(8);
        privateSendRounds->setValue(4);

        horizontalLayout_4_Wallet->addWidget(privateSendRounds);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4_Wallet->addItem(spacerItem4);


        verticalLayout_Wallet1->addLayout(horizontalLayout_4_Wallet);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(frameExpert);
        label_2->setObjectName(QStringLiteral("label_2"));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout->addWidget(label_2);

        privateSendAmount = new QSpinBox(frameExpert);
        privateSendAmount->setObjectName(QStringLiteral("privateSendAmount"));
        privateSendAmount->setMinimum(2);
        privateSendAmount->setMaximum(2000);
        privateSendAmount->setSingleStep(10);
        privateSendAmount->setValue(1000);

        horizontalLayout->addWidget(privateSendAmount);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem5);


        verticalLayout_Wallet1->addLayout(horizontalLayout);

        labelSettingsNode = new QLabel(frameExpert);
        labelSettingsNode->setObjectName(QStringLiteral("labelSettingsNode"));
        labelSettingsNode->setFont(font);

        verticalLayout_Wallet1->addWidget(labelSettingsNode);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QStringLiteral("horizontalLayout_2_Main"));
        databaseCacheLabel = new QLabel(frameExpert);
        databaseCacheLabel->setObjectName(QStringLiteral("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheLabel);

        databaseCache = new QSpinBox(frameExpert);
        databaseCache->setObjectName(QStringLiteral("databaseCache"));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(frameExpert);
        databaseCacheUnitLabel->setObjectName(QStringLiteral("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(spacerItem6);


        verticalLayout_Wallet1->addLayout(horizontalLayout_2_Main);

        horizontalLayout_3_Main = new QHBoxLayout();
        horizontalLayout_3_Main->setObjectName(QStringLiteral("horizontalLayout_3_Main"));
        threadsScriptVerifLabel = new QLabel(frameExpert);
        threadsScriptVerifLabel->setObjectName(QStringLiteral("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Main->addWidget(threadsScriptVerifLabel);

        threadsScriptVerif = new QSpinBox(frameExpert);
        threadsScriptVerif->setObjectName(QStringLiteral("threadsScriptVerif"));

        horizontalLayout_3_Main->addWidget(threadsScriptVerif);

        horizontalSpacer_3_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(horizontalSpacer_3_Main);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(spacerItem7);


        verticalLayout_Wallet1->addLayout(horizontalLayout_3_Main);

        verticalSpacer_Wallet2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet1->addItem(verticalSpacer_Wallet2);


        vboxLayout->addWidget(frameExpert);

        scrollArea->setWidget(frameSettings);

        topLayout->addWidget(scrollArea);

        frameControlButtons = new QFrame(SettingsPage);
        frameControlButtons->setObjectName(QStringLiteral("frameControlButtons"));
        layoutControlButtons = new QHBoxLayout(frameControlButtons);
        layoutControlButtons->setObjectName(QStringLiteral("layoutControlButtons"));
        saveButton = new QPushButton(frameControlButtons);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setMinimumSize(QSize(150, 0));
        saveButton->setAutoDefault(false);

        layoutControlButtons->addWidget(saveButton);

        statusLabel = new QLabel(frameControlButtons);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        layoutControlButtons->addWidget(statusLabel);

        horizontalSpacer6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutControlButtons->addItem(horizontalSpacer6);

        cancelButton = new QPushButton(frameControlButtons);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMinimumSize(QSize(150, 0));
        cancelButton->setAutoDefault(false);

        layoutControlButtons->addWidget(cancelButton);


        topLayout->addWidget(frameControlButtons);

#ifndef QT_NO_SHORTCUT
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        proxyIpTorLabel->setBuddy(proxyIpTor);
        proxyPortTorLabel->setBuddy(proxyPortTor);
        databaseCacheLabel->setBuddy(databaseCache);
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
#endif // QT_NO_SHORTCUT

        retranslateUi(SettingsPage);

        saveButton->setDefault(true);
        cancelButton->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QApplication::translate("SettingsPage", "Settings", 0));
        labelNavMain->setText(QApplication::translate("SettingsPage", "Wallet Settings", 0));
        labelNavNetwork->setText(QApplication::translate("SettingsPage", "Network Settings", 0));
        labelNavExpert->setText(QApplication::translate("SettingsPage", "Advanced Settings", 0));
        labelNavOpenConf->setText(QApplication::translate("SettingsPage", "Open Wallet Configuration File", 0));
        labelNavOpenMNConf->setText(QApplication::translate("SettingsPage", "Open Masternode Configuration File", 0));
        labelNavOpenBackups->setText(QApplication::translate("SettingsPage", "Open Automatic Backups Folder", 0));
        labelSettingsStartup->setText(QApplication::translate("SettingsPage", "Startup", 0));
#ifndef QT_NO_TOOLTIP
        hiluxAtStartup->setToolTip(QApplication::translate("SettingsPage", "Automatically start Hilux after logging in to the system.", 0));
#endif // QT_NO_TOOLTIP
        hiluxAtStartup->setText(QApplication::translate("SettingsPage", "&Start Hilux on system login", 0));
        labelSettingsTray->setText(QApplication::translate("SettingsPage", "Tray Icon", 0));
#ifndef QT_NO_TOOLTIP
        hideTrayIcon->setToolTip(QApplication::translate("SettingsPage", "&Hide the icon from the system tray.", 0));
#endif // QT_NO_TOOLTIP
        hideTrayIcon->setText(QApplication::translate("SettingsPage", "Hide tray icon", 0));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("SettingsPage", "Show only a tray icon after minimizing the window.", 0));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("SettingsPage", "&Minimize to the tray instead of the taskbar", 0));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("SettingsPage", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Exit in the menu.", 0));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("SettingsPage", "M&inimize on close", 0));
        labelSettingsLanguage->setText(QApplication::translate("SettingsPage", "Language", 0));
        langLabel->setText(QApplication::translate("SettingsPage", "User Interface &language:", 0));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("SettingsPage", "The user interface language can be set here. This setting will take effect after restarting Hilux.", 0));
#endif // QT_NO_TOOLTIP
        labelSettingsCurrency->setText(QApplication::translate("SettingsPage", "Currency", 0));
        unitLabel->setText(QApplication::translate("SettingsPage", "&Unit to show amounts in:", 0));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("SettingsPage", "Choose the default subdivision unit to show in the interface and when sending coins.", 0));
#endif // QT_NO_TOOLTIP
        digitsLabel->setText(QApplication::translate("SettingsPage", "Decimal digits", 0));
        labelSettingsUPnP->setText(QApplication::translate("SettingsPage", "UPnP", 0));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("SettingsPage", "Automatically open the Hilux client port on the router. This only works when your router supports UPnP and it is enabled.", 0));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("SettingsPage", "Map port using &UPnP", 0));
        labelSettingsListen->setText(QApplication::translate("SettingsPage", "Incoming Connections", 0));
#ifndef QT_NO_TOOLTIP
        allowIncoming->setToolTip(QApplication::translate("SettingsPage", "Accept connections from outside", 0));
#endif // QT_NO_TOOLTIP
        allowIncoming->setText(QApplication::translate("SettingsPage", "Allow incoming connections", 0));
        labelSettingsProxy->setText(QApplication::translate("SettingsPage", "Proxy", 0));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("SettingsPage", "Connect to the Hilux network through a SOCKS5 proxy.", 0));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("SettingsPage", "&Connect through SOCKS5 proxy (default proxy):", 0));
        proxyIpLabel->setText(QApplication::translate("SettingsPage", "Proxy &IP:", 0));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("SettingsPage", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", 0));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("SettingsPage", "&Port:", 0));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("SettingsPage", "Port of the proxy (e.g. 9050)", 0));
#endif // QT_NO_TOOLTIP
        proxyActiveNets->setText(QApplication::translate("SettingsPage", "Used for reaching peers via:", 0));
#ifndef QT_NO_TOOLTIP
        proxyReachIPv4->setToolTip(QApplication::translate("SettingsPage", "Shows, if the supplied default SOCKS5 proxy is used to reach peers via this network type.", 0));
#endif // QT_NO_TOOLTIP
        proxyReachIPv4->setText(QString());
        proxyReachIPv4Label->setText(QApplication::translate("SettingsPage", "IPv4", 0));
#ifndef QT_NO_TOOLTIP
        proxyReachIPv6->setToolTip(QApplication::translate("SettingsPage", "Shows, if the supplied default SOCKS5 proxy is used to reach peers via this network type.", 0));
#endif // QT_NO_TOOLTIP
        proxyReachIPv6->setText(QString());
        proxyReachIPv6Label->setText(QApplication::translate("SettingsPage", "IPv6", 0));
#ifndef QT_NO_TOOLTIP
        proxyReachTor->setToolTip(QApplication::translate("SettingsPage", "Shows, if the supplied default SOCKS5 proxy is used to reach peers via this network type.", 0));
#endif // QT_NO_TOOLTIP
        proxyReachTor->setText(QString());
        proxyReachTorLabel->setText(QApplication::translate("SettingsPage", "Tor", 0));
        labelSettingsHSProxy->setText(QApplication::translate("SettingsPage", "Hidden Services Proxy", 0));
#ifndef QT_NO_TOOLTIP
        connectSocksTor->setToolTip(QApplication::translate("SettingsPage", "Connect to the Hilux network through a separate SOCKS5 proxy for Tor hidden services.", 0));
#endif // QT_NO_TOOLTIP
        connectSocksTor->setText(QApplication::translate("SettingsPage", "Use separate SOCKS5 proxy to reach peers via Tor hidden services:", 0));
        proxyIpTorLabel->setText(QApplication::translate("SettingsPage", "Proxy &IP:", 0));
#ifndef QT_NO_TOOLTIP
        proxyIpTor->setToolTip(QApplication::translate("SettingsPage", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", 0));
#endif // QT_NO_TOOLTIP
        proxyPortTorLabel->setText(QApplication::translate("SettingsPage", "&Port:", 0));
#ifndef QT_NO_TOOLTIP
        proxyPortTor->setToolTip(QApplication::translate("SettingsPage", "Port of the proxy (e.g. 9050)", 0));
#endif // QT_NO_TOOLTIP
        labelSettingsSending->setText(QApplication::translate("SettingsPage", "Sending", 0));
#ifndef QT_NO_TOOLTIP
        coinControlFeatures->setToolTip(QApplication::translate("SettingsPage", "Whether to show coin control features or not.", 0));
#endif // QT_NO_TOOLTIP
        coinControlFeatures->setText(QApplication::translate("SettingsPage", "Enable coin &control features", 0));
#ifndef QT_NO_TOOLTIP
        spendZeroConfChange->setToolTip(QApplication::translate("SettingsPage", "If you disable the spending of unconfirmed change, the change from a transaction<br/>cannot be used until that transaction has at least one confirmation.<br/>This also affects how your balance is computed.", 0));
#endif // QT_NO_TOOLTIP
        spendZeroConfChange->setText(QApplication::translate("SettingsPage", "&Spend unconfirmed change", 0));
        labelSettingsMasternodes->setText(QApplication::translate("SettingsPage", "Masternodes", 0));
#ifndef QT_NO_TOOLTIP
        showMasternodesTab->setToolTip(QApplication::translate("SettingsPage", "Show additional tab listing all your masternodes in first sub-tab<br/>and all masternodes on the network in second sub-tab.", 0));
#endif // QT_NO_TOOLTIP
        showMasternodesTab->setText(QApplication::translate("SettingsPage", "Show Masternodes Tab", 0));
        labelSettingsPrivateSend->setText(QApplication::translate("SettingsPage", "PrivateSend", 0));
#ifndef QT_NO_TOOLTIP
        showAdvancedPSUI->setToolTip(QApplication::translate("SettingsPage", "Show additional information and buttons for PrivateSend on overview screen.", 0));
#endif // QT_NO_TOOLTIP
        showAdvancedPSUI->setText(QApplication::translate("SettingsPage", "Enable advanced PrivateSend interface", 0));
#ifndef QT_NO_TOOLTIP
        lowKeysWarning->setToolTip(QApplication::translate("SettingsPage", "Show warning dialog when PrivateSend detects that wallet has very low number of keys left.", 0));
#endif // QT_NO_TOOLTIP
        lowKeysWarning->setText(QApplication::translate("SettingsPage", "Warn if PrivateSend is running out of keys", 0));
#ifndef QT_NO_TOOLTIP
        privateSendMultiSession->setToolTip(QApplication::translate("SettingsPage", "Whether to use experimental PrivateSend mode with multiple mixing sessions per block.<br/>Note: You must use this feature carefully.<br/>Make sure you always have recent wallet (auto)backup in a safe place!", 0));
#endif // QT_NO_TOOLTIP
        privateSendMultiSession->setText(QApplication::translate("SettingsPage", "Enable PrivateSend &multi-session", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SettingsPage", "This setting determines the amount of individual masternodes that an input will be anonymized through.<br/>More rounds of anonymization gives a higher degree of privacy, but also costs more in fees.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SettingsPage", "PrivateSend rounds to use", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("SettingsPage", "This amount acts as a threshold to turn off PrivateSend once it's reached.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SettingsPage", "Amount of HLX to keep anonymized", 0));
        labelSettingsNode->setText(QApplication::translate("SettingsPage", "Node", 0));
        databaseCacheLabel->setText(QApplication::translate("SettingsPage", "Size of &database cache", 0));
        databaseCacheUnitLabel->setText(QApplication::translate("SettingsPage", "MB", 0));
        threadsScriptVerifLabel->setText(QApplication::translate("SettingsPage", "Number of script &verification threads", 0));
#ifndef QT_NO_TOOLTIP
        threadsScriptVerif->setToolTip(QApplication::translate("SettingsPage", "(0 = auto, <0 = leave that many cores free)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("SettingsPage", "Confirm the settings changes", 0));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QApplication::translate("SettingsPage", "S&ave", 0));
        statusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("SettingsPage", "Cancel the settings changes", 0));
#endif // QT_NO_TOOLTIP
        cancelButton->setText(QApplication::translate("SettingsPage", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGE_H
