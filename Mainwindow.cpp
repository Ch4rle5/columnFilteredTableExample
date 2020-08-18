#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_h_table("./template.csv")
{
    ui->setupUi(this);
    ui->centralwidget->layout()->addWidget(m_h_table.p_view());
}

MainWindow::~MainWindow()
{
    delete ui;
}

