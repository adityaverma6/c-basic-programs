// for pattern like:-
// "1 "
// "2 2"
// "3 3 3"
// "4 4 4 4"
// "5 5 5 5 5"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter lines: ";
    cin >>n;
for (int j = 1; j <= n; j++)
{
    for (int i = 1; i <= j; i++)
    {
        cout << j << " ";
    }
    cout << endl;
}

return 0;
}