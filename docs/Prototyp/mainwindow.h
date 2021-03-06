#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

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
    void on_actionInspect_triggered();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_actionManager_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
