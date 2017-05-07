#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonClearKey_clicked();

    void on_radioButton24Key_clicked();

    void on_radioButton32Key_clicked();

    void on_radioButton16Key_clicked();

    void on_pushButtonClearInput_clicked();

    void on_pushButtonClearOutput_clicked();

    void on_pushButtonEncryption_clicked();

    void on_pushButtonDecryption_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
