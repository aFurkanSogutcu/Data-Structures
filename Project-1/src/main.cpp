#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "SayilarListe.hpp"
#include "BasamakListe.hpp"

using namespace std;


int main() {

    ifstream dosya("sayilar.txt");

    if (!dosya.is_open()) {
        cerr << "Hata: Dosya acilamadi." << endl;
        return 1; 
    }
    
    SayilarListesi *a = new SayilarListesi(); 


    Sayi *b = new Sayi(); 

    string satir;
    getline(dosya, satir);
    //istringstream iss(satir);

    //int sayi;
    //while (iss >> sayi) {


        
        //while (sayiTemp > 0) {

        int basIndex = 0;
        int sonIndex = satir.find(" ");
        while (sonIndex != std::string::npos) {
            int sayi=stoi(satir.substr(basIndex, sonIndex - basIndex));
                        
            while (sayi > 0) {
                int basamak = sayi % 10;
                cout << "Basamak: " << basamak << std::endl;
                sayi /= 10;
                b->basEkle(basamak);
            }
            basIndex = sonIndex + 1;
            sonIndex = satir.find(" ", basIndex);

            b->yazdir();

            //a->sayiEkle(b);
        }
            
            // ilk sayının basamağı eklendikten sonra bir sonraki sayıya geçmeli
        
        //}
        
        //a->sayiEkle(sayi);

        //cout << "Sayi: " << sayi << endl;

        if (dosya.eof()) {
            cout << "dosya sonu...";
            dosya.clear();  // Dosyanın sonunu işaretleyen bayrağı temizle
        }
    //}
    dosya.close();
    
    //a->yazdir();
    //cout << a; // a pointer'ı bir listeyi işaret ediyor ve onun adresini tutuyor
}