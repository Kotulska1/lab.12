#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Перетворемо десяткове числа на двійкове представлення у вигляді рядка
string decimalToBinary(int number) {
    if (number == 0) return "0";

    string binaryStr = "";
    while (number > 0) {
        binaryStr = to_string(number % 2) + binaryStr;
        number /= 2;
    }
    return binaryStr;
}