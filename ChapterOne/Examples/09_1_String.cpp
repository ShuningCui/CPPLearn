#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    //Concatenation
    string str3 = str1 + " " + str2;
    cout << "str3 = " << str3 << endl;
    //Length
    cout << "str3.length() = " << str3.length() << endl;
    //Accessing characters
    cout << "str3[0] = " << str3[0] << endl;
    cout << "str3.at(0) = " << str3.at(0) << endl;
    //Substring
    cout << "str3.substr(0, 5) = " << str3.substr(0, 5) << endl;
    //Find
    cout << "str3.find(\"World\") = " << str3.find("World") << endl;
    return 0;

}