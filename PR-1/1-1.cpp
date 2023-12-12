#include<iostream>
using namespace std;

class Measure{
    public:
    int i1, i2, f1, f2, i3, f3;
};

int main()
{
    Measure m;
    cout << "Enter feet 1 : ";
    cin >> m.f1;
    cout << "Enter inch 1: ";
    cin >> m.i1;
    cout << "Enter feet 2: ";
    cin >> m.f2;
    cout << "Enter inch 2: ";
    cin >> m.i2;
    m.f3 = (m.i1 + m.i2) / 12;
    m.f3 += (m.f1 + m.f2);
    m.i3 = (m.i1 + m.i2) % 12;
    cout << endl << "Total : " << m.f3 << " Feet " << m.i3 << " Inch";
    return 0;
}
