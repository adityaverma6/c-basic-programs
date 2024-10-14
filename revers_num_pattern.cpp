// for pattern like:-
// "1 "
// "2 1"
// "3 2 1"
// "4 3 2 1"
// "5 4 3 2 1"
// code 1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter lines: ";
//     cin >>n;
// for (int j = 1; j <= n; j++)
// {
//     for (int i = 1; i <= j; i++)
//     {
//         cout << j-i+1 << " ";
//     }
//     cout << endl;
// }

// return 0;
// }
// code 2:-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = j; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}