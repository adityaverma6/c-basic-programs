// for pattern like:-
// "* * * * *"
// "* * * *"
// "* * *"
// "* *"
// "* "
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
//         cout << " * ";
//     }
//     cout << endl;
// }

// return 0;
// }
// row  printf
// 1      5   5-(1-1)
// 2      4   5-(2-1)
// 3      3   5-(3-1)
// 4      2   5-(4-1)
// 5      1   5-(5-1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter lines: ";
    cin >>n;
for (int j = 1; j <= n; j++)
{
    for (int i = 1; i <= n-(j-1); i++)
    {
        cout << " * ";
    }
    cout << endl;
}

return 0;
}