#include<iostream>
using namespace std;

class Distance{
    public:
        int km, m;
        void setdata(){
            cout << "Enter Kilometer : "; cin >> km;
            cout << "Enter Meter : "; cin >> m;
        }
        Distance operator+(Distance d2){
                Distance tmp;
                tmp.km = (m + d2.m) / 1000;
                tmp.km += (km + d2.km);
                tmp.m = (m + d2.m) % 1000;
                return tmp;
        }
        void getdata(Distance d3){
            cout << endl << "------------------------------------" << endl;
            cout << "Kilometer : " << d3.km << " Meter : " << d3.m << endl;
            cout << "------------------------------------" << endl;
        }
};

int main()
{
    Distance d1, d2, d3;
    cout << endl << "Enter 1st Distance Data" << endl;
    d1.setdata();
    cout << endl << "Enter 2nd Distance Data" << endl;
    d2.setdata();
    d3 = d1 + d2;
    d3.getdata(d3);
    return 0;
}
