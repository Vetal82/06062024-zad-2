#include "parnokopitni.h"
#include <iostream>
using namespace std;

void Parokopitni::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "Парнокопитні: " << nazva << ", Середовище існування: " << seredovyshche_zhyttia << endl;
}