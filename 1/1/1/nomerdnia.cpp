#include "stdafx.h"
int nomerdnia(int koldni, int mon, int a, int day) {
    for (int i = 1; i < mon; i++) {
        if (i % 2 != 0)
            koldni = koldni + 30;
        else
            koldni = koldni + 31;
    }
    if (a == 0)
        koldni = koldni + day - 2;
    else
        koldni = koldni + day - 1;

    return koldni;
}