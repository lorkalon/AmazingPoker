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
    void on_pushButton_clicked();

    void on_dial_actionTriggered(int action);

    void on_playersTable_cellClicked(int row, int column);

    void on_Delete_Button_clicked();

    void on_Clear_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
