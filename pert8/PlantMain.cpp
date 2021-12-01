#include <iostream>
#include "Plant.h"
using namespace std;

int main()
{
    Plant p;
    int inp = 0;
    do
    {
        cout << "Masukkan: 0 untuk memberi air, 1 untuk memberi pupuk, 999 untuk keluar" << endl;
        cin >> inp;
        switch (inp)
        {
        case 0:
            p.beriAir();
            break;
        case 1:
            p.beriPupuk();
            break;
        }
        p.displayPlant();

    } while (inp != 999);

    return 0;
}