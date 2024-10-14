#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int age;
};
int main()
{
    student *s=new student;
    (*s).name= "aditya";
    (*s).age= 15;
    cout  << s->name<< endl;
    cout  << s->age;

return 0;
}