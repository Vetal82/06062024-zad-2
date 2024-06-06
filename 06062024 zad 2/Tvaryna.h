#pragma once
#ifndef TVARYNA_H
#define TVARYNA_H

#include "istota.h"
#include <string>
using namespace std;

class Tvaryna : public Istota {
protected:
    string vid;
    string rid;
    double vaga;

public:
    Tvaryna(string n, string v, string r, double w) : Istota(n), vid(v), rid(r), vaga(w) {}
    void showInfo();
};

#endif // TVARYNA_H

