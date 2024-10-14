//armstrong number
#include <bits/stdc++.h>
using namespace std;
void arm(int n)
{
    int temp, sum = 0, num;
    num = n;
    while (num != 0)
    {
        temp = num % 10;
        sum += pow(temp, 3);
        num = num / 10;
    }
    if (sum == n)
    {
        cout << "armstrong!!";
    }
    else
    {
        cout << "not armstrong!! ";
    }
}
int main ()
{
    int n;
    cout << "enter num: ";
    cin >> n;
    arm(n);
    return 0;
}