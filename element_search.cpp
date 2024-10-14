#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {3, 5, 6, 22, 14};
    int key;
    cout << "enter search element : ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key){
        cout << key << " is at " << i << " index";
        break;
        }
    }
}