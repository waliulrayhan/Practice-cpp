#include <iostream>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        if (n < m)
        {
            swap(n, m);
        }
        if (m == 1 && n >= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 * n - 2 - (n + m) % 2 << endl;
        }
    }
    return 0;
}