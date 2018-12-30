#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set default dice number and roll number
    mNumDice = ui->numDice->value();
    mNumRolls = ui->numRolls->value();
    mRollCount = 0;
    mDiceArray = vector<Dice>(mNumDice);
    srand(time(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetNumDice(int numDice)
{
    mNumDice = numDice;
}


void MainWindow::on_rollButton_clicked()
{
    // only roll the dice if you are below the roll count
    if (mRollCount < mNumRolls)
    {
        // iterate through all the dice and roll each one
        for (int i=0;i<mNumDice;i++)
        {
            mDiceArray[i].SetValue();

            if (mDiceArray[i].GetValue() == 6)
            {
                cout << "Damage" << "\t";
            }
            else if (mDiceArray[i].GetValue() == 5)
            {
                cout << "Energy" << "\t";
            }
            else if (mDiceArray[i].GetValue() == 4)
            {
                cout << "Heart" << "\t";
            }
            else
            {
                cout << mDiceArray[i].GetValue() << "\t";
            }

            // Display dice values to their respective boxes
            if (i==0)
            {
                ui->dice_1->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==1)
            {
                ui->dice_2->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==2)
            {
                ui->dice_3->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==3)
            {
                ui->dice_4->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==4)
            {
                ui->dice_5->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==5)
            {
                ui->dice_6->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==6)
            {
                ui->dice_7->setText(QString::number(mDiceArray[i].GetValue()));
            }
            else if (i==7)
            {
                ui->dice_8->setText(QString::number(mDiceArray[i].GetValue()));
            }
        }

        cout << endl;

        // increment roll counter
        mRollCount++;

        if (mRollCount == 1)
        {
            ui->oneRoll->setText("X");
        }
        else if (mRollCount == 2)
        {
            ui->twoRoll->setText("X");
        }
        else if (mRollCount == 3)
        {
            ui->threeRoll->setText("X");
        }
        else if (mRollCount == 4)
        {
            ui->fourRoll->setText("X");
        }
        else
        {
            // clear all text
        }
    }

}

void MainWindow::on_keepDice_1_toggled(bool checked)
{
    // only will have an effect if you are able to use that dice
    if (1 <= mNumDice)
    {
        mDiceArray[0].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_2_toggled(bool checked)
{
    if (2 <= mNumDice)
    {
        mDiceArray[1].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_3_toggled(bool checked)
{
    if (3 <= mNumDice)
    {
        mDiceArray[2].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_4_toggled(bool checked)
{
    if (4 <= mNumDice)
    {
        mDiceArray[3].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_5_toggled(bool checked)
{
    if (5 <= mNumDice)
    {
        mDiceArray[4].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_6_toggled(bool checked)
{
    if (6 <= mNumDice)
    {
        mDiceArray[5].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_7_toggled(bool checked)
{
    if (7 <= mNumDice)
    {
        mDiceArray[6].ToggleKeepValue(checked);
    }
}

void MainWindow::on_keepDice_8_toggled(bool checked)
{
    if (8 <= mNumDice)
    {
        mDiceArray[7].ToggleKeepValue(checked);
    }
}
void MainWindow::on_resetButton_clicked()
{

    ui->numDice->setValue(6);
    ui->numRolls->setValue(3);

    mNumDice = ui->numDice->value();
    mNumRolls = ui->numRolls->value();
    mRollCount = 0;
    mDiceArray = vector<Dice>(mNumDice);

    ui->keepDice_1->setChecked(false);
    ui->keepDice_2->setChecked(false);
    ui->keepDice_3->setChecked(false);
    ui->keepDice_4->setChecked(false);
    ui->keepDice_5->setChecked(false);
    ui->keepDice_6->setChecked(false);
    ui->keepDice_7->setChecked(false);
    ui->keepDice_8->setChecked(false);
}
