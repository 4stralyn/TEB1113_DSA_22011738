#include "menupage.h"
#include "mainwindow.h"

MenuPage::MenuPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);
}

MenuPage::~MenuPage()
{
    delete ui;
}
