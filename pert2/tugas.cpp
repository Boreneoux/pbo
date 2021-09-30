#include <iostream>

using namespace std;

int main(){

    int tahun = 2021;
    int lahir;
    int umur;

    cout<<"Masukkan tahun lahir anda : "; cin >> lahir;
    umur = tahun - lahir;
    cout<<"Berarti usia anda " << umur << " Tahun";

return 0;

}