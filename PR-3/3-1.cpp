#include<iostream>
using namespace std;

class Shape{
    protected:
        int width, height;
    public:
        Shape(){
            cout << "Enter Width : "; cin >> width;
            cout << "Enter Height : "; cin >> height;
            cout << endl;
        }
};

class Triangle : public Shape{
    public:
        float ta;
            void area(){
                ta = 0.5 * width * height;
                cout << "Area Of Triangle : " << ta << endl;
                cout << endl << "----------------------------------------" << endl;
            }
};

class Rectangle : public Shape{
    public:
        float ra;
            void area(){
                ra = width * height;
                cout << "Area Of Rectangle : " << ra << endl;
                cout << endl << "----------------------------------------" << endl;
            }
};

int main()
{
    Triangle t1;
    t1.area();
    Rectangle r1;
    r1.area();
    return 0;
}
