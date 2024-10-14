#include <bits/stdc++.h>
using namespace std;
int main()
{
int num,temp;
long sum=0;
cout << "enter no.: ";
cin >> num;
while (num!=0)
{
    temp=num%10;
    sum=sum*10+temp;
    num=num/10;
}
cout << "revers num: " << sum;
return 0;
}