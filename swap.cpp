#include <bits/stdc++.h>
using namespace std;
void swap( int &a ,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
int a,b;
cout << "a:" << endl;
cin >> a; 
cout << " b:" ;
cin >> b ;
swap(a,b);
cout << "a:" << a << " b:" << b;
return 0;
}