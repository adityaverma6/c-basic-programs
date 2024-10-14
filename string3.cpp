#include <iostream>
#include <string>
using namespace std;
int main()
{
    //it will not work for more than one word
    /*
    string first_name ;
    string last_name;
    cout << "enter your first name: ";
    cin >> first_name;
    cout << "enter your last name: ";
    cin >> last_name;
    string fullname = first_name +" " + last_name;
    cout << fullname<< "\n";
    cout << "the lenth of string is: "<<fullname.size();
    return 0;
    */
   
    string fullname ;
    cout<<"enter your full name: ";
    getline(cin, fullname);
    cout << fullname << "\n";
    cout << "the lenth of string is: " << fullname.size();
    return 0;
   
}