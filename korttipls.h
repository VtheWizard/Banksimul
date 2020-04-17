#ifndef KORTTIPLS_H
#define KORTTIPLS_H

#include <QWidget>

namespace Ui {
class korttipls;
}

class korttipls : public QWidget
{
    Q_OBJECT

public:
    explicit korttipls(QWidget *parent = 0);
    ~korttipls();

private slots:
    void on_pushButtonfake_clicked();

signals:
    aukaselogin();

private:
    Ui::korttipls *ui;
};

#endif // KORTTIPLS_H
