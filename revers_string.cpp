#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[] = "aditya", arr2[7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr2[j] = arr[i];
        }
    }
    arr2[7]='\0';
    for (int i = 0; i < 7; i++)
    {
        cout << arr2[i];
    }
    return 0;
}