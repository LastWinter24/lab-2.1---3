#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include "Date and Color.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	CurrentDatePrinter printer;
	printer.PrintYellowCurrentDate();
	
	return 0;
}



