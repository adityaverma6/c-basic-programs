// for pattern like:-
// "a "
// "b b"
// "c c c"
// "d d d d"
// "e e e e e"
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    // char name = 'a';
    int n;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
       
        // we can use 
        char name='a'+(j-1);
        for (int i = 1; i <= j; i++)
        {
            cout << " " << name;
        }
        name++;
        cout << endl;
    }

    return 0;
}