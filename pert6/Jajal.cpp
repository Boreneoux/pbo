#include <iostream>

using namespace std;

// Kelas abstract, hanya untuk mendeklarasi function / method yang masih murni.
class Clock
{
public:
    Clock(int jam = 0, int menit = 0, int detik = 0);
    void setWaktu(int jamInput, int menitInput, int detikInput);
    void displayWaktu();
    void tambahJam();
    void tambahMenit();
    void tambahDetik();

    /* Bagian dari encapsulation, penempatan variabel pada private agar variabel yang di declare tidak dapat di akses secara
sembarangan di program ini. Dan hanya dapat di akses oleh kelas ini atau kelas turunan dari kelas induk ini. atau
yang berkepentingan dengan kelas induk ini.*/
private:
    int jam;
    int menit;
    int detik;
};

Clock::Clock(int jam, int menit, int detik)
{
    setWaktu(jam, menit, detik);
}

// Meng over-ride method yang ada di kelas induk abstract inilah yang membuat suatu kelas disebut kelas Abstract.
void Clock::setWaktu(int jamInput, int menitInput, int detikInput)
{
    cout << "Masukkan Format Waktu" << endl;
    cout << "Jam : ";
    cin >> jamInput;
    cout << "Menit : ";
    cin >> menitInput;
    cout << "Detik : ";
    cin >> detikInput;
    cin.get();

    if ((jamInput >= 0 && jamInput < 24) && (menitInput >= 0 && menitInput < 60) && (detikInput >= 0 && detikInput < 60))
    {
        jam = jamInput;
        menit = menitInput;
        detik = detikInput;
    }
    else
    {
        cout << "Format waktu yang anda input Invalid!" << endl;
    }
}
// Sekali lagi meng over-ride method yang ada di kelas induk abstract.
void Clock::displayWaktu()
{
    cout << "Waktu Menunjukan Pukul :" << jam << ":" << menit << ":" << detik << endl;
}

void Clock::tambahJam()
{
    jam++;
}

void Clock::tambahMenit()
{
    menit++;
}

void Clock::tambahDetik()
{
    detik++;
}

// Function utama pada program ini
int main()
{
    Clock t; // mendeklarasikan kelas induk atau kelas Clock menjadi "t".
    int jamInput = 0, menitInput = 0, detikInput = 0;

    //bagian dari code untuk membiarkan user memberi masukan.
    // int jamInput = 0, menitInput = 0, detikInput = 0;
    // cout << "Masukkan Format Waktu" << endl;
    // cout << "Jam : ";
    // cin >> jamInput;
    // cout << "Menit : ";
    // cin >> menitInput;
    // cout << "Detik : ";
    // cin >> detikInput;

    //Pemanggilan method pada kelas.
    t.setWaktu(jamInput, menitInput, detikInput);
    t.displayWaktu();

    cout << "\n";
    cout << "Menambah semua variabel waktu menjadi +1 dari waktu sebelumnya :" << endl;
    t.tambahJam();
    t.tambahMenit();
    t.tambahDetik();
    t.displayWaktu();
    // cout <<jamInput << menitInput<< detikInput <<endl;

    return 0;
}
