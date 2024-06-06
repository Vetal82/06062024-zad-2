#pragma once
#ifndef PAROKOPITNI_H
#define PAROKOPITNI_H


#include "Tvaryna.h"
#include <string>
using namespace std;

class Parokopitni : public Tvaryna {
protected:
    string seredovyshche_zhyttia;

public:
    Parokopitni(string n, string sz, string v, string r, double w) : Tvaryna(n, v, r, w) { seredovyshche_zhyttia = sz; }
    void showInfo();
};

#endif // PAROKOPITNI_H

