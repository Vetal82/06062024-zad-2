#pragma once
#ifndef PAROKOPITNI_H
#define PAROKOPITNI_H
using namespace std;

#include "Istota.h"

class Parokopitni : public Istota {
private:
    string seredovyshche_zhyttia;

public:
    Parokopitni(string n, string sz) : Istota(n), seredovyshche_zhyttia(sz) {}
    void showInfo();
};

#endif // PAROKOPITNI_H

