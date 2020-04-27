#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = 0);
    ~tapahtumat();

private slots:
    void on_veks_clicked();

private:
    Ui::tapahtumat *ui;
};

#endif // TAPAHTUMAT_H
