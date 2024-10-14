#include <bits/stdc++.h>
using namespace std;
int two(int n)
{
    if (n<0)
    {
        cout << "false";
    }
    while(n!=1)
    {
        if(n%2==1)
        {
            cout << "false";
            n=n/2;
        }
        
    }
    cout << "true";
    return 0;
} 
int main()
{
    
    two(16);

    return 0;
}// int num,i,temp;
    // cout << "enter num: ";
    // cin >> num;
    // for ( i = 2; i <= num; i *= 2)
    // {
    //     temp=i;
    // }
    // if (temp == num)
    // {
    //     cout << "true";
    // }
    // else
    // {
    //     cout << "false";
    // }