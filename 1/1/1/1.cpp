#include "stdafx.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    int a=0, day, mon, year, bir=127,koldni=0, ostalos;

    cin >> day >> mon >> year;
    cout << day<<"." << mon<<"." << year << endl;

    a =  visocosnii(year, a);

    koldni =  nomerdnia( koldni,  mon,  a, day);

    cout << "порядковый номер дня: " << koldni << endl;
    ostalos = bir - koldni;
    if (ostalos < 0) {
        if (a == 0)
            ostalos += 365;
        else
            ostalos += 366;
        cout <<"до дня рождения:" << ostalos << endl;
    }
    if (ostalos > 0)
        cout << "до дня рождения:" << ostalos<< endl;
    if (ostalos == 0)
        cout << "с днем рождения!!!";
        
}
