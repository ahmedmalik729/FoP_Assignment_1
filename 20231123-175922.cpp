#include<iostream>
#include<string>
using namespace std;
int main()
{
string str, result;
    bool found;
    cout<<"Enter String: ";
    cin>>str;
    result = "";
    for (int i = 0; i < str.length(); i++) {
        found = false;
        for (int j = 0; j < result.length(); j++) {
            if ( str[i] == result[j] ) {
                found = true;
            }
        }
        if (found == false) {
            result += str[i];
        }
    }
    cout<<"Resultant String: "<<result;
    }