/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *labelMin;
    QLCDNumber *lcdNumberMin;
    QSlider *horizontalSliderMin;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_5;
    QSlider *horizontalSliderMax;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelMax;
    QLCDNumber *lcdNumberMax;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_6;
    QLabel *labelTime;
    QSlider *horizontalSlider_3;
    QLabel *labelNumTime;
    QSpacerItem *verticalSpacer;
    QSplitter *splitter;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(489, 424);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 2);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        gridLayout->addWidget(pushButtonConnect, 1, 0, 1, 1);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        gridLayout->addWidget(pushButtonDisconnect, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(112, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        labelMin = new QLabel(centralWidget);
        labelMin->setObjectName(QStringLiteral("labelMin"));

        gridLayout_2->addWidget(labelMin, 0, 1, 1, 1);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName(QStringLiteral("lcdNumberMin"));
        lcdNumberMin->setFrameShape(QFrame::Box);
        lcdNumberMin->setFrameShadow(QFrame::Plain);
        lcdNumberMin->setLineWidth(1);
        lcdNumberMin->setMidLineWidth(0);
        lcdNumberMin->setSmallDecimalPoint(false);
        lcdNumberMin->setMode(QLCDNumber::Dec);
        lcdNumberMin->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumberMin, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        horizontalSliderMin->setTickPosition(QSlider::NoTicks);

        gridLayout_3->addWidget(horizontalSliderMin, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderMax, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        labelMax = new QLabel(centralWidget);
        labelMax->setObjectName(QStringLiteral("labelMax"));

        gridLayout_4->addWidget(labelMax, 0, 1, 1, 1);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName(QStringLiteral("lcdNumberMax"));
        lcdNumberMax->setFrameShadow(QFrame::Plain);
        lcdNumberMax->setLineWidth(1);
        lcdNumberMax->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(lcdNumberMax, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelTime = new QLabel(centralWidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));

        gridLayout_6->addWidget(labelTime, 0, 0, 1, 1);

        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSlider_3, 0, 1, 1, 1);

        labelNumTime = new QLabel(centralWidget);
        labelNumTime->setObjectName(QStringLiteral("labelNumTime"));

        gridLayout_6->addWidget(labelNumTime, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButtonStart = new QPushButton(splitter);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        splitter->addWidget(pushButtonStart);
        pushButtonStop = new QPushButton(splitter);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        splitter->addWidget(pushButtonStop);

        verticalLayout->addWidget(splitter);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        gridLayout_7->addWidget(textBrowser, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        lineEdit->raise();
        pushButtonConnect->raise();
        pushButtonDisconnect->raise();
        horizontalSliderMin->raise();
        horizontalSliderMax->raise();
        horizontalSlider_3->raise();
        lcdNumberMin->raise();
        lcdNumberMax->raise();
        labelMax->raise();
        labelMin->raise();
        pushButtonStart->raise();
        pushButtonStop->raise();
        labelTime->raise();
        labelNumTime->raise();
        horizontalSlider_3->raise();
        horizontalSlider_3->raise();
        horizontalSlider_3->raise();
        horizontalSlider_3->raise();
        textBrowser->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 489, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), MainWindow, SLOT(conecta()));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), labelNumTime, SLOT(setNum(int)));
        QObject::connect(pushButtonStart, SIGNAL(clicked()), MainWindow, SLOT(start()));
        QObject::connect(pushButtonStop, SIGNAL(clicked()), MainWindow, SLOT(stop()));
        QObject::connect(pushButtonDisconnect, SIGNAL(clicked()), MainWindow, SLOT(disconecta()));
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        labelMin->setText(QApplication::translate("MainWindow", "Min", nullptr));
        labelMax->setText(QApplication::translate("MainWindow", "Max", nullptr));
        labelTime->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        labelNumTime->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
