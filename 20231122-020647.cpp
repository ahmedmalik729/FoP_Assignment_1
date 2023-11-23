#include<iostream>
using namespace std;
int main() 
{
    int N, i;   // N is user input Integer
    bool prime_n = false;
    cout << "Enter a positive Integer." << endl;
    cin >> N;

    i = N;
    while (i >= 2)
    {
        prime_n=true;

        int j = 2;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                prime_n = false;
                break;
            }
            j++;
        }

        if (prime_n)
        {
            break;
        }

        i--;
    }

    if (prime_n)
    {
        cout << "The largest Prime Number, less than or equal to the input integer is " << i << endl;
    }

    return 0;
}