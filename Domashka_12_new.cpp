#include <iostream>
#include "dom_12_newr.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double arr_double[5] = { 1.2, 5.5, 2.3, 10, 105.4 };
    int arr_int[6] = { 1, 5, 2, 10, 105,3 };
    Complex cmp[5]
    {
        {5,6},
        {4,5},
        {3,4},
        {2,3},
        {1,2},
    };

    sort_bubble(arr_double, 5);
    cout << endl;
    sort_bubble(arr_int, 6);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cmp[i].print();
    }
    for (int i = 0; i < 5; i++)
    {
        cmp[i].coutmod();
    }
    cout << endl;
    sort_bubble(cmp, 5);

    return 0;

}