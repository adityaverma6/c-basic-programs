#include <bits/stdc++.h>
using namespace std;
int trail(int n)
{
    int temp, sum = 0;
    while (n >= 5)
    {
        temp = n / 5;
        n /= 5;
        sum = sum + temp;
    }

    return sum;
}
int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;
    cout << "trail: " << trail(n);
    return 0;
}