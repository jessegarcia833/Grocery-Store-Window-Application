#ifndef PAYMENTWINDOW_H
#define PAYMENTWINDOW_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class PaymentWindow;
}

class PaymentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PaymentWindow(QWidget *parent = nullptr);
    ~PaymentWindow();

  bool payment_done();

  private slots:
    // receiving the total that was sent from the main window
    void receiveTotal(double);

    // function of payment window
    void on_confirm_button_clicked();

private:
    Ui::PaymentWindow *ui;
    const int NUMBER_OF_MONTHS = 12;
    int years;


};

#endif // PAYMENTWINDOW_H
