#ifndef PRESENTACION_H
#define PRESENTACION_H

#include <QMainWindow>

namespace Ui {
class Presentacion;
}

class Presentacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Presentacion(QWidget *parent = nullptr);
    ~Presentacion();

private slots:
    void on_power_clicked();

private:
    Ui::Presentacion *ui;
};

#endif // PRESENTACION_H
