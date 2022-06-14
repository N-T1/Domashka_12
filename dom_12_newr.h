#ifndef DOM_12_NEWR
#define DOM_12_NEWR
#include <iostream>
using namespace std;

struct  Complex
{
    double re = 0;
    double im = 0;

    void print();
    double mod();
    void coutmod();
};

bool operator> (Complex& a, Complex& b);
ostream& operator<< (ostream& out, Complex& a);

template <typename T>
void sort_bubble(T mass[], int N)
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

template <> typename
void sort_bubble(Complex mass[], int N); // специализированный шаблон


#endif
