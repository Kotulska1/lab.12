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
    // Функція to_string() перетворює число на рядок
}
void writeBinaryToFile(const string &filename, const string &binaryStr) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << binaryStr;
        outFile.close();
    } else {
        cout << "Неможливо відкрити файл" << filename << endl;
    }
}

// Підраховує кількість нулів у двійковому рядку
int countZerosInBinary(const string &binaryStr) {
    int zeroCount = 0;
    for (char c : binaryStr) {
        if (c == '0') {
            zeroCount++;
        }
    }
    return zeroCount;
}