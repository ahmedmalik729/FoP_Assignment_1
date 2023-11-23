#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9};
                 for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            for (int k=0; k<10; k++)
            {
                if (arr[i]+arr[j]+arr[k]==10)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}