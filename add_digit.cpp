// given an integer (int) repedly add all its digit untill the result has only one digit, and return it
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "enter no: ";
    cin >> num;
    while (num > 9)
    {
        int temp = 0, sum = 0 ;
        while (num != 0)
        {
            temp = num % 10;
            num = num / 10;
            sum = sum + temp;
        }
       num=sum;
       cout << "add is: " << num;
       cout << endl;
    }
    

    return 0;
}