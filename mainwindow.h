#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fillTable();

private slots:


    void on_omar_clicked();

    void on_reset_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
