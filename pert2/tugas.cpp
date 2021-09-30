#include <iostream> 

using namespace std;

int main(){ //function utama pada program ini

    int tahun = 2021; //deklarasi variabel tahun dengan tipedata integer dan set variabel tersebut dengan 2021 atau tahun sekarang
    int lahir; //deklarasi variabel lahir dengan tipe data integer tapi tanpa di set karena untuk disesuaikan tahun lahir si user
    int umur; // deklarasi vairabel umur untuk hasil umur si user nanti

    cout<<"Masukkan tahun lahir anda : "; cin >> lahir; //mengeluarkan teks menanyakan tahun lahir si user dan menyuruh user menginput tahunnya lalu mengambil data tersebut dengan mengubah value dari si variabel lahir 
    umur = tahun - lahir; // mengubah value si variabel umur dengan melakukan operasi pengurangan tahun yang sudah kita deklarasi di program dengan si tahun yang di input oleh user
    cout<<"Berarti usia anda " << umur << " Tahun"; //mengeluarkan teks dengan value umur user dengan hasil operasi yang sudah dilakukan di line 11

return 0; // end of the program 

}