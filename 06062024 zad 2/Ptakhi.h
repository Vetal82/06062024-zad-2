#pragma once
#ifndef PTAKHI_H
#define PTAKHI_H

#include "Istota.h"
using namespace std;

class Ptakhi : public Istota {
private:
    bool khizhak;

public:
    Ptakhi(string n, bool k) : Istota(n), khizhak(k) {}
    void showInfo();
};

#endif // PTAKHI_H

