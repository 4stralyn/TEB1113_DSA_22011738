#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "arrayqueue.h"
#include "linkedlistqueue.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnEnqueue_clicked();
    void on_btnDequeue_clicked();
    void on_btnReset_clicked();
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
    void on_btnGenerateChart_clicked();
    void on_btnResetChart_clicked();


    void goToMainPage();
    void navigateToMainPage();
    void navigateToMenuRecords();
    void navigateToStatistics();
    void navigateToWelcomePage();

private:
    Ui::MainWindow *ui;
    ArrayQueue arrayQueue;
    LinkedListQueue linkedQueue;

    QVector<QPair<QString, QString>> customDrinkPrices;

    void populateMenuRecords();
    bool drinksInitialized = false;
    int stepsInsertArray = 0;
    int stepsInsertLinked = 0;
    int stepsDeleteArray = 0;
    int stepsDeleteLinked = 0;
};

#endif // MAINWINDOW_H
