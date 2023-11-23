#include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
    int quotient = 0;

    cout << "Enter dividend: "<<endl;
    cin >> dividend;

    cout << "Enter divisor: "<<endl;
    cin >> divisor;
    if (dividend<divisor)
    {
        cout<<"Kindly input dividend, greater than divisor."<<endl;
        return 0;
    }
    for (dividend; dividend >= divisor; dividend -= divisor)
    {
        quotient++;
    }
    cout << "Quotient: " << quotient << endl;
    return 0;
}