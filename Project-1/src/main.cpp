#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "BagliListee.hpp"

using namespace std;


int main() {

    ifstream dosya("sayilar.txt");

    if (!dosya.is_open()) {
        cerr << "Hata: Dosya acilamadi." << endl;
        return 1; 
    }
    
    SayilarListesi *a = new SayilarListesi(); 

    string satir;
    getline(dosya, satir);
    istringstream iss(satir);

    int sayi;
    while (iss >> sayi) {

        a->sayiEkle(sayi);

        cout << "Sayi: " << sayi << endl;

        if (dosya.eof()) {
            cout << "dosya sonu...";
            dosya.clear();  // Dosyanın sonunu işaretleyen bayrağı temizle
        }
    }
    dosya.close();

    a->yazdir();
}