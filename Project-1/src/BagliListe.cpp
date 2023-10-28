#include "BagliListee.hpp"
#include "main.cpp"

#include <iostream>
#include <iomanip>
using namespace std;


SayilarListesi::SayilarListesi(){
    ilk = 0;
};

void SayilarListesi::sayiEkle(int bDeger){
    Basamak *yeni = new Basamak(bDeger);
    if(ilk == 0){
        ilk = yeni;
        return;
    }
    else {
        Basamak* gec = ilk;

        while(gec -> sonraki != 0) {
            gec = gec -> sonraki;
        }

        
        gec -> sonraki = yeni;
    }
};

void SayilarListesi::yazdir(){

    //cout << setw(10) << "adres" << setw(10) << "veri" << setw(10) << "sonraki" << endl;
    Basamak* gec = ilk;

    while (gec != 0)
    {
        cout << "##########" << endl;
        cout << "#" << gec << "#" << endl;
        cout << "#--------#" << endl;
        cout << "#" << gec->bDeger << "#" << endl;
        cout << "##########" << endl;
        cout << endl;
        gec = gec -> sonraki; 
    }
    
    cout<<endl;

};