#include <iostream>
#include <string>

using namespace std;

/*
 * Name: Kritika Singh
 * Student Number: 100859600
 * Date: July 21, 2022
 * Program : Computer Programming
 *
 * Description:
 - In this program the first step is to create a string.
 - The next step is to put Values inside the string.
 - This ICE should use at least 7 functions from the string library and show an output when needed.
 */
int main()
{

    int  find;

    // 1st function:
    string mystring= "It is windy outside!!!";
    cout << mystring.size() << endl;
    cout << mystring[0] << endl;
    cout << mystring[21] << endl;

    mystring += " Stay warm :)";
    cout << mystring << endl;
    cout << mystring.size() << endl;

    // 2nd function:
    mystring.max_size();

    // 3rd function:
    mystring.insert(5, " very ");
    cout << mystring << endl;

    // 4th function:
    find = mystring.find("v");
    cout << find << endl;

    // 5th function:
    cout << mystring.at(8) << endl;

    // 6th function:
    cout << mystring.substr(2, 8) << endl;

    // 7th function:
    mystring.clear();

    return 0;
}
