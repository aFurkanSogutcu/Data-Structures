#ifndef BasamakListe_hpp
#define BasamakListe_hpp

#include "BasamakDugum.hpp"

class Sayi{
    public:
        Sayi();
        //~Sayi();
        void basEkle(int bDeger);
        void yazdir();
        Basamak* ilkB;
};

#endif