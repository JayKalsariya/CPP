#include<iostream>
using namespace std;

int main()
{
    int y1, y2, size, n=0;
    cout << "Enter year 1 : ";
    cin >> y1;
    cout << "Enter year 2 : ";
    cin >> y2;

    size = (y2-y1)/4;
    int leapyear[size];
    for (int i = y1; i <= y2; i++)
    {
        if (i % 4 == 0)
        {
            leapyear[n] = i;
            n++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << leapyear[i] << endl;
    }
    

    return 0;
}
