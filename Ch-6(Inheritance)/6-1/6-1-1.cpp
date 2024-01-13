#include<iostream>
using namespace std;

class X{
    protected:
        int a, b, c;
};
class Y : public X{
    public:
        void setdata(){
            cout << "A : "; cin >> a;
            cout << "B : "; cin >> b;
            cout << "C : "; cin >> c;
        }
        void getdata(){
            cout << endl << "\t-----DISPLAY------" << endl;
            cout << "A : " << a << endl;
            cout << "B : " << b << endl;
            cout << "C : " << c << endl;
            cout << endl << "SUM : " << a+b+c << endl << endl;
        }
};

int main()
{
    Y o;
    o.setdata();
    o.getdata();
    return 0;
}
