#include <iostream>
using namespace std;

class A{
   public:
	    void print(){
	        cout << "Function 1" << endl;
	    }
};

class B : public A{
   public:
	    void print(){
	        cout << "Function 2" << endl;
	    }
};

int main(){
    B obj;
    obj.print();
    return 0;
}