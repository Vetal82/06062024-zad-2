#include "parnokopitni.h"
#include <iostream>
using namespace std;

void Parokopitni::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "�����������: " << nazva << "��� :" << vid << "г� :" << rid <<"���� :" << vaga << "���������� ��������� : " << seredovyshche_zhyttia << endl;
}