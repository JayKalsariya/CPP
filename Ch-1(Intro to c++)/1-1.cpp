#include<iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "ONLY EVEN ELEMENTS..." << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            cout << a[i] << endl; 
        }   
    }    
    return 0;
}
