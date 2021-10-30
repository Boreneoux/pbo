#include <iostream>

using namespace std;
// Pembuatan kelasnya saya pisahkan dan saya jadikan library disni, agar tidak terlalu panjang.
#include "clock.cpp"

int main(int argc, char const *argv[])
{
     Clock t;

     //bagian dari code untuk membiarkan user memberi masukan.
     int jamInput = 0, menitInput = 0, detikInput = 0;
     cout << "Masukkan Format Waktu" << endl;
     cout << "Jam : ";
     cin >> jamInput;
     cout << "Menit : ";
     cin >> menitInput;
     cout << "Detik : ";
     cin >> detikInput;

     //Pemanggilan method pada kelas.
     t.setWaktu(jamInput, menitInput, detikInput);
     cout << endl
          << t.getJam() << ":"
          << t.getMenit() << ":"
          << t.getDetik() << endl;

     cout << "\n";
     cout << "Menambah semua variabel waktu menjadi +1 dari waktu sebelumnya :" << endl;
     t.tambahJam();
     t.tambahMenit();
     t.tambahDetik();

     cout << endl
          << t.getJam() << ":"
          << t.getMenit() << ":"
          << t.getDetik() << endl;

     return 0;
}
