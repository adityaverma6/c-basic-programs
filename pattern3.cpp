// pattern like:-
// "1 2 3 4 5...n"
// "1 2 3 4 5...n"
// "1 2 3 4 5...n"
// "1 2 3 4 5...n"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++)//for row5
    {
        for (int i = n; i >= 1; i--)//for col
        {
            cout   << i<< " ";
        }    
        cout << endl;
       
    }
    
return 0;
}