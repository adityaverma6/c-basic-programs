// for pattern like:-
// "1 "
// "1 2"
// "1 2 3"
// "1 2 3 4"
// "1 2 3 4 5"
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
        cout << i << " ";
    }
    cout << endl;
}

return 0;
}