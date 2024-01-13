#include<iostream>
using namespace std;

class Bank{
	public:
		double AC_num, AC_bal;
		char AC_name[30], AC_type[30], AC_branch[30];
		
		void setdata(){
			cout << "Enter AC. No.\t: "; cin >> AC_num;
			fflush(stdin);
			cout << "Enter AC. Name\t: "; gets(AC_name);
			cout << "Enter AC. Type\t: "; gets(AC_type);
			cout << "Enter AC. Bal.\t: "; cin >> AC_bal;
			fflush(stdin);
			cout << "Enter AC. Branch : "; gets(AC_branch);
			cout << endl;
		}
		void Search(double no){
					cout << "Enter AC. No.\t : " << AC_num << endl;
					cout << "Enter AC. Name\t : " << AC_name << endl;
					cout << "Enter AC. Type\t : " << AC_type << endl;
					cout << "Enter AC. Bal.\t : " << AC_bal << endl;
					cout << "Enter AC. Branch : " << AC_branch << endl;
		}
};

int main(){
	int n, i;
	double no;
	cout << "Enter No. of A/C : "; cin >> n;
	
	Bank b[n];
	for(i=0; i<n; i++){
		cout << "\tAccount " << i+1 << endl;
		cout << "\t---------" << endl;
		b[i].setdata();
	}
	cout << "Enter AC. No. for search Bank Details : ";
	cin >> no;
	for(i=0; i<n; i++){
		if(no == b[i].AC_num){
			b[i].Search(no);			
		}
	}
	
	return 0;
}