#include <bits/stdc++.h>
using namespace std;
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a, b;
    cout << "row: ";
    cin >> a;
    cout << "col: ";
    cin >> b;
    int total = 0;
    total = min(8 - a, 8 - b) + min(8 - a, b - 1) + min(a - 1, b - 1) + min(a - 1, b - 1);
    cout << "total moves: " << total;
    return 0;
}