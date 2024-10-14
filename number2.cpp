// program to print table
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int table = 0;
    int n, ans = 0;
    cout << "enter table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        ans = n * i;
        cout << n << "x" << i << "=" << ans << endl;
    }
    return 0;
}