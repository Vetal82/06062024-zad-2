#include "parnokopitni.h"
#include <iostream>
using namespace std;

void Parokopitni::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "�����������: " << nazva << ", ���������� ���������: " << seredovyshche_zhyttia << endl;
}