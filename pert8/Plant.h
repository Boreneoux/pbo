#include <iostream>
using namespace std;
class Plant
{

public:
    int statusTumbuh;
    int jumlahAir;
    int jumlahPupuk;
    Plant()
    {
        statusTumbuh = 0;
        jumlahAir = 0;
        jumlahPupuk = 0;
    }

    void beriAir()
    {
        jumlahAir++;
        cekKondisiTumbuh();
    }

    void beriPupuk()
    {
        jumlahPupuk++;
        cekKondisiTumbuh();
    }

    void cekKondisiTumbuh()
    {
        //cek kecukupan air dan pupuk
        if (jumlahAir >= 3 && jumlahPupuk >= 1)
        {
            tumbuh();
        }
    }

    void tumbuh()
    {
        if (statusTumbuh < 4)
        {
            jumlahAir = jumlahAir - 3;
            jumlahPupuk = jumlahPupuk - 1;
            statusTumbuh++;
        }
    }

    void displayPlant()
    {
        cout << getStatusTumbuhText() << endl;
        cout << "Jumlah Air: " << jumlahAir << endl;
        cout << "Jumlah Pupuk: " << jumlahPupuk << endl;
    }

    string getStatusTumbuhText()
    {
        switch (statusTumbuh)
        {
        case 0:
            return "Benih";
            break;

        case 1:
            return "Tunas";
            break;

        case 2:
            return "Tanaman Kecil";
            break;

        case 3:
            return "Tanaman Dewasa";
            break;

        default:
            return "Berbunga";
            break;
        }
    }

    int getStatusTumbuh()
    {
        return statusTumbuh;
    }

    string getImagePath()
    {
        string tImagePath = "img/seed.png";

        switch (statusTumbuh)
        {
        case 0:
            tImagePath = "img/seed.png";
            break;
        case 1:
            tImagePath = "img/sprout.png";
            break;
        case 2:
            tImagePath = "img/small.png";
            break;
        case 3:
            tImagePath = "img/big.png";
            break;
        case 4:
            tImagePath = "img/blossom.png";
            break;
        }

        return tImagePath;
    }
};