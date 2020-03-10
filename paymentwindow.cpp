#include "paymentwindow.h"
#include "ui_paymentwindow.h"

PaymentWindow::PaymentWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaymentWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Payment Window");

    /*
     * These both create the values for the dropbox when the window is created
     * the first one sets the number of months to choose from and the next
     * one sets the years to choose from when selecting for card info
    */
    for(auto i = 0; i < NUMBER_OF_MONTHS; i++)
    {
        ui->expMonth_box->addItem(QString::number(i + 1));
    }

    years = 2019;
    for(auto i = 0; i < 5; i++)
    {
        ui->expYear_box->addItem(QString::number(years));
        years++;
    }
}

PaymentWindow::~PaymentWindow()
{
    delete ui;
}

void PaymentWindow::receiveTotal(double total)
{
    ui->totalNumber_label->setText("$" + QString::number(total, 'f', 2));
}

void PaymentWindow::on_confirm_button_clicked()
{
    // A message box pops up after the button has been pressed confirming the purchase.
    QMessageBox::information(this, "Confirmation", "Payment Accepted!\nClick Yes to continue.", QMessageBox::Yes);

    // closes the window
    this->close();
}
