#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "SayilarListe.hpp"
#include "BasamakListe.hpp"
#include "Display.hpp"
#include "ReadFile.hpp"

using namespace std;


void ReadFile::readFile() {
    system("cls");
    ifstream dosya("sayilar.txt");

    if (!dosya.is_open()) {
        cout << "Hata: Dosya acilamadi." << endl;
    }

    string satir;
    getline(dosya, satir);
        
    Display ekran;
    int i = 0;

    SayilarListesi *sayiListesi = new SayilarListesi();

    int basIndex = 0;
    int sonIndex = satir.find(" ");
    while (sonIndex != std::string::npos) {
        Sayi *basListesi = new Sayi();
        int sayi = stoi(satir.substr(basIndex, sonIndex - basIndex));
        //cout << "Liste Adresi: "  << a << endl;
        //int sayiDegeri = sayi;
        while (sayi > 0) {
            int basamak = sayi % 10;
            //cout << "Basamak: " << basamak << endl;
            sayi /= 10;
            basListesi->basEkle(basamak);
        }
        basIndex = sonIndex + 1;
        sonIndex = satir.find(" ", basIndex);
        
        // ilk döngüden sonra yeni sayi listesine geçmeli
        //basListesi->yazdir(i);
        
        sayiListesi->sayiEkle(basListesi);
        //cout << basListesi << endl;
        //cout << sayiListesi->ilk->basListesi << endl << endl;
        //cout << "sayi: " << sayiDegeri << endl;
        //cout << "liste adres: " << basListesi << endl;
        //i++;
        //ekran.SatirWrite(first,i);
        // Dugum* first = sayiListesi->ilk;
        // ekran.SatirWrite(first,i);
    }
    // if (dosya.eof()) {
    //     cout << "dosya sonu...";
    //     dosya.clear();  // Dosyanın sonunu işaretleyen bayrağı temizle
    // }
        Dugum* first = sayiListesi->ilk;
        ekran.SatirWrite(first,i);

    dosya.close();    
}