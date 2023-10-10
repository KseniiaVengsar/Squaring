// Squaring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Нужно реализовать шаблонную функцию возведения в квадрат, которая работает не только с простыми числами,
//но и с векторами. Для этого создайте две реализации шаблонной функции.
//Шаблонные функции позволяют создавать обобщенные функции, которые могут работать с различными типами данных. 
//Это увеличивает гибкость и переиспользуемость кода.

#include <iostream>
#include <vector> 

// Функция для возведения числа в квадрат
template <class T>
T Squar(T a)
{
    return a * a;
}

// Функция для возведения вектора в квадрат
template <class T>
std::vector<T> Squar(const std::vector<T>& vec) {
    std::vector<T> squaredVec;
    for (const auto& element : vec) {
        squaredVec.push_back(element * element);
    }
    return squaredVec;
}

int main()
{
    int num, number_2 = 0;
    std::cout << "[IN]: ";
    std::cin >> num;

    int squaredNumber = Squar(num);

    std::cout << "[OUT]: " << squaredNumber << std::endl;
    /////
    std::vector<int> myVector;
    const int MAX_SIZE = 5;

    while (number_2 >= 0 && myVector.size() < MAX_SIZE) {
        std::cout << "Enter element: ";
        std::cin >> number_2;
        myVector.push_back(number_2);
    }

    std::cout << "[IN]: ";
    for (const auto& number : myVector) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    std::vector<int> squaredVector = Squar(myVector);

    std::cout << "[OUT]: ";
    for (const auto& number : squaredVector) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
