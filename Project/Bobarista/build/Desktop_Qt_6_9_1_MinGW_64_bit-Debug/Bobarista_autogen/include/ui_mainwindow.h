/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMainPage;
    QAction *actionMenu_Resources;
    QAction *actionStatistic_Perfomances;
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *WelcomePage;
    QHBoxLayout *horizontalLayout;
    QWidget *left_widget;
    QVBoxLayout *verticalLayout;
    QLabel *lblWelcome;
    QPushButton *btnStart;
    QWidget *right_widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblBackgroundImage;
    QWidget *MainPage;
    QGridLayout *gridLayout_4;
    QGroupBox *groupStats;
    QGridLayout *gridLayout_6;
    QLabel *lblInsertArray;
    QLabel *lblDeleteLinked;
    QLabel *lblDeleteArray;
    QLabel *lblInsertLinked;
    QWidget *widgetHorizontal_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupArrayQueue;
    QGridLayout *gridLayout_3;
    QListWidget *listArrayQueue;
    QGroupBox *groupLinkedQueue;
    QGridLayout *gridLayout_5;
    QListWidget *listLinkedQueue;
    QGroupBox *groupOrderDone;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *listOrderDone;
    QWidget *widgetHorizontal_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnDequeue;
    QPushButton *btnReset;
    QLabel *lblPageTitle;
    QWidget *widgetHorizontal;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditName;
    QComboBox *comboDrinkType;
    QPushButton *btnEnqueue;
    QWidget *MenuRecords;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblMenuTitle;
    QWidget *widgetHorizontal_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineDrinkName;
    QLabel *lblRM;
    QLineEdit *linePriceTag;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QGroupBox *groupMenuItems;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listMenuItems;
    QWidget *StatisticPerformance;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblTitleStats;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_7;
    QChartView *chartViewStats;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnGenerateChart;
    QPushButton *btnResetChart;
    QMenuBar *menuBar;
    QMenu *Navigation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(797, 670);
        MainWindow->setStyleSheet(QString::fromUtf8("/* === Menubar Styling === */\n"
"QMenuBar {\n"
"    background-color: #fff9f4; /* light latte */\n"
"    color: #5e3c2c; /* mocha text */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-weight: bold;\n"
"    padding: 6px 10px;\n"
"    border-bottom: 1px solid #e0cfc2;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background: transparent;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #f5d6ba;  /* warm highlight */\n"
"    color: #3b2314;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* === Menu dropdowns === */\n"
"QMenu {\n"
"    background-color: #fff9f4;\n"
"    color: #3b2314;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 13px;\n"
"    border: 1px solid #c4a484;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 5px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #f1cfa9;\n"
"    color: #2a1a12;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* === Status bar === */\n"
"QStatusBar {\n"
"    background-"
                        "color: #fff9f4;\n"
"    color: #5e3c2c;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    padding: 4px 8px;\n"
"    border-top: 1px solid #e0cfc2;\n"
"}\n"
""));
        actionMainPage = new QAction(MainWindow);
        actionMainPage->setObjectName("actionMainPage");
        actionMenu_Resources = new QAction(MainWindow);
        actionMenu_Resources->setObjectName("actionMenu_Resources");
        actionStatistic_Perfomances = new QAction(MainWindow);
        actionStatistic_Perfomances->setObjectName("actionStatistic_Perfomances");
        actionLog_Out = new QAction(MainWindow);
        actionLog_Out->setObjectName("actionLog_Out");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        WelcomePage = new QWidget();
        WelcomePage->setObjectName("WelcomePage");
        WelcomePage->setStyleSheet(QString::fromUtf8("QWidget#WelcomePage {\n"
"    background-color: #fcefe3; /* soft caf\303\251 beige */\n"
"}\n"
"\n"
"QLabel#lblWelcome {\n"
"    color: #5e3c2c; /* deep mocha text */\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", \"Helvetica\", \"Arial\", sans-serif;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"QPushButton#btnStart {\n"
"    background-color: #8b5e3c;  /* rich coffee brown */\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"	min-width: 65px;\n"
"    min-height: 25px;\n"
"	max-width: 70px;\n"
"    max-height: 30px;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton#btnStart:hover {\n"
"    background-color: #a66f4c;  /* light caramel on hover */\n"
"    color: #fffbe6; /* soft off-white text */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(WelcomePage);
        horizontalLayout->setObjectName("horizontalLayout");
        left_widget = new QWidget(WelcomePage);
        left_widget->setObjectName("left_widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(left_widget->sizePolicy().hasHeightForWidth());
        left_widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(left_widget);
        verticalLayout->setObjectName("verticalLayout");
        lblWelcome = new QLabel(left_widget);
        lblWelcome->setObjectName("lblWelcome");
        lblWelcome->setScaledContents(false);
        lblWelcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lblWelcome);

        btnStart = new QPushButton(left_widget);
        btnStart->setObjectName("btnStart");

        verticalLayout->addWidget(btnStart, 0, Qt::AlignmentFlag::AlignHCenter);


        horizontalLayout->addWidget(left_widget, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        right_widget = new QWidget(WelcomePage);
        right_widget->setObjectName("right_widget");
        sizePolicy.setHeightForWidth(right_widget->sizePolicy().hasHeightForWidth());
        right_widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(right_widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblBackgroundImage = new QLabel(right_widget);
        lblBackgroundImage->setObjectName("lblBackgroundImage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblBackgroundImage->sizePolicy().hasHeightForWidth());
        lblBackgroundImage->setSizePolicy(sizePolicy1);
        lblBackgroundImage->setPixmap(QPixmap(QString::fromUtf8(":/images/assets/images/Open.png")));
        lblBackgroundImage->setScaledContents(true);
        lblBackgroundImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(lblBackgroundImage, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(right_widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        stackedWidget->addWidget(WelcomePage);
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        MainPage->setStyleSheet(QString::fromUtf8("QWidget#MainPage {\n"
"    background-color: #fff9f4; /* Light latte background */\n"
"}\n"
"\n"
"/* Page title */\n"
"QLabel#lblPageTitle {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    color: #5e3c2c;\n"
"    padding: 12px;\n"
"}\n"
"\n"
"/* Group box headers */\n"
"QGroupBox {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #3b2314; /* darker and clearer text */\n"
"    border: 1px solid #d7ccc8;\n"
"    border-radius: 6px;\n"
"    margin-top: 6px;\n"
"    background-color: #fff5ee; /* slightly lighter background */\n"
"}\n"
"\n"
"QGroupBox:title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 4px 12px;\n"
"}\n"
"\n"
"/* Queue display list views */\n"
"QListWidget, QListView {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #d7ccc8;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    font-size: 13px;\n"
"    color: #3e2c20; /* ensure list text is also visible */\n"
""
                        "}\n"
"\n"
"/* Input field */\n"
"QLineEdit {\n"
"    background-color: #fffaf7;\n"
"    border: 1px solid #c4a484;\n"
"    border-radius: 4px;\n"
"    padding: 6px;\n"
"    font-size: 13px;\n"
"    color: #3e2c20;\n"
"}\n"
"\n"
"/* ComboBox */\n"
"QComboBox {\n"
"    background-color: #fffaf7;\n"
"    border: 1px solid #c4a484;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    font-size: 13px;\n"
"    color: #3e2c20;\n"
"}\n"
"\n"
"/* Buttons */\n"
"QPushButton {\n"
"    background-color: #a66f4c;\n"
"    color: white;\n"
"    padding: 6px 14px;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #8b5e3c;\n"
"    color: #fffce8;\n"
"}\n"
"\n"
"/* Labels inside groupboxes */\n"
"QGroupBox QLabel {\n"
"    color: #2b1d14;  /* even darker for high contrast */\n"
"    font-size: 13px;\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(MainPage);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(30, 30, 30, 15);
        groupStats = new QGroupBox(MainPage);
        groupStats->setObjectName("groupStats");
        gridLayout_6 = new QGridLayout(groupStats);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(-1, 30, 20, 20);
        lblInsertArray = new QLabel(groupStats);
        lblInsertArray->setObjectName("lblInsertArray");

        gridLayout_6->addWidget(lblInsertArray, 0, 0, 1, 1);

        lblDeleteLinked = new QLabel(groupStats);
        lblDeleteLinked->setObjectName("lblDeleteLinked");

        gridLayout_6->addWidget(lblDeleteLinked, 3, 0, 1, 1);

        lblDeleteArray = new QLabel(groupStats);
        lblDeleteArray->setObjectName("lblDeleteArray");

        gridLayout_6->addWidget(lblDeleteArray, 2, 0, 1, 1);

        lblInsertLinked = new QLabel(groupStats);
        lblInsertLinked->setObjectName("lblInsertLinked");

        gridLayout_6->addWidget(lblInsertLinked, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupStats, 5, 1, 1, 1);

        widgetHorizontal_2 = new QWidget(MainPage);
        widgetHorizontal_2->setObjectName("widgetHorizontal_2");
        horizontalLayout_3 = new QHBoxLayout(widgetHorizontal_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupArrayQueue = new QGroupBox(widgetHorizontal_2);
        groupArrayQueue->setObjectName("groupArrayQueue");
        gridLayout_3 = new QGridLayout(groupArrayQueue);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(15, 20, 15, 15);
        listArrayQueue = new QListWidget(groupArrayQueue);
        listArrayQueue->setObjectName("listArrayQueue");

        gridLayout_3->addWidget(listArrayQueue, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupArrayQueue);

        groupLinkedQueue = new QGroupBox(widgetHorizontal_2);
        groupLinkedQueue->setObjectName("groupLinkedQueue");
        gridLayout_5 = new QGridLayout(groupLinkedQueue);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(15, 20, 15, 15);
        listLinkedQueue = new QListWidget(groupLinkedQueue);
        listLinkedQueue->setObjectName("listLinkedQueue");

        gridLayout_5->addWidget(listLinkedQueue, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupLinkedQueue);

        groupOrderDone = new QGroupBox(widgetHorizontal_2);
        groupOrderDone->setObjectName("groupOrderDone");
        horizontalLayout_5 = new QHBoxLayout(groupOrderDone);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(15, 20, 15, 15);
        listOrderDone = new QListWidget(groupOrderDone);
        listOrderDone->setObjectName("listOrderDone");

        horizontalLayout_5->addWidget(listOrderDone);


        horizontalLayout_3->addWidget(groupOrderDone);


        gridLayout_4->addWidget(widgetHorizontal_2, 4, 1, 1, 1);

        widgetHorizontal_3 = new QWidget(MainPage);
        widgetHorizontal_3->setObjectName("widgetHorizontal_3");
        horizontalLayout_4 = new QHBoxLayout(widgetHorizontal_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnDequeue = new QPushButton(widgetHorizontal_3);
        btnDequeue->setObjectName("btnDequeue");

        horizontalLayout_4->addWidget(btnDequeue);

        btnReset = new QPushButton(widgetHorizontal_3);
        btnReset->setObjectName("btnReset");

        horizontalLayout_4->addWidget(btnReset);


        gridLayout_4->addWidget(widgetHorizontal_3, 6, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        lblPageTitle = new QLabel(MainPage);
        lblPageTitle->setObjectName("lblPageTitle");
        lblPageTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(lblPageTitle, 0, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        widgetHorizontal = new QWidget(MainPage);
        widgetHorizontal->setObjectName("widgetHorizontal");
        horizontalLayout_2 = new QHBoxLayout(widgetHorizontal);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEditName = new QLineEdit(widgetHorizontal);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setMaxLength(32767);

        horizontalLayout_2->addWidget(lineEditName);

        comboDrinkType = new QComboBox(widgetHorizontal);
        comboDrinkType->setObjectName("comboDrinkType");

        horizontalLayout_2->addWidget(comboDrinkType);

        btnEnqueue = new QPushButton(widgetHorizontal);
        btnEnqueue->setObjectName("btnEnqueue");

        horizontalLayout_2->addWidget(btnEnqueue);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout_4->addWidget(widgetHorizontal, 2, 1, 2, 1);

        stackedWidget->addWidget(MainPage);
        MenuRecords = new QWidget();
        MenuRecords->setObjectName("MenuRecords");
        MenuRecords->setStyleSheet(QString::fromUtf8("QWidget#MenuRecords {\n"
"    background-color: #fff9f4; /* Light latte background */\n"
"}\n"
"\n"
"/* Page title */\n"
"QLabel#lblMenuTitle {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    color: #5e3c2c;\n"
"    padding: 12px;\n"
"}\n"
"\n"
"/* Group box for menu list */\n"
"QGroupBox#groupMenuItems {\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #3b2314;\n"
"    border: 1px solid #d7ccc8;\n"
"    border-radius: 6px;\n"
"    background-color: #fff5ee;\n"
"    margin-top: 6px;\n"
"}\n"
"\n"
"QGroupBox#groupMenuItems:title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 4px 12px;\n"
"}\n"
"\n"
"/* Menu list */\n"
"QListWidget#listMenuItems {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #d7ccc8;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    font-size: 13px;\n"
"    color: #3e2c20;\n"
"}\n"
"\n"
"/* Input fields */\n"
"QLineEdit#lineDrinkName, QLineEdit#linePr"
                        "iceTag {\n"
"    background-color: #fffaf7;\n"
"    border: 1px solid #c4a484;\n"
"    border-radius: 4px;\n"
"    padding: 6px;\n"
"    font-size: 13px;\n"
"    color: #3e2c20;\n"
"}\n"
"\n"
"/* RM label */\n"
"QLabel#lblRM {\n"
"    color: #2b1d14;\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"/* Buttons */\n"
"QPushButton#btnAdd, QPushButton#btnDelete {\n"
"    background-color: #a66f4c;\n"
"    color: white;\n"
"    padding: 6px 14px;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton#btnAdd:hover, QPushButton#btnDelete:hover {\n"
"    background-color: #8b5e3c;\n"
"    color: #fffce8;\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(MenuRecords);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(30, 30, 30, 15);
        lblMenuTitle = new QLabel(MenuRecords);
        lblMenuTitle->setObjectName("lblMenuTitle");

        verticalLayout_4->addWidget(lblMenuTitle, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        widgetHorizontal_4 = new QWidget(MenuRecords);
        widgetHorizontal_4->setObjectName("widgetHorizontal_4");
        widgetHorizontal_4->setMinimumSize(QSize(0, 100));
        horizontalLayout_6 = new QHBoxLayout(widgetHorizontal_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineDrinkName = new QLineEdit(widgetHorizontal_4);
        lineDrinkName->setObjectName("lineDrinkName");

        horizontalLayout_6->addWidget(lineDrinkName);

        lblRM = new QLabel(widgetHorizontal_4);
        lblRM->setObjectName("lblRM");

        horizontalLayout_6->addWidget(lblRM);

        linePriceTag = new QLineEdit(widgetHorizontal_4);
        linePriceTag->setObjectName("linePriceTag");
        linePriceTag->setReadOnly(false);

        horizontalLayout_6->addWidget(linePriceTag);

        btnAdd = new QPushButton(widgetHorizontal_4);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout_6->addWidget(btnAdd);

        btnDelete = new QPushButton(widgetHorizontal_4);
        btnDelete->setObjectName("btnDelete");

        horizontalLayout_6->addWidget(btnDelete);


        verticalLayout_4->addWidget(widgetHorizontal_4);

        groupMenuItems = new QGroupBox(MenuRecords);
        groupMenuItems->setObjectName("groupMenuItems");
        verticalLayout_5 = new QVBoxLayout(groupMenuItems);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(15, 20, 15, 15);
        listMenuItems = new QListWidget(groupMenuItems);
        listMenuItems->setObjectName("listMenuItems");

        verticalLayout_5->addWidget(listMenuItems);


        verticalLayout_4->addWidget(groupMenuItems);

        stackedWidget->addWidget(MenuRecords);
        StatisticPerformance = new QWidget();
        StatisticPerformance->setObjectName("StatisticPerformance");
        StatisticPerformance->setStyleSheet(QString::fromUtf8("QWidget#StatisticPerformance {\n"
"    background-color: #fff9f4; /* Light latte background */\n"
"}\n"
"\n"
"/* ALSO style the internal container */\n"
"QWidget#widget_2 {\n"
"    background-color: #fff9f4;\n"
"}\n"
"\n"
"/* Page title */\n"
"QLabel#lblTitleStats {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    color: #5e3c2c;\n"
"    padding: 12px;\n"
"}\n"
"\n"
"/* Buttons */\n"
"QPushButton#btnGenerateChart, QPushButton#btnResetChart {\n"
"    background-color: #a66f4c;\n"
"    color: white;\n"
"    padding: 6px 14px;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton#btnGenerateChart:hover, QPushButton#btnResetChart:hover {\n"
"    background-color: #8b5e3c;\n"
"    color: #fffce8;\n"
"}\n"
"\n"
"QChartView#chartViewStats {\n"
"    background-color: #fff9f4; \n"
"    border: 1px solid #d7ccc8;\n"
"    border-radius: 4px;\n"
""
                        "    padding: 10px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(StatisticPerformance);
        verticalLayout_6->setObjectName("verticalLayout_6");
        lblTitleStats = new QLabel(StatisticPerformance);
        lblTitleStats->setObjectName("lblTitleStats");

        verticalLayout_6->addWidget(lblTitleStats, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        widget_2 = new QWidget(StatisticPerformance);
        widget_2->setObjectName("widget_2");
        verticalLayout_7 = new QVBoxLayout(widget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        chartViewStats = new QChartView(widget_2);
        chartViewStats->setObjectName("chartViewStats");

        verticalLayout_7->addWidget(chartViewStats);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnGenerateChart = new QPushButton(widget);
        btnGenerateChart->setObjectName("btnGenerateChart");

        horizontalLayout_7->addWidget(btnGenerateChart);

        btnResetChart = new QPushButton(widget);
        btnResetChart->setObjectName("btnResetChart");

        horizontalLayout_7->addWidget(btnResetChart);


        verticalLayout_7->addWidget(widget);


        verticalLayout_6->addWidget(widget_2);

        stackedWidget->addWidget(StatisticPerformance);

        verticalLayout_3->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 797, 44));
        Navigation = new QMenu(menuBar);
        Navigation->setObjectName("Navigation");
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menuBar->addAction(Navigation->menuAction());
        Navigation->addAction(actionMainPage);
        Navigation->addAction(actionMenu_Resources);
        Navigation->addAction(actionStatistic_Perfomances);
        Navigation->addAction(actionLog_Out);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMainPage->setText(QCoreApplication::translate("MainWindow", "Main Page", nullptr));
        actionMenu_Resources->setText(QCoreApplication::translate("MainWindow", "Menu Resources", nullptr));
        actionStatistic_Perfomances->setText(QCoreApplication::translate("MainWindow", "Statistic Perfomances", nullptr));
        actionLog_Out->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        lblWelcome->setText(QCoreApplication::translate("MainWindow", "Welcome to Bobarista App!", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        lblBackgroundImage->setText(QString());
        groupStats->setTitle(QCoreApplication::translate("MainWindow", "Performance Stats", nullptr));
        lblInsertArray->setText(QCoreApplication::translate("MainWindow", "Insert Steps (Array):", nullptr));
        lblDeleteLinked->setText(QCoreApplication::translate("MainWindow", "Delete Steps (Linked):", nullptr));
        lblDeleteArray->setText(QCoreApplication::translate("MainWindow", "Delete Steps (Array):", nullptr));
        lblInsertLinked->setText(QCoreApplication::translate("MainWindow", "Insert Steps (Linked):", nullptr));
        groupArrayQueue->setTitle(QCoreApplication::translate("MainWindow", "Array Queue", nullptr));
        groupLinkedQueue->setTitle(QCoreApplication::translate("MainWindow", "Linked List Queue", nullptr));
        groupOrderDone->setTitle(QCoreApplication::translate("MainWindow", "Order Done", nullptr));
        btnDequeue->setText(QCoreApplication::translate("MainWindow", "Serve Next", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset Benchmark", nullptr));
        lblPageTitle->setText(QCoreApplication::translate("MainWindow", "Bobarista Queue Benchmark Tool", nullptr));
        lineEditName->setInputMask(QString());
        lineEditName->setText(QString());
        lineEditName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Customer Name", nullptr));
        btnEnqueue->setText(QCoreApplication::translate("MainWindow", "Add to Queue", nullptr));
        lblMenuTitle->setText(QCoreApplication::translate("MainWindow", "This is Menu Records", nullptr));
        lineDrinkName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Drink's Name", nullptr));
        lblRM->setText(QCoreApplication::translate("MainWindow", "RM: ", nullptr));
        linePriceTag->setPlaceholderText(QCoreApplication::translate("MainWindow", "6.00", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        groupMenuItems->setTitle(QCoreApplication::translate("MainWindow", "List of Menu Items", nullptr));
        lblTitleStats->setText(QCoreApplication::translate("MainWindow", "Statistic Performances", nullptr));
        btnGenerateChart->setText(QCoreApplication::translate("MainWindow", "Generate Chart", nullptr));
        btnResetChart->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        Navigation->setTitle(QCoreApplication::translate("MainWindow", "Navigation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
