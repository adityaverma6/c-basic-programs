#include <bits/stdc++.h>
using namespace std;
int bin(int n)
{
    int temp;
    if(n==1||n==0)
    {
        return 1;
    }
    temp=n%2;
    n=n/2;
    return temp;
} 
int main()
{
// int num,temp;
// int sum=0;
// int arr[25],m=0;
// cout << "enter num: ";
// cin >> num;
// while (num!=0)
// {
//     temp=num%2;
//     arr[m]=temp;
//     num=num/2;
//     m++;
// }
// for ( int i = m-1; i >= 0; i--)
// {
//     cout << arr[i] << ",";
// }
cout << bin(25);

return 0;
}