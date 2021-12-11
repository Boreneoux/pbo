#include<iostream>
//#include "Plant.h"
#include "Plant-Variety.h"
using namespace std;

int main(){
    // Plant p;
    // int inp=0;
    // do{
    //     cout<<"Masukkan: 0 untuk memberi air, 1 untuk memberi pupuk, 999 untuk keluar"<<endl;
    //     cin>>inp;
    //     switch(inp){
    //             case 0: p.beriAir();
    //                 break;
    //             case 1: p.beriPupuk();
    //                 break;
    //         }
    //         p.displayPlant();

    // }while (inp!=999);

    int pil =0;
    while(true){
        cout<<"=== MAIN MENU ===\n"
            <<"0. Exit\n"
            <<"1. Garden \n";
        cout<<"Masukan Pilihan :";
        cin>>pil;
        if(pil==0){
            cout<<"Exit..."<<endl;
            break;
        }
        switch (pil)
        {
        case 0 :
            break;
        case 1 :
            cout<<"Menuju Garden"<<endl;
            gardenMenu();
            break;
        default:
            cout<<"Menu tidak ada!"<<endl;
            break;
        }
    }
    return 0;
}