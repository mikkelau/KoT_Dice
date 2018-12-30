#include "dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Dice::Dice()
{
    mIsChecked = false;
}

void Dice::SetValue()
{
    if (mIsChecked == false)
    {
        mValue = 1 + (rand() % 6);
    }

}

int Dice::GetValue()
{
    return mValue;
}

void Dice::ToggleKeepValue(bool checked)
{
    mIsChecked = checked;
}
