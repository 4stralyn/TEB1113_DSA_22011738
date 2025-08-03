#include "mainwindow.h"
#include "arrayqueue.h"
#include "linkedlistqueue.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

int totalInsertStepsArray = 0;
int totalInsertStepsLinked = 0;
int totalDeleteStepsArray = 0;
int totalDeleteStepsLinked = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->showMaximized();

    connect(ui->btnStart, &QPushButton::clicked, this, &MainWindow::goToMainPage);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::on_btnReset_clicked);

    connect(ui->actionMainPage, &QAction::triggered, this, &MainWindow::navigateToMainPage);
    connect(ui->actionMenu_Resources, &QAction::triggered, this, &MainWindow::navigateToMenuRecords);
    connect(ui->actionStatistic_Perfomances, &QAction::triggered, this, &MainWindow::navigateToStatistics);
    connect(ui->actionLog_Out, &QAction::triggered, this, &MainWindow::navigateToWelcomePage);

    populateMenuRecords();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::goToMainPage() {
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::navigateToMainPage() {
    ui->stackedWidget->setCurrentWidget(ui->MainPage);
}

void MainWindow::navigateToMenuRecords() {
    populateMenuRecords();
    ui->stackedWidget->setCurrentWidget(ui->MenuRecords);
}

void MainWindow::navigateToStatistics() {
    ui->stackedWidget->setCurrentWidget(ui->StatisticPerformance);
}

void MainWindow::navigateToWelcomePage() {
    ui->stackedWidget->setCurrentWidget(ui->WelcomePage);
}

void MainWindow::on_btnEnqueue_clicked() {
    QString name = ui->lineEditName->text().trimmed();
    QString fullText = ui->comboDrinkType->currentText();
    QStringList parts = fullText.split(" - ");
    QString drinkName = parts.value(0);
    QString price = ui->comboDrinkType->currentData().toString();

    QString customer = name + " - " + drinkName + " (" + price + ")";

    if (name.isEmpty()) {
        QMessageBox::warning(this, "Missing Name", "Please enter a name.");
        return;
    }

    arrayQueue.enqueue(customer);
    linkedQueue.enqueue(customer);

    totalInsertStepsArray += arrayQueue.getStepCount();
    totalInsertStepsLinked += linkedQueue.getStepCount();
    arrayQueue.resetStepCount();
    linkedQueue.resetStepCount();

    ui->listArrayQueue->clear();
    for (const QString& item : arrayQueue.getAll())
        ui->listArrayQueue->addItem(item);

    ui->listLinkedQueue->clear();
    for (const QString& item : linkedQueue.getAll())
        ui->listLinkedQueue->addItem(item);

    ui->lblInsertArray->setText("Insert Steps (Array): " + QString::number(totalInsertStepsArray));
    ui->lblInsertLinked->setText("Insert Steps (Linked): " + QString::number(totalInsertStepsLinked));

    ui->lineEditName->clear();
}

void MainWindow::on_btnDequeue_clicked() {
    QString servedNameArray, servedNameLinked;

    if (!arrayQueue.isEmpty()) {
        servedNameArray = arrayQueue.getAll().front();
        arrayQueue.dequeue();
        totalDeleteStepsArray += arrayQueue.getStepCount();
        arrayQueue.resetStepCount();
    }

    if (!linkedQueue.isEmpty()) {
        servedNameLinked = linkedQueue.getAll().front();
        linkedQueue.dequeue();
        totalDeleteStepsLinked += linkedQueue.getStepCount();
        linkedQueue.resetStepCount();
    }

    if (!servedNameArray.isEmpty() && servedNameArray == servedNameLinked)
        ui->listOrderDone->addItem("\u2714 " + servedNameArray);
    else if (!servedNameArray.isEmpty())
        ui->listOrderDone->addItem("\u2714 " + servedNameArray + " (Array)");
    else if (!servedNameLinked.isEmpty())
        ui->listOrderDone->addItem("\u2714 " + servedNameLinked + " (Linked)");

    ui->listArrayQueue->clear();
    for (const QString& item : arrayQueue.getAll())
        ui->listArrayQueue->addItem(item);

    ui->listLinkedQueue->clear();
    for (const QString& item : linkedQueue.getAll())
        ui->listLinkedQueue->addItem(item);

    ui->lblDeleteArray->setText("Delete Steps (Array): " + QString::number(totalDeleteStepsArray));
    ui->lblDeleteLinked->setText("Delete Steps (Linked): " + QString::number(totalDeleteStepsLinked));
}

void MainWindow::on_btnReset_clicked() {
    arrayQueue.reset();
    linkedQueue.reset();

    totalInsertStepsArray = totalInsertStepsLinked = 0;
    totalDeleteStepsArray = totalDeleteStepsLinked = 0;

    ui->listArrayQueue->clear();
    ui->listLinkedQueue->clear();
    ui->listOrderDone->clear();

    ui->lblInsertArray->setText("Insert Steps (Array):");
    ui->lblInsertLinked->setText("Insert Steps (Linked):");
    ui->lblDeleteArray->setText("Delete Steps (Array):");
    ui->lblDeleteLinked->setText("Delete Steps (Linked):");

    ui->lineEditName->clear();
    on_btnResetChart_clicked();
}

void MainWindow::populateMenuRecords() {
    if (drinksInitialized) return;

    ui->listMenuItems->clear();
    ui->comboDrinkType->clear();

    QMap<QString, QString> drinkPrices = {
        { "Latte", "RM 6.50" },
        { "Matcha", "RM 7.00" },
        { "Black Tea", "RM 5.00" },
        { "Chocolate", "RM 6.00" },
        { "Green Tea", "RM 5.50" }
    };

    for (auto it = drinkPrices.begin(); it != drinkPrices.end(); ++it) {
        QString displayText = it.key() + " - " + it.value();
        ui->listMenuItems->addItem("\U0001F9CB " + displayText);
        ui->comboDrinkType->addItem(displayText, it.value());
    }

    ui->lineDrinkName->clear();
    ui->linePriceTag->clear();
    drinksInitialized = true;
}

void MainWindow::on_btnAdd_clicked() {
    QString drink = ui->lineDrinkName->text().trimmed();
    QString price = ui->linePriceTag->text().trimmed();

    if (drink.isEmpty() || price.isEmpty()) {
        QMessageBox::warning(this, "Missing Input", "Please enter both drink name and price.");
        return;
    }

    QString displayText = drink + " - " + price;
    ui->listMenuItems->addItem("\U0001F9CB " + displayText);
    ui->comboDrinkType->addItem(displayText, price);

    ui->lineDrinkName->clear();
    ui->linePriceTag->clear();
}

void MainWindow::on_btnDelete_clicked() {
    int row = ui->listMenuItems->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a drink to delete.");
        return;
    }

    QString selectedText = ui->listMenuItems->currentItem()->text();
    QString cleanText = selectedText.mid(2);
    QStringList parts = cleanText.split(" - ");
    if (parts.size() < 2) return;

    QString drinkName = parts[0].trimmed();
    QString drinkPrice = parts[1].trimmed();

    delete ui->listMenuItems->takeItem(row);

    for (int i = 0; i < ui->comboDrinkType->count(); ++i) {
        QString comboText = ui->comboDrinkType->itemText(i);
        if (comboText.startsWith(drinkName + " -")) {
            ui->comboDrinkType->removeItem(i);
            break;
        }
    }

    for (int i = 0; i < customDrinkPrices.size(); ++i) {
        if (customDrinkPrices[i].first == drinkName && customDrinkPrices[i].second == drinkPrice) {
            customDrinkPrices.remove(i);
            break;
        }
    }

    ui->lineDrinkName->clear();
    ui->linePriceTag->clear();
}

void MainWindow::on_btnGenerateChart_clicked() {
    QBarSet *setArray = new QBarSet("Array Queue");
    QBarSet *setLinked = new QBarSet("Linked List Queue");

    *setArray << totalInsertStepsArray << totalDeleteStepsArray;
    *setLinked << totalInsertStepsLinked << totalDeleteStepsLinked;

    QBarSeries *series = new QBarSeries();
    series->append(setArray);
    series->append(setLinked);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Queue Performance: Array vs Linked List (Total Steps)");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories = { "Enqueue", "Dequeue" };
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Total Steps");
    axisY->setLabelFormat("%d");

    int maxStep = std::max({ totalInsertStepsArray, totalInsertStepsLinked,
                            totalDeleteStepsArray, totalDeleteStepsLinked });

    axisY->setRange(0, maxStep + 5);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartViewStats->setChart(chart);
    ui->chartViewStats->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::on_btnResetChart_clicked() {
    QChart *emptyChart = new QChart();
    emptyChart->setTitle("No Data Available");
    ui->chartViewStats->setChart(emptyChart);

    // Force repaint
    ui->chartViewStats->repaint();
    ui->chartViewStats->update();
}

