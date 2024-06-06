#include "parnokopitni.h"
#include <iostream>
using namespace std;

void Parokopitni::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "Парнокопитні: " << nazva << "Вид :" << vid << "Рід :" << rid <<"Вага :" << vaga << "Середовище існування : " << seredovyshche_zhyttia << endl;
}