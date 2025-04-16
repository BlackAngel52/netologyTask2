#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите слово: \n";
    std::string inputWord = {};
    std::getline(std::cin >> std::ws, inputWord);
    std::cout << "Вы ввели: \n";
    std::cout << inputWord;

}


