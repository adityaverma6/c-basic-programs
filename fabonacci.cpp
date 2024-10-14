// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int c, n, a = 0, b = 1;
//     cout << "enter no.of terms:";
//     cin >> n;
//     cout << a << "," << b;
//     for (int i = 1; i < n; i++)
//     {
//         c = a + b;
//         cout << "," << c;
//         a = b;
//         b = c;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return (rec(n - 1) + rec(n - 2));
    
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << rec(i)<<" ";
    }
    return 0;
}