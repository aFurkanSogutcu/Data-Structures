#ifndef SayilarDugum_hpp
#define SayilarDugum_hpp

#include "BasamakListe.hpp"

class Dugum {
    public:
        Dugum* sonraki;
        Sayi* sayiListesi;
        Dugum(Sayi* sayiListesi);
        //~Dugum();
        //int sayiP;
};
#endif 