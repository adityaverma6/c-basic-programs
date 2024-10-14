// pattern like:-
// "a a a a a"
// "b b b b b"
// "c c c c c"
// "d d d d d"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        char name='a'+(j-1);
        for (int i = 1; i <= n; i++)
        {
            cout  << " " << name;
        }    
        cout << endl;
       
    }
    
return 0;
}