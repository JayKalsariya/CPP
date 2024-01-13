#include<iostream>
using namespace std;

class A {
    protected:
        int a;
};
class B : public A{
    protected:
        int b;
        B(){
            cout << "Enter A : "; cin >> a;
            cout << "Enter B : "; cin >> b;
        }
};
class C : public A{
    protected:
        int c;
        C(){
            cout << "Enter C : "; cin >> c;
        }
};
class D : public B, public C{
    public:
        int d, sum=0;
        D(){
            cout << "Enter D : "; cin >> d;
            sum += B::a + b + c + d;
            cout << endl << "SUM : " << sum;
        }
};
int main()
{
    D o1;
    o1.d;
    return 0;
}
