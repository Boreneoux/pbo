#include <iostream>
#include "Plant.h"

using namespace std;

class anggrek : public Plant
{
public:
    void cekKondisiTumbuh()
    {
        // cek kecukupan air dan pupuk
        if (jumlahAir >= 4 && jumlahPupuk >= 2)
        {
            tumbuh();
        }
    }

    void tumbuh()
    {
        if (statusTumbuh < 4)
        {
            jumlahAir = jumlahAir - 4;
            jumlahPupuk = jumlahPupuk - 2;
            setTumbuh();
        }
    }
    void growthMenu()
    {
        int inp = 0;
        do
        {
            cout << "Masukkan: \n 0. untuk memberi air\n 1. untuk memberi pupuk\n 999. untuk keluar" << endl;
            cout << "Angrek membutuhkan 4 air dan 2 pupuk" << endl;
            cout << "Pilihan : ";
            cin >> inp;
            switch (inp)
            {
            case 0:
                beriAir();
                break;
            case 1:
                beriPupuk();
                break;
            }
            displayPlant();
            cout << endl;
        } while (inp != 999);
    }
};

class melati : public Plant
{
public:
    void cekKondisiTumbuh()
    {
        // cek kecukupan air dan pupuk
        if (jumlahAir >= 2 && jumlahPupuk >= 3)
        {
            tumbuh();
        }
    }

    void tumbuh()
    {
        if (statusTumbuh < 4)
        {
            jumlahAir = jumlahAir - 2;
            jumlahPupuk = jumlahPupuk - 3;
            setTumbuh();
        }
    }
    void growthMenu()
    {
        melati mel;
        int inp = 0;
        do
        {
            cout << "Masukkan: \n 0. untuk memberi air\n 1. untuk memberi pupuk\n 999. untuk keluar" << endl;
            cout << "Melati membutuhkan 2 air dan 3 pupuk" << endl;
            cout << "Pilihan : ";
            cin >> inp;
            switch (inp)
            {
            case 0:
                beriAir();
                break;
            case 1:
                beriPupuk();
                break;
            }
            displayPlant();
            cout << endl;
        } while (inp != 999);
    }
};

class mawar : public Plant
{
public:
    void cekKondisiTumbuh()
    {
        // cek kecukupan air dan pupuk
        if (jumlahAir >= 3 && jumlahPupuk >= 4)
        {
            tumbuh();
        }
    }

    void tumbuh()
    {
        if (statusTumbuh < 4)
        {
            jumlahAir = jumlahAir - 3;
            jumlahPupuk = jumlahPupuk - 4;
            setTumbuh();
        }
    }
    void growthMenu()
    {
        mawar maw;
        int inp = 0;
        do
        {
            cout << "Masukkan: \n 0. untuk memberi air\n 1. untuk memberi pupuk\n 999. untuk keluar" << endl;
            cout << "Mawar membutuhkan 3 air dan 4 pupuk" << endl;
            cout << "Pilihan : ";
            cin >> inp;
            switch (inp)
            {
            case 0:
                beriAir();
                break;
            case 1:
                beriPupuk();
                break;
            }
            displayPlant();
            cout << endl;
        } while (inp != 999);
    }
};

void gardenMenu()
{
    static anggrek angr;
    static melati mlt;
    static mawar mwr;
    int pilGarden = 0;
    while (true)
    {
        cout << "=== GARDEN MENU ===\n"
             << "0. Kembali ke menu utama\n"
             << "1. Anggrek \n"
             << "2. Melati \n"
             << "3. Mawar \n";
        cout << "Masukan Pilihan : ";
        cin >> pilGarden;
        cout << endl;
        if (pilGarden == 0)
        {
            cout << "Exit from garden\n"
                 << endl;
            break;
        }
        switch (pilGarden)
        {
        case 0:
            break;
        case 1:
            cout << "---- Anggrek ----" << endl;
            cout << "Status saat ini : " << endl;
            angr.displayPlant();
            angr.growthMenu();
            cout << endl;
            break;
        case 2:
            cout << "---- Melati ----" << endl;
            cout << "Status saat ini : " << endl;
            mlt.displayPlant();
            mlt.growthMenu();
            cout << endl;
            break;
        case 3:
            cout << "---- Mawar ----" << endl;
            cout << "Status saat ini : " << endl;
            mwr.displayPlant();
            mwr.growthMenu();
            cout << endl;
            break;
        default:
            cout << "Menu tidak ada!" << endl;
            cout << endl;
            break;
        }
    }
}