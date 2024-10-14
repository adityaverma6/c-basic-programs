// pattern like:-
// "         1"
// "       1 2"
// "     1 2 3"
// "   1 2 3 4"
// " 1 2 3 4 5"
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
        
        for (int k = 1; k <= j; k++)
        {
            cout << " " << k;
        }

        cout << endl;
    }

    return 0;
}