#include<iostream>
using namespace std;

int main()
{
    char name[30];
    cout << "Enter your name : ";
    gets(name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
            }
    }
    cout << name;
    return 0;
}
