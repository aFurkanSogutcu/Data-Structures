#ifndef BasamakListe_hpp
#define BasamakListe_hpp

#include "BasamakDugum.hpp"

class Sayi{
    public:
        Sayi();
        //~Sayi();
        void basEkle(int basamakDeger);
        void yazdir(int sayac);
        Basamak* ilkB;
        int butunSayiBirlestir(Basamak* deger);
};

#endif