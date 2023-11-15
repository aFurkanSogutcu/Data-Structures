#include "BasamakListe.hpp"
//#include "main.cpp"

#include <iostream>
#include <iomanip>
#include <windows.h>
//#include <stdio.h>
using namespace std;

Sayi::Sayi()
{
    ilkB = 0;
};

void Sayi::basEkle(int bDeger)
{
    Basamak *yeni = new Basamak(bDeger);
    if (ilkB == 0)
    {
        ilkB = yeni;
        return;
    }
    else
    {
        Basamak *gec = ilkB;

        while (gec->sonraki != 0)
        {
            gec = gec->sonraki;
        }
        gec->sonraki = yeni;
    }
};

int Sayi::butunSayiBirlestir(Basamak *butunSayi)
{
    // sayıları birlsetirme

    Basamak *gec = butunSayi;
    int sayimiz = 0;
    int sayac = 0;
    while (gec != 0)
    {
        gec = gec->sonraki;
        sayac++;
    }
    //cout << "!" << sayac << "!";
    gec = butunSayi;
    int sayacyedek = sayac;
    while (gec != 0)
    {
        sayac = sayacyedek;
        int x = 1;
        while (sayac > 1)
        {
            x = x * 10;
            sayac--;
            cout << x;
        }
        sayimiz = sayimiz + (gec->basamakDeger * x);
        sayacyedek = sayacyedek - 1;
        gec=gec->sonraki;
        cout << "sayimiz: " << sayimiz << "basDeger: "<<gec->basamakDeger;
        
    }
    return sayimiz;
}

// void gotoxy(short x, short y)
// {
// 	COORD pos = { x,y };
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
// }

// void Sayi::yazdir(int sayac){

//     //cout << setw(10) << "adres" << setw(10) << "veri" << setw(10) << "sonraki" << endl;
//     Basamak* gec = ilkB;
//     //int i = 0;
//     while (gec != 0)
//     {
//         //int sonUcBasamak = (int)(gec) & 0xFF;
//         uintptr_t sonUcBasamak = reinterpret_cast<uintptr_t>(gec) & 0xFFF;
//         int n = 5;
//         gotoxy(sayac * 8, 0);
// 		cout << "*******";
// 		gotoxy(sayac * 8, 1);
// 		cout << "*" << setw(4) << hex << sonUcBasamak << setw(2) << "*";
// 		gotoxy(sayac * 8, 2);
// 		cout << "*******";
// 		gotoxy(sayac * 8, 3);
//         cout << "*" << setw(4)<< gec->basamakDeger << setw(2) << "*" ;
//         gotoxy(sayac * 8, 4);
// 		cout << "*******";

//         gec = gec->sonraki;
//         sayac++;
// 		// buradan sonra diğer SayilarDugum'e gececek
//     }

//     cout<<endl;

// };