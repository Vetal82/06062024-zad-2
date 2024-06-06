#pragma once
#ifndef ISTOTA_H
#define ISTOTA_H
#include <string>
using namespace std;


class Istota {

protected:
    string nazva;

public:
    Istota();
    Istota(string n) : nazva(n) {}
    virtual void showInfo() = 0;
};

#endif // ISTOTA_H

