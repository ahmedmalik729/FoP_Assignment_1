// Write a C++ program to display factors of a number

#include<iostream>
using namespace std;
int main()
{
    int n,f;
// f is taken as factor of n
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The factors of the number are"<<endl;
    for (f=1; f<=n; f++)
    {
        if (n%f==0)
        {
            cout<<f<<endl;
        }
    }
    return 0;
}