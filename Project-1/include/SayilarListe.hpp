#ifndef SayilarListe_hpp
#define SayilarListe_hpp

#include "SayilarDugum.hpp"
#include "SayilarListe.hpp"


class SayilarListesi{
    public:
        SayilarListesi();
        //~SayilarListesi();
        void sayiEkle(Sayi* sayiListesi);   
        void yazdir();
        void SayiListesiSil(Sayi* silinecek);
        Dugum* ilk;
};





#endif