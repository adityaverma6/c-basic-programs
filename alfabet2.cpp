
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cout << "enter lines: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        
        for (int i = 1; i <= n; i++)
        { 
            char name='a'+(i-1);
            cout  << " " << name;
        }    
        cout << endl;
       
    }
    
return 0;
}