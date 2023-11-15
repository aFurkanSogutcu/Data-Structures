#include "Display.hpp"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "SayilarListe.hpp"
#include "BasamakListe.hpp"
#include "ReadFile.hpp"

using namespace std;

void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Dugum *Display::SatirWrite(Dugum *sayiListesi, int sayac)
{
    //ReadFile butunSayi;
    int i = 0;
    int m = 0;
    Dugum *gecS = sayiListesi;
    while (gecS != 0)
    {
        Sayi *deger = new Sayi();
        int sayimiz = deger->butunSayiBirlestir(gecS->basListesi->ilkB);
        //     // burada önce sayiListesinin ilke elemanı yazdırılacak yanına basamak listesi aşağıdaki kodla yazdırılacak
        gotoxy(0, i);
        cout << "##########";
        i++;
        gotoxy(0, i);
        cout << setw(2) << gecS->basListesi;
        i++;
        gotoxy(0, i);
        cout << "##########";
        i++;
        gotoxy(0, i);
        cout << setw(3) << "|" << sayimiz << "|";
        i++;
        gotoxy(0, i);
        cout << "##########" << endl;
        i++;
        i++;

        // basamak listesindeki gec tanımlanmalı burada
        //Dugum* gecB = basListesi->ilkB;
        int n = 13;
        Basamak *gecB = gecS->basListesi->ilkB;
        while (gecB != 0)
        {
            //int sonUcBasamak = (int)(gec) & 0xFF;
            uintptr_t sonUcBasamak = reinterpret_cast<uintptr_t>(gecB) & 0xFFF;
            gotoxy(n, m);
            cout << "*******";
            gotoxy(n, m + 1);
            cout << "*" << setw(4) << hex << sonUcBasamak << setw(2) << "*";
            gotoxy(n, m + 2);
            cout << "*******";
            gotoxy(n, m + 3);
            cout << "*" << setw(4) << gecB->basamakDeger << setw(2) << "*";
            gotoxy(n, m + 4);
            cout << "*******";
            n = n + 9;
            gecB = gecB->sonraki;
            // buradan sonra diğer SayilarDugum'e gececek
        }
        // bir sonraki sayiListesi elemanına geçilecek
        gecS = gecS->sonraki;
        sayac++;
        m += 6;
    }
    //return sayiListesi;
}