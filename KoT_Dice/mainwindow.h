#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "dice.h"
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SetNumDice(int numDice);

private slots:
    void on_rollButton_clicked();

    void on_keepDice_1_toggled(bool checked);

    void on_keepDice_2_toggled(bool checked);

    void on_keepDice_3_toggled(bool checked);

    void on_keepDice_4_toggled(bool checked);

    void on_keepDice_5_toggled(bool checked);

    void on_keepDice_6_toggled(bool checked);

    void on_keepDice_7_toggled(bool checked);

    void on_keepDice_8_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    int mNumRolls;
    int mNumDice;
    vector<Dice> mDiceArray;
    int mRollCount;
};

#endif // MAINWINDOW_H
