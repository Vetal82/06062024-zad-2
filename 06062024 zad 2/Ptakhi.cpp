#include "Ptakhi.h"
#include <iostream>

void Ptakhi::showInfo() {
    setlocale(LC_ALL, "Ukr");
    std::cout << "�����: " << nazva << ", �����: " << (khizhak ? "���" : "ͳ") << std::endl;
}
