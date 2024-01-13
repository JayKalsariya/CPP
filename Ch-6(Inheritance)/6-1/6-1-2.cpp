#include<iostream>
using namespace std;

class P{
    protected:
        float Fahrenheit, Celsius, Kelvin;
};
class Q : public P{
    public:
        void fahrenheit(){
            cout << "Enter Temperature in Celsius : "; cin >> Celsius;
            Fahrenheit = Celsius * 9/5 + 32;
        }
};
class R : public Q{
    public:
        void kelvin(){
            Kelvin = (Fahrenheit - 32) * 5/9 + 273.15;
            cout << endl << "\t-----DISPLAY------" << endl;
            cout << "Celsius\t\t: " << Celsius << endl
                 << "Fahrenheit\t: " << Fahrenheit << endl
                 << "Kelvin\t\t: " << Kelvin << endl << endl;
        }
};

int main()
{
    R t;
    t.fahrenheit();
    t.kelvin();
    return 0;
}
