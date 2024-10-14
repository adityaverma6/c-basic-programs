#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " element: ";
        cin >> arr[i];
    }
    int i = n - 1, j = 0;
    while (i >= 0)
    {
        temp[j] = arr[i];
        i--;
        j++;
    }
    for (int k = 0; k < n; k++)
    {
        cout << temp[k] << endl;
    }
}