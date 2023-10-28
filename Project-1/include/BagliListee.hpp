#ifndef BagliListe_hpp
#define BagliListe_hpp

#include "Dugumm.hpp"

class SayilarListesi{
public:
    SayilarListesi();
    ~SayilarListesi();
    void sayiEkle(int bDeger);
    void basamakEkle(int sDeger);
    void yazdir();
private:
    Basamak* ilk;
};



#endif