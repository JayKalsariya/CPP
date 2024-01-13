#include<iostream>
using namespace std;

class A{
	public:
		void PrintA() {
			cout << "Class A" << endl;
		}
};

class B : public A{};

class C : public A{};

class D : public B, public C{};

int main(){
	D obj;
//	obj.PrintA();   Here is compile time in show Ambiguity Error so we use Membership lable operator.
	obj.B::PrintA();
//		  OR
	obj.C::PrintA();
	return 0;
}
