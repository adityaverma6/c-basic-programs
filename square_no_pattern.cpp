// pattern like:-
// "1 4 9 16 25..n"
// "1 4 9 16 25..n"
// "1 4 9 16 25..n"
// "1 4 9 16 25..n"
// "1 4 9 16 25..n"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++) // for row
    {
        for (int i = 1; i <= n; i++) // for col
        {
            cout << " " << i*i;
        }
        cout << endl;
    }

    return 0;
}