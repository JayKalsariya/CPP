#include<iostream>
using namespace std;

class Calc{
    public:
        void calculate(int a, int b){
            cout << endl << "DIV : " << a / b << endl;
        }
        void calculate(int a, int b, int c){
            cout << "SUB : " << a - b - c << endl;
        }
        void calculate(int a, int b, int c, int d){
            cout << "MUL : " << a * b * c * d<< endl;
        }
        void calculate(int a, int b, int c, int d, int e){
            cout << "SUM : " << a + b + c + d + e << endl;
        }
        
};

int main()
{
    Calc c1;
    float a, b, c, d, e;
    cout << "Enter A : "; cin >> a ;
    cout << "Enter B : "; cin >> b ;
    cout << "Enter C : "; cin >> c ;
    cout << "Enter D : "; cin >> d ;
    cout << "Enter E : "; cin >> e ;
    c1.calculate(a, b);
    c1.calculate(a, b, c);
    c1.calculate(a, b, c, d);
    c1.calculate(a, b, c, d, e);
    return 0;
}
