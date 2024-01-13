#include<iostream>
using namespace std;

class RBI{
    protected:
        float cost = 12.48;
        long int ROI;
};
class SBI : public RBI{
    public:
        long int s;
        void setSBI(){
            cout << endl << "\t-----------State Bank Of India-------------" << endl;
            cout << "Enter total Amount : "; cin >> s;
            getSBI();
        }
        void getSBI(){
            ROI = s/cost * 100;
            cout << endl << "Rate Of Investment (ROI) : " << ROI << endl << endl;
        }
};
class BOB : public RBI{
    public:
        long int b;
        void setBOB(){
            cout << endl << "\t-----------Bank Of Baroda-------------" << endl;
            cout << "Enter total Amount : "; cin >> b;
            getBOB();
        }
        void getBOB(){
            ROI = b/cost * 100;
            cout << endl << "Rate Of Investment (ROI) : " << ROI << endl << endl;
        }
};
class ICICI : public RBI{
    public:
        long int i;
        void setICICI(){
            cout << endl << "\t-----------ICICI Bank-------------" << endl;
            cout << "Enter total Amount : "; cin >> i;
            getICICI();
        }
        void getICICI(){
            ROI = i/cost * 100;
            cout << endl << "Rate Of Investment (ROI) : " << ROI << endl << endl;
        }
};

int main()
{
    SBI s1;
    s1.setSBI();
    BOB b1;
    b1.setBOB();
    ICICI i1;
    i1.setICICI();
    return 0;
}
