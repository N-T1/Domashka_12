#include "dom_12_newr.h"
#include <iostream>
using namespace std;

void Complex::print()
{
    string sign = (this->im >= 0) ? "+" : "";
    cout << this->re << sign << this->im << "i" << endl;;
}

double Complex::mod()
{
    return sqrt(pow(re, 2) + pow(im, 2));
}

void Complex::coutmod()
{
    cout << sqrt(pow(re, 2) + pow(im, 2)) << " ";
}

bool operator> (Complex& a, Complex& b)
{
    return  a.mod() > b.mod();
}

ostream& operator<< (ostream& out, Complex& a)
{
    out << a.mod() << " ";
    return out;
}

template <> typename
void sort_bubble(Complex mass[], int N)
{
    for (int i = 0; i < N; i++)
    {
        bool flag = true;
        for (int j = 0; j < N - (i + 1); j++)
        {
            if (mass[j] > mass[j + 1])
            {
                flag = false;
                swap(mass[j], mass[j + 1]);
            }
        }
        if (flag)
        {
            break;
        }
    }
    cout << "Отсортированный массив: ";

    for (int i = 0; i < N; i++)
    {
        cout << mass[i] << " ";  //вывод массива
    }
}