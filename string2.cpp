#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
    string first_name = "aditya";
    string last_name = "verma";
    string fullname = first_name + " " + last_name;
    fullname[11]= 'c';
    cout << fullname << "\n";
    cout << "the lenth of string is: " << fullname.size();
    cout << "the first letter of string is: " << fullname[0] << endl;
    
    cout << "the last letter of string is: " << fullname[fullname.size()-1] << endl;
    */

    string first_name ;
    string last_name ;
    cout << "enter first name: ";
    cin >> first_name;
    cout << "enter last name: ";  
    cin >> last_name; 
    string fullname = first_name + " " + last_name;
    fullname.at(11)= 'c';
    cout << fullname << "\n";
    cout << "the lenth of string is: " << fullname.size();
    cout << "the first letter of string is: " << fullname.at(0) << endl;
    
    cout << "the last letter of string is: " << fullname.at(fullname.size()-1) << endl;
    return 0;
}