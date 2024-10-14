#include <bits/stdc++.h>
using namespace std;
char change(char &ch)
{
    // ch=ch-32;
    ch=ch-'a'+'A';
    return ch;
}

int main()
{
char ch;
cout << "enter letter: ";
cin >> ch;

cout << change(ch);
return 0;
}