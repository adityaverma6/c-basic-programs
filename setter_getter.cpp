#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    int age;
    char grade;
    // setter and getter
public:
    void setname(string n)
    {
        // if user returns an empty value
        if (n.size() == 0)
        {
            cout << "invalid name:";
            return;
        }
        name = n;
    }
    void setage(int a)
    {
        age = a;
    }
    void setroll_no(int b)
    {
        roll_no = b;
    }
    void setgrade(char ch)
    {
        grade = ch;
    }
    // getter is used to print or return funtions
    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        if (age < 0 || age > 100)
        {
            cout << "invalid age" << endl;
            return;
        }
        cout << age << endl;
    }
    // we can also return the values and print them in main function
    int getroll_no()
    {
        return roll_no;
    }
    char getgrade(int pin)
    {
        if (pin == 123)
        {
            return grade;
        }
        else
        {
            cout << "invalid pin";
            return ' ';
        }
    }
};

int main()
{
    int num;
    student s1;
    s1.setname("aditya");
    // for refrence see line:33
    // s1.setname("");
    s1.setage(258);
    s1.setgrade('A');
    s1.setroll_no(1001);
    s1.getname();
    s1.getage();
    cout << s1.getroll_no() << endl;
    cout << "enter pin";
    cin >> num;
    cout << s1.getgrade(num);
    return 0;
}