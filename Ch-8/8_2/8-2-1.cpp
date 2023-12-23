#include<iostream>
using namespace std;

class Number{
    public:
        int a;

        void set(){
            cout << "Enter Number : "; cin >> a;
        }
        bool operator<(Number n2){
            if (a < n2.a)
            {
                return true;
            }
            else{
                return false;
            }
        }
};

int main()
{
    Number n1, n2;
    n1.set();
    n2.set();
    if(n1 < n2){
        cout << " n2 is Maximum value...";
    }
    else{
        cout << " n1 is Maximum value...";
    }
    return 0;
}
