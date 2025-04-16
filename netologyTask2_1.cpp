#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int inputNum = { };
    std::cout << "Введите число:" << "\n";
    std::cin >> inputNum;
    std::cout << "Вы ввели: " << "\n";
    std::cout << inputNum;
}


