#include <iostream>
#include "dom_12.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double arr_double[5] = { 1.2, 5.5, 2.3, 10, 105.4 };
    int arr_int[6] = { 1, 5, 2, 10, 105, 3 };

    sort_bubble(arr_double, 5);
    cout << endl;
    sort_bubble(arr_int, 6);

    return 0;
}