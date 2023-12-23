#include<iostream>
using namespace std;

class Cricket{
    public:
        void getTotalovers(){
            cout << "CRICKET";
        }
};
class T20match : public Cricket{
    public:
        void getTotalovers(){
            cout << "20 overs" << endl;
        }
};
class Testmatch : public Cricket{
    public:
        void getTotalovers(){
            cout << "100 overs" << endl;
        }
};

int main()
{
    T20match t1;
    t1.getTotalovers();
    Testmatch t2;
    t2.getTotalovers();
    return 0;
}
