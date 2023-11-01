#include "BasamakListe.hpp"
//#include "main.cpp"

#include <iostream>
#include <iomanip>
using namespace std;

Sayi::Sayi(){
    ilkB = 0;
};


void Sayi::basEkle(int bDeger){
    Basamak *yeni = new Basamak(bDeger);
    if(ilkB == 0){
        ilkB = yeni;
        return;
    }
    else {
        Basamak* gec = ilkB;

        while(gec -> sonraki != 0) {
            gec = gec -> sonraki;
        }
        gec -> sonraki = yeni;
    }
};

void Sayi::yazdir(){

    //cout << setw(10) << "adres" << setw(10) << "veri" << setw(10) << "sonraki" << endl;
    Basamak* gec = ilkB;

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