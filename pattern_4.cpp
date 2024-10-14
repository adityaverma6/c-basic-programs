// pattern like:-
// "         1"
// "       2 1"
// "     3 2 1"
// "   4 3 2 1"
// " 5 4 3 2 1"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter line: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n - j; i++)
        {
            cout << "  ";
        }
        
        for (int k = j; k >= 1; k--)
        {
            cout << " " << k;
        }

        cout << endl;
    }

    return 0;
}