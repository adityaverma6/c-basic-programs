// factorial from using function
#include <bits/stdc++.h>
using namespace std;
int fact(int);
int fact(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    cout << "factoril of " << n << " is " << fact(n);
    return 0;
}
