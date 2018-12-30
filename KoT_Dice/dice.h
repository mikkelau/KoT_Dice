#ifndef DICE_H
#define DICE_H

class Dice
{
public:
    Dice();

    void SetValue();
    int GetValue();
    void ToggleKeepValue(bool checked);

private:
    int mValue;
    int mIsChecked;
};

#endif // DICE_H
