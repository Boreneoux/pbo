#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Nama
{
public:
    string firstName;
    string middleName;
    string lastName;

    void full(string firstName, string middleName, string lastName)
    {
        cout << "FULL NAME : " << firstName + " " << middleName << " " << lastName << endl;
    }
};

int main()
{
    Nama n;
    int pilih;
    char pil;

menu:
    cout << "MENU SOAL 4: \n";
    cout << "1. Input \n";
    cout << "2. Keluar\n";
    cout << "\n";
    cout << "Pilihan anda: ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        cout << "Masukan Nama Depan : ";
        cin >> n.firstName;
        cout << "Masukan Nama Tengah : ";
        cin >> n.middleName;
        cout << "Masukan Nama Belakang : ";
        cin >> n.lastName;
        n.full(n.firstName, n.middleName, n.lastName);
        break;

    case 2:
        goto keluar;
        break;

    default:
        cout << "Pilihan Invalid " << endl;
        break;
    }

    cout << "Ingin kembali ke menu? (Y/N) : ";
    cin >> pil;
    if ((pil == 'Y') || (pil == 'y'))
    {
        goto menu;
    }
    else if ((pil == 'N') || (pil == 'n'))
    {
        goto keluar;
    }
keluar:
    cout << "\n TERIMA KASIH \n";
    getch();

    return 0;
}