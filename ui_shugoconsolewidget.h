/********************************************************************************
** Form generated from reading UI file 'shugoconsolewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUGOCONSOLEWIDGET_H
#define UI_SHUGOCONSOLEWIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShugoConsoleWidget
{
public:
    QLabel *bannerLabel;
    QGroupBox *advancedSettingsGroupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *advancedSettingsSpacer_2;
    QWidget *widget;
    QFormLayout *VarUnlocker;
    QComboBox *restrictedCombo;
    QCheckBox *restrictedCheck;
    QLabel *helpLabel;
    QGroupBox *consoleSettingsGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *consoleSettingsLayout;
    QCheckBox *consoleCheck;
    QComboBox *consoleCombo;
    QSpacerItem *consoleSettingsSpacer;
    QGroupBox *cameraSettingsGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *cameraSettingsLayout;
    QCheckBox *fovCheck;
    QDoubleSpinBox *fovSpinBox;
    QCheckBox *cammaxCheck;
    QDoubleSpinBox *cammaxSpinBox;
    QSpacerItem *cameraSettingsSpacer;
    QGroupBox *chatLogSettingsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *chatLogSettingsLayout;
    QCheckBox *chatLogCheck;
    QComboBox *chatLogCombo;
    QSpacerItem *chatLogSettingsSpacer;
    QGroupBox *advancedSettingsGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *advancedSettingsLayout;
    QCheckBox *maxfpsCheck;
    QComboBox *maxfpsCombo;
    QCheckBox *tripleBufferingCheck;
    QComboBox *tripleBufferingCombo;
    QCheckBox *anisotropicCheck;
    QComboBox *anisotropicCombo;
    QGroupBox *processesGroupBox;
    QListView *processesView;
    QWidget *widget1;
    QHBoxLayout *defaultsLayout;
    QCheckBox *runOnStartupCheck;
    QSpacerItem *defaultsSpacer;
    QPushButton *resetDefaultsButton;

    void setupUi(QWidget *ShugoConsoleWidget)
    {
        if (ShugoConsoleWidget->objectName().isEmpty())
            ShugoConsoleWidget->setObjectName(QStringLiteral("ShugoConsoleWidget"));
        ShugoConsoleWidget->resize(306, 639);
        bannerLabel = new QLabel(ShugoConsoleWidget);
        bannerLabel->setObjectName(QStringLiteral("bannerLabel"));
        bannerLabel->setGeometry(QRect(0, 0, 256, 75));
        bannerLabel->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255);"));
        bannerLabel->setLocale(QLocale(QLocale::French, QLocale::France));
        bannerLabel->setTextFormat(Qt::RichText);
        bannerLabel->setPixmap(QPixmap(QString::fromUtf8(":/ShugoConsole/banner.png")));
        advancedSettingsGroupBox_2 = new QGroupBox(ShugoConsoleWidget);
        advancedSettingsGroupBox_2->setObjectName(QStringLiteral("advancedSettingsGroupBox_2"));
        advancedSettingsGroupBox_2->setGeometry(QRect(10, 10, 288, 107));
        advancedSettingsGroupBox_2->setFlat(true);
        horizontalLayout_6 = new QHBoxLayout(advancedSettingsGroupBox_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        advancedSettingsSpacer_2 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(advancedSettingsSpacer_2);

        widget = new QWidget(ShugoConsoleWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 530, 131, 101));
        VarUnlocker = new QFormLayout(widget);
        VarUnlocker->setSpacing(6);
        VarUnlocker->setContentsMargins(11, 11, 11, 11);
        VarUnlocker->setObjectName(QStringLiteral("VarUnlocker"));
        VarUnlocker->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        VarUnlocker->setContentsMargins(0, 0, 0, 0);
        restrictedCombo = new QComboBox(widget);
        restrictedCombo->setObjectName(QStringLiteral("restrictedCombo"));

        VarUnlocker->setWidget(5, QFormLayout::LabelRole, restrictedCombo);

        restrictedCheck = new QCheckBox(widget);
        restrictedCheck->setObjectName(QStringLiteral("restrictedCheck"));

        VarUnlocker->setWidget(4, QFormLayout::LabelRole, restrictedCheck);

        helpLabel = new QLabel(ShugoConsoleWidget);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));
        helpLabel->setGeometry(QRect(9, 90, 288, 64));
        helpLabel->setLocale(QLocale(QLocale::French, QLocale::France));
        helpLabel->setTextFormat(Qt::RichText);
        helpLabel->setScaledContents(true);
        helpLabel->setWordWrap(true);
        consoleSettingsGroupBox = new QGroupBox(ShugoConsoleWidget);
        consoleSettingsGroupBox->setObjectName(QStringLiteral("consoleSettingsGroupBox"));
        consoleSettingsGroupBox->setGeometry(QRect(9, 191, 284, 55));
        consoleSettingsGroupBox->setFlat(true);
        consoleSettingsGroupBox->setCheckable(false);
        horizontalLayout_3 = new QHBoxLayout(consoleSettingsGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        consoleSettingsLayout = new QFormLayout();
        consoleSettingsLayout->setSpacing(6);
        consoleSettingsLayout->setObjectName(QStringLiteral("consoleSettingsLayout"));
        consoleCheck = new QCheckBox(consoleSettingsGroupBox);
        consoleCheck->setObjectName(QStringLiteral("consoleCheck"));

        consoleSettingsLayout->setWidget(0, QFormLayout::LabelRole, consoleCheck);

        consoleCombo = new QComboBox(consoleSettingsGroupBox);
        consoleCombo->setObjectName(QStringLiteral("consoleCombo"));

        consoleSettingsLayout->setWidget(0, QFormLayout::FieldRole, consoleCombo);


        horizontalLayout_3->addLayout(consoleSettingsLayout);

        consoleSettingsSpacer = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(consoleSettingsSpacer);

        cameraSettingsGroupBox = new QGroupBox(ShugoConsoleWidget);
        cameraSettingsGroupBox->setObjectName(QStringLiteral("cameraSettingsGroupBox"));
        cameraSettingsGroupBox->setGeometry(QRect(9, 252, 288, 81));
        cameraSettingsGroupBox->setFlat(true);
        horizontalLayout_4 = new QHBoxLayout(cameraSettingsGroupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cameraSettingsLayout = new QFormLayout();
        cameraSettingsLayout->setSpacing(6);
        cameraSettingsLayout->setObjectName(QStringLiteral("cameraSettingsLayout"));
        fovCheck = new QCheckBox(cameraSettingsGroupBox);
        fovCheck->setObjectName(QStringLiteral("fovCheck"));

        cameraSettingsLayout->setWidget(0, QFormLayout::LabelRole, fovCheck);

        fovSpinBox = new QDoubleSpinBox(cameraSettingsGroupBox);
        fovSpinBox->setObjectName(QStringLiteral("fovSpinBox"));
        fovSpinBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        fovSpinBox->setMinimum(60);
        fovSpinBox->setMaximum(170);
        fovSpinBox->setValue(90);

        cameraSettingsLayout->setWidget(0, QFormLayout::FieldRole, fovSpinBox);

        cammaxCheck = new QCheckBox(cameraSettingsGroupBox);
        cammaxCheck->setObjectName(QStringLiteral("cammaxCheck"));

        cameraSettingsLayout->setWidget(1, QFormLayout::LabelRole, cammaxCheck);

        cammaxSpinBox = new QDoubleSpinBox(cameraSettingsGroupBox);
        cammaxSpinBox->setObjectName(QStringLiteral("cammaxSpinBox"));
        cammaxSpinBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        cammaxSpinBox->setMinimum(5);
        cammaxSpinBox->setMaximum(50);
        cammaxSpinBox->setValue(28);

        cameraSettingsLayout->setWidget(1, QFormLayout::FieldRole, cammaxSpinBox);


        horizontalLayout_4->addLayout(cameraSettingsLayout);

        cameraSettingsSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(cameraSettingsSpacer);

        chatLogSettingsGroupBox = new QGroupBox(ShugoConsoleWidget);
        chatLogSettingsGroupBox->setObjectName(QStringLiteral("chatLogSettingsGroupBox"));
        chatLogSettingsGroupBox->setGeometry(QRect(9, 339, 206, 55));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatLogSettingsGroupBox->sizePolicy().hasHeightForWidth());
        chatLogSettingsGroupBox->setSizePolicy(sizePolicy);
        chatLogSettingsGroupBox->setMaximumSize(QSize(16777215, 16777215));
        chatLogSettingsGroupBox->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(chatLogSettingsGroupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        chatLogSettingsLayout = new QFormLayout();
        chatLogSettingsLayout->setSpacing(6);
        chatLogSettingsLayout->setObjectName(QStringLiteral("chatLogSettingsLayout"));
        chatLogSettingsLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        chatLogCheck = new QCheckBox(chatLogSettingsGroupBox);
        chatLogCheck->setObjectName(QStringLiteral("chatLogCheck"));

        chatLogSettingsLayout->setWidget(0, QFormLayout::LabelRole, chatLogCheck);

        chatLogCombo = new QComboBox(chatLogSettingsGroupBox);
        chatLogCombo->setObjectName(QStringLiteral("chatLogCombo"));

        chatLogSettingsLayout->setWidget(0, QFormLayout::FieldRole, chatLogCombo);


        horizontalLayout_2->addLayout(chatLogSettingsLayout);

        chatLogSettingsSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(chatLogSettingsSpacer);

        advancedSettingsGroupBox = new QGroupBox(ShugoConsoleWidget);
        advancedSettingsGroupBox->setObjectName(QStringLiteral("advancedSettingsGroupBox"));
        advancedSettingsGroupBox->setGeometry(QRect(9, 400, 284, 107));
        advancedSettingsGroupBox->setFlat(true);
        horizontalLayout_5 = new QHBoxLayout(advancedSettingsGroupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        advancedSettingsLayout = new QFormLayout();
        advancedSettingsLayout->setSpacing(6);
        advancedSettingsLayout->setObjectName(QStringLiteral("advancedSettingsLayout"));
        advancedSettingsLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        maxfpsCheck = new QCheckBox(advancedSettingsGroupBox);
        maxfpsCheck->setObjectName(QStringLiteral("maxfpsCheck"));

        advancedSettingsLayout->setWidget(0, QFormLayout::LabelRole, maxfpsCheck);

        maxfpsCombo = new QComboBox(advancedSettingsGroupBox);
        maxfpsCombo->setObjectName(QStringLiteral("maxfpsCombo"));

        advancedSettingsLayout->setWidget(0, QFormLayout::FieldRole, maxfpsCombo);

        tripleBufferingCheck = new QCheckBox(advancedSettingsGroupBox);
        tripleBufferingCheck->setObjectName(QStringLiteral("tripleBufferingCheck"));

        advancedSettingsLayout->setWidget(1, QFormLayout::LabelRole, tripleBufferingCheck);

        tripleBufferingCombo = new QComboBox(advancedSettingsGroupBox);
        tripleBufferingCombo->setObjectName(QStringLiteral("tripleBufferingCombo"));

        advancedSettingsLayout->setWidget(1, QFormLayout::FieldRole, tripleBufferingCombo);

        anisotropicCheck = new QCheckBox(advancedSettingsGroupBox);
        anisotropicCheck->setObjectName(QStringLiteral("anisotropicCheck"));

        advancedSettingsLayout->setWidget(2, QFormLayout::LabelRole, anisotropicCheck);

        anisotropicCombo = new QComboBox(advancedSettingsGroupBox);
        anisotropicCombo->setObjectName(QStringLiteral("anisotropicCombo"));

        advancedSettingsLayout->setWidget(2, QFormLayout::FieldRole, anisotropicCombo);


        horizontalLayout_5->addLayout(advancedSettingsLayout);

        processesGroupBox = new QGroupBox(ShugoConsoleWidget);
        processesGroupBox->setObjectName(QStringLiteral("processesGroupBox"));
        processesGroupBox->setGeometry(QRect(9, 521, 121, 200));
        processesGroupBox->setMinimumSize(QSize(0, 200));
        processesGroupBox->setMaximumSize(QSize(200, 100));
        processesGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        processesGroupBox->setFlat(true);
        processesView = new QListView(processesGroupBox);
        processesView->setObjectName(QStringLiteral("processesView"));
        processesView->setEnabled(true);
        processesView->setGeometry(QRect(10, 20, 100, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(processesView->sizePolicy().hasHeightForWidth());
        processesView->setSizePolicy(sizePolicy1);
        processesView->setMinimumSize(QSize(100, 20));
        processesView->setMaximumSize(QSize(200, 20));
        processesView->setDragEnabled(false);
        processesView->setAlternatingRowColors(true);
        processesView->setMovement(QListView::Static);
        widget1 = new QWidget(ShugoConsoleWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        defaultsLayout = new QHBoxLayout(widget1);
        defaultsLayout->setSpacing(6);
        defaultsLayout->setContentsMargins(11, 11, 11, 11);
        defaultsLayout->setObjectName(QStringLiteral("defaultsLayout"));
        defaultsLayout->setContentsMargins(0, 0, 0, 0);
        runOnStartupCheck = new QCheckBox(widget1);
        runOnStartupCheck->setObjectName(QStringLiteral("runOnStartupCheck"));

        defaultsLayout->addWidget(runOnStartupCheck);

        defaultsSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        defaultsLayout->addItem(defaultsSpacer);

        resetDefaultsButton = new QPushButton(widget1);
        resetDefaultsButton->setObjectName(QStringLiteral("resetDefaultsButton"));

        defaultsLayout->addWidget(resetDefaultsButton);


        retranslateUi(ShugoConsoleWidget);

        QMetaObject::connectSlotsByName(ShugoConsoleWidget);
    } // setupUi

    void retranslateUi(QWidget *ShugoConsoleWidget)
    {
        ShugoConsoleWidget->setWindowTitle(QApplication::translate("ShugoConsoleWidget", "ShugoConsole", 0));
        bannerLabel->setText(QString());
        advancedSettingsGroupBox_2->setTitle(QApplication::translate("ShugoConsoleWidget", "Advanced Graphics Settings", 0));
        restrictedCombo->clear();
        restrictedCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "Enabled", 0)
         << QApplication::translate("ShugoConsoleWidget", "Disabled", 0)
        );
        restrictedCheck->setText(QApplication::translate("ShugoConsoleWidget", "Unlock all VARs", 0));
        helpLabel->setText(QApplication::translate("ShugoConsoleWidget", "<html><head/><body><p><span style=\" font-weight:600;\">Short notice</span></p><p>Settings values (on the right side) are enforced in the game when the boxes (on the left side) are checked.<br/></p></body></html>", 0));
        consoleSettingsGroupBox->setTitle(QApplication::translate("ShugoConsoleWidget", "Console Settings", 0));
        consoleCheck->setText(QApplication::translate("ShugoConsoleWidget", "CryEngine Console", 0));
        consoleCombo->clear();
        consoleCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "Enabled", 0)
         << QApplication::translate("ShugoConsoleWidget", "Disabled", 0)
        );
        cameraSettingsGroupBox->setTitle(QApplication::translate("ShugoConsoleWidget", "Camera Settings", 0));
        fovCheck->setText(QApplication::translate("ShugoConsoleWidget", "Field of View (degrees)", 0));
        cammaxCheck->setText(QApplication::translate("ShugoConsoleWidget", "Maximum Camera Distance (meters)", 0));
        chatLogSettingsGroupBox->setTitle(QApplication::translate("ShugoConsoleWidget", "Chat Log Settings", 0));
        chatLogCheck->setText(QApplication::translate("ShugoConsoleWidget", "Chat Log", 0));
        chatLogCombo->clear();
        chatLogCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "Enabled", 0)
         << QApplication::translate("ShugoConsoleWidget", "Disabled", 0)
        );
        advancedSettingsGroupBox->setTitle(QApplication::translate("ShugoConsoleWidget", "Advanced Graphics Settings", 0));
        maxfpsCheck->setText(QApplication::translate("ShugoConsoleWidget", "FPS Limit", 0));
        maxfpsCombo->clear();
        maxfpsCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "Enabled", 0)
         << QApplication::translate("ShugoConsoleWidget", "Disabled", 0)
        );
        tripleBufferingCheck->setText(QApplication::translate("ShugoConsoleWidget", "Triple Buffering", 0));
        tripleBufferingCombo->clear();
        tripleBufferingCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "Enabled", 0)
         << QApplication::translate("ShugoConsoleWidget", "Disabled", 0)
        );
        anisotropicCheck->setText(QApplication::translate("ShugoConsoleWidget", "Anisotropic Filtering", 0));
        anisotropicCombo->clear();
        anisotropicCombo->insertItems(0, QStringList()
         << QApplication::translate("ShugoConsoleWidget", "16", 0)
         << QApplication::translate("ShugoConsoleWidget", "8", 0)
         << QApplication::translate("ShugoConsoleWidget", "4", 0)
         << QApplication::translate("ShugoConsoleWidget", "2", 0)
         << QApplication::translate("ShugoConsoleWidget", "1", 0)
        );
        processesGroupBox->setTitle(QApplication::translate("ShugoConsoleWidget", "Managed Aion Processes", 0));
        runOnStartupCheck->setText(QApplication::translate("ShugoConsoleWidget", "Run on Startup", 0));
        resetDefaultsButton->setText(QApplication::translate("ShugoConsoleWidget", "Reset Default Values", 0));
    } // retranslateUi

};

namespace Ui {
    class ShugoConsoleWidget: public Ui_ShugoConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUGOCONSOLEWIDGET_H
