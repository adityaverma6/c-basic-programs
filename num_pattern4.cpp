// pattern like:-
// "1 2 3 4 5...n"
// "6 7 8 9 10...n"
// "11 12 13 14 15...n"
// "16 17 18 19 20...n"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 0; j < n; j++)//for row5
    {
        for (int i = 1; i <=n; i++)//for col
        {
            count++;
            cout   << count <<" ";
        }    
        cout << endl;
       
    }
    
return 0;
}