// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include <clocale>
using namespace std;

int main()
{
    int a = 4;
    int b = 7;
    int c = 2;
    int d = 3;

    if ((a < b) && (a < c) && (a < d)) cout << a;
    if ((b < a) && (b < c) && (b < d)) cout << b;
    if ((c < a) && (c < b) && (c < d)) cout << c;
    if ((d < a) && (d < b) && (d < c)) cout << d;
    return 0;
}

