#include<iostream>
using namespace std;

class Number{
    protected:
        int n;
    public:
        Number(){
            cout << "Enter any Number : "; cin >> n;
        }
};

class Square : public Number{
    public:
        void getdata(){
            cout << "Square\t\t : " << n * n << endl;
            cout << endl << "-----------------------------" << endl;
        }
};

class Cube : public Number{
    public:
        void getdata(){
            cout << "Cube\t\t : " << n * n * n << endl;
            cout << endl << "-----------------------------" << endl;
        }
};

int main()
{
    Square s1;
    s1.getdata();
    Cube c1;
    c1.getdata();    
    return 0;
}
