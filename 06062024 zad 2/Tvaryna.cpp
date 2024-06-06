#include "Tvaryna.h"
#include <iostream>
using namespace std;

void Tvaryna::showInfo() {
    setlocale(LC_ALL, "Ukr");
    cout << "Тварина: " << nazva << ", Вид: " << vid << ", Рід: " << rid << ", Вага: " << vaga << " кг" << endl;
}
