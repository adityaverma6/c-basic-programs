#include <bits/stdc++.h>
using namespace std;
bool rec(int a, int b, int c, int d)
{
    if((a==b&&c==d)||(a==c&&b==d)||(a==d&&c==b))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a,b,c,d;
    cout << "enter sides:" << endl;
    cin >> a >> b >> c >> d;
    cout << rec(a,b,c,d);
    return 0;
}