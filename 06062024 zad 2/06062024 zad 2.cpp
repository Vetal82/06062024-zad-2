// 06062024 zad 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "parnokopitni.h"
#include "ptakhi.h"
#include "tvaryna.h"

int main() {
    Parokopitni p1("Кінь", "Ліс", "Кінь дикий","Кінь", 300.0);
    Ptakhi p2("Орел", true);
    Tvaryna t1("Вовк", "Хижак", "Canis lupus", 30.0);

    p1.showInfo();
    p2.showInfo();
    t1.showInfo();

    return 0;
}
