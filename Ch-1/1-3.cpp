#include<iostream>
using namespace std;

int main()
{
    char name[30];
    cout << "Enter your name : ";
    gets(name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        else if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
            }
    }

    cout << name;
        
    return 0;
}
