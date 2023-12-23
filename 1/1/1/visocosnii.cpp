#include "stdafx.h"
int visocosnii(int year, int a)
{
    if (year % 4 == 0) {
        a = 1;
        cout << "високостный" << endl;
    }
    else {
        a = 0;
        cout << "не високосный" << endl;
    }
    return a;
}