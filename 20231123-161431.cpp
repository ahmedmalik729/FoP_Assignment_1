#include <iostream>
#include <string>
using namespace std;

string rotateString(const string& str) 
{
    return str.substr(1) + str[0];
}

int main() {
    string string1, string2;
    cout << "Enter the first string: "<<endl;
    cin >> string1;
    cout << "Enter the second string: "<<endl;
    cin >> string2;
    if (string1 == string2) {
        cout << "The strings are equal." << endl;
        string1 = rotateString(string1);
        cout << "After rotation, the first string is: " << string1 << endl;
        cout << "The second string is: " << string2 << endl;
    } else {
        cout << "The strings are unequal." << endl;
    }
    return 0;
}