// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int findMin(int x, int y)
{
    if (x < y) return x;
    else return y;
}

int findMax(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main()
{
    int a = 6;
    int b = 5;
    int c = 7;
    int d = 2;
    int e = 9;
    int mymax = findMax(a, findMax(b, findMax(c, findMax(d, e))));
    int mymin = findMin(a, findMin(b, findMin(c, findMin(d, e))));
    std::cout << mymax << std::endl;
    std::cout << mymin << std::endl;
    return 0;
}

