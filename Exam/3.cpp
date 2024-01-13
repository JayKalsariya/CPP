#include <iostream>
using namespace std;

class Error{
	public:
	Error(){
		int a, b;
		cout << "Enter 1st Num : ";
		cin >> a;
		cout << "Enter 2nd Num : ";
		cin >> b;
		try{
			if(b == 0){
				throw b;
			}
			else{
				cout<< "Ans : " << (a/b);
			}
		}
		catch(int){
			cout<<"Can't Divide By ZERO";
		}
	}
};

int main(){
	Error e;
	return 0;	
}