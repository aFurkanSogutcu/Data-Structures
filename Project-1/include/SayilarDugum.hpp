#ifndef SayilarDugum_hpp
#define SayilarDugum_hpp

#include "BasamakListe.hpp"

class Dugum {
    public:
        Dugum* sonraki;
        Sayi* basListesi;
        Dugum(Sayi* basListesi);
        //~Dugum();
        //int sayiP;
};
#endif 