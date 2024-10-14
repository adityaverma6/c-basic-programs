#include <bits/stdc++.h>
using namespace std;
int isPalindrome(int x)
{
    int temp = 0, ans = 0 ;
    int ne;
    ne=x;
    while (ne != 0)
    {
        temp = ne % 10;
        ne = ne / 10;
        ans = ans * 10 + temp;
    }
    if (ans == x)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
int main()
{
    int a;
    cout << "enter no.: ";
    cin >> a;
    isPalindrome(a);
    return 0;
}