#ifndef DOM_12
#define DOM_12
#include <iostream>
using namespace std;

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

#endif