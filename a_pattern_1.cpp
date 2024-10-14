// pattern like:-
// "         a"
// "       a b"
// "     a b c"
// "   a b c c"
// " a b c d e"
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
        // char name = 'a';
        for (int k = 1; k <= j; k++)
        { 
            char name = 'a'+(k-1);
            cout << " " << name;
            // name++;
        }
        

        cout << endl;
    }

    return 0;
}