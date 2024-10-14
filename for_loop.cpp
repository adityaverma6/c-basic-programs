#include<iostream>
using namespace std;
int main(){
    int a[10]; 
    cout<< "enter 10 value: ";
    for (int i = 0; i < 10; i++)
    {
       cin>>a[i] ;
    }
    for (int i = 0; i < 10; i++)
    {
       cout<< "10 values: " <<a[i] <<endl;
    }
    return 0;
}