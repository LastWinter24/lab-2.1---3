#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
class ConsoleColor {
public:
    static void SetColor(int colorCode) {
        std::cout << "\033[" << colorCode << "m";
    }

    static void ResetColor() {
        std::cout << "\033[0m";
    }
};

class CurrentDatePrinter {
public:
    void PrintYellowCurrentDate() {
        ConsoleColor::SetColor(33);  // Устанавливаем желтый цвет (33 - код цвета)
        time_t currentTime = time(nullptr);
        struct tm* localTime = localtime(&currentTime);
        char buffer[80];
        strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", localTime);
        std::cout << "Текущая дата и время: " << buffer << std::endl;
        ConsoleColor::ResetColor();  // Сбрасываем цвет
    }
};