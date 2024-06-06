#include "Ptakhi.h"
#include <iostream>

void Ptakhi::showInfo() {
    setlocale(LC_ALL, "Ukr");
    std::cout << "Птахи: " << nazva << ", Хижак: " << (khizhak ? "Так" : "Ні") << std::endl;
}
