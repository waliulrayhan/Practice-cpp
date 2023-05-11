#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, pass = 0;
    int a[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};

    cout << "Input list ..." << endl;

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }

    cout << endl;

    for (i = 0; i < 10; i++) //
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            { // This is Bouble Sort Algorithm
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    } //

    cout << "Sorted Element List ..." << endl;

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }

    cout << endl
         << "Number of passes taken to sort the list:" << pass << endl;
    return 0;
}