#include<iostream>
#include<string>
using namespace std;

class A{
    protected:
        int id, expe;
        char name[30], role[20], salary[15], comp_name[20], address[50], email[20],
             contact[12];
    public:
    void setA(){
        cout << "ID\t\t: "; cin >> id;
        fflush(stdin);
        cout << "NAME\t\t: "; gets(name);
        cout << "ROLE\t\t: "; gets(role);
    }
};

class B : public A{
    public:
        void setB(){
            cout << "SALARY\t: "; gets(salary);
            cout << "EXPARIENCE\t: "; cin >> expe;
            fflush(stdin);
        }
};

class C : public B{
    public:
        void setC(){
            cout << "COMPANY NAME\t: "; gets(comp_name);
            cout << "ADDRESS\t: "; gets(address);
        }
        void getC(){
            cout << "NAME\t: " << name << endl;
            cout << "ROLE\t: " << role << endl;
            cout << "SALARY\t: " << salary << endl;
            cout << endl << "--------------------------------------" << endl;
        }
};

class D : public C{
    public:
        void setD(){
            cout << "EMAIL\t: "; gets(email);
            cout << "CONTACT\t: "; gets(contact);
            cout << endl << "--------------------------------------" << endl;
        }
        void getD(){
            cout << "Id\t\t: " << id << endl;
            cout << "Name\t\t: " << name << endl;
            cout << "Role\t\t: " << role << endl;
            cout << "Salary\t\t: " << salary << endl;
            cout << "Experience\t: " << expe << endl;
            cout << "Company Name\t: " << comp_name << endl;
            cout << "Address\t\t: " << address << endl;
            cout << "Email\t\t: " << email << endl;
            cout << "Contact\t\t: " << contact << endl;
        }
};

int main()
{
    D o1;
    o1.setA();
    o1.setB();
    o1.setC();
    o1.setD();
    o1.getC();
    o1.getD();
    return 0;
}
