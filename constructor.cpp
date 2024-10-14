// 1.it is a spacial fn. that is invoked automatically at the time of object creation.
// 2. name of constructer should be same as class name.
// 3.it doesnt have any return type.
// 4.it is used to initialise the value
#include <bits/stdc++.h>
using namespace std;
class costmer
{
    public:
    string name;
    int ac ;
    int balance;
    costmer()//defalt contructor
    {
        cout << " costmer is called";
    }
    costmer(string a,int b,int c)//paramatric contructor
    {
        name=a;
        ac=b;
        balance=c;
    }
};
int main()
{
    costmer a1("aditya",132,1000);
    cout << a1.name << endl;
    cout << a1.ac << endl;
    cout << a1.balance << endl;
return 0;
}