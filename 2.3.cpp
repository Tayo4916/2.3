// 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int x, y, z;
    z = 540 / 130;
    cout << "В прямоугольнике 130х540 умещается " << floor(z) << " квадрата со стороной 130" << endl;
    _getch();
}
