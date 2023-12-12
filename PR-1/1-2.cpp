#include<iostream>
using namespace std;

class Time{
    public:
    int s, h, m;
};

int main()
{
    Time t;
    cout << "Enter time in seconds : ";
    cin >> t.s;
    t.h = t.s / 3600;
    t.m = (t.s % 3600) / 60;
    t.s = t.s % 60;
    cout << endl << t.h << " HOUR " << t.m << " MIN " << t.s << " SEC";
    return 0;
}
