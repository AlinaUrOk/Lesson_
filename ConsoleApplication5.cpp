// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;
int findMax(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main()
{
    int a = 4;
    int b = 7;
    int c = 2;
    int d = 3;
    int mymax = findMax(a, findMax(b, findMax(c, d)));
    cout <<mymax ;
    return 0;
}