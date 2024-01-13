#include<iostream>
using namespace std;

class Var{
    public:
        int a, b;
    private:
        int c, d;
};

int main()
{
    Var v;
    cout << "Enter A : ";
    cin >> v.a;
    cout << "Enter B : ";
    cin >> v.b;
    cout << "A :" << a << "B : " << b; 
    // HERE WE CAN'T ACCESS c & d BECAUSE IT IS PRIVATE
    return 0;
}
