#include <iostream>

using namespace std;

class Kalkulator
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Masukkan angka 1: ";
        cin >> a;
        cout << "Masukkan angka 2: ";
        cin >> b;
    }

    int tambah()
    {
        return a + b;
    }
    int kurang()
    {
        return a - b;
    }
    int kali()
    {
        return a * b;
    }
    int bagi()
    {
        return a / b;
    }
};

int main()
{
    Kalkulator k;
    int pilih;
    char pil;

menu:
    cout << "\n";
    cout << "MENU PROGRAM MATEMATIKA SEDERHANA: \n";
    cout << "0. Keluar \n";
    cout << "1. Tambah \n";
    cout << "2. Kurang\n";
    cout << "3. Kali\n";
    cout << "4. Bagi\n";
    cout << "\n";
    cout << "Pilihan anda: ";
    cin >> pilih;

    switch (pilih)
    {

    case 0:
        goto keluar;
        break;

    case 1:
        k.input();
        cout << "Hasil : " << k.tambah() << endl;
        break;

    case 2:
        k.input();
        cout << "Hasil : " << k.kurang() << endl;
        break;

    case 3:
        k.input();
        cout << "Hasil : " << k.kali() << endl;
        break;

    case 4:
        k.input();
        cout << "Hasil : " << k.bagi() << endl;
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

    return 0;
}