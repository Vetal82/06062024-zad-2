#include "Tvaryna.h"
#include <iostream>
using namespace std;

void Tvaryna::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "�������: " << nazva << ", ���: " << vid << ", г�: " << rid << ", ����: " << vaga << " ��" << endl;
}
