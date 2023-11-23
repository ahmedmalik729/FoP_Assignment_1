#include <iostream>
#include<string>
using namespace std;
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Original array: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " "<<endl;
    }
    cout << endl;
    int more_elements[] = {6, 7, 8, 9, 10};
    cout << "Array after adding more elements: ";
    for (int i = 0; i < 5 + sizeof(more_elements) / sizeof(more_elements[0]); i++) 
    {
        if (i < 5) {
            cout << a[i] << " ";
        } 
        else 
        {
            cout <<more_elements[i - 5] << " ";
        }
    }
    cout << endl;
    return 0;
}