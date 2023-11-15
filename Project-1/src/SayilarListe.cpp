#include "SayilarListe.hpp"
//#include "main.cpp"

#include <iostream>
#include <iomanip>
using namespace std;

SayilarListesi::SayilarListesi(){
    ilk = 0;
};

void SayilarListesi::sayiEkle(Sayi* sayiListesi){
    Dugum *yeni = new Dugum(sayiListesi);
    if(ilk == 0){
        ilk = yeni;
        return;
    }
    else {
        Dugum* gec = ilk;

        while(gec -> sonraki != 0) {
            gec = gec -> sonraki;
        }
        gec -> sonraki = yeni;
    }
};

void SayilarListesi::yazdir(){

    //cout << setw(10) << "adres" << setw(10) << "veri" << setw(10) << "sonraki" << endl;
    Dugum* gec = ilk;

    while (gec != 0){ 
        cout << "#" << gec << "#" << endl;
        gec = gec -> sonraki;
    }
    
    cout<<endl;

};