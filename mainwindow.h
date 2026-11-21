#pragma once
#include <QMainWindow>
#include <QString>
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
//that update input & ouput units
void update_input();
void update_output();
//set input output
void on_Value_type_currentIndexChanged(int);
void on_first_unit_currentIndexChanged(int);
void on_transfer_clicked();
};
