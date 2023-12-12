#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
    int c_id, c_age, c_simcard_validity;
    char c_name[20], c_city[20], c_mo_num[20], c_tele_brandname[20];

public:
    void setter()
    {
        cout << "Enter ID : ";
        cin >> c_id;
        fflush(stdin);
            cout << "Enter Name : ";
            gets(c_name);
        cout << "Enter Age : ";
        cin >> c_age;
        fflush(stdin);
            cout << "Enter City : ";
            gets(c_city);
        cout << "Enter Telebrand : ";
        gets(c_tele_brandname);
        cout << "Enter Sim validity : ";
        cin >> c_simcard_validity;
        fflush(stdin);
            cout << "Enter Mo.num : ";
            gets(c_mo_num);
        getter();
    }

    void getter(){
        cout << endl << "ID\t: " << c_id << endl
             << "NAME\t: " << c_name << endl
             << "AGE\t: " << c_age << endl
             << "CITY\t: " << c_city << endl
             << "TELEBRAND\t: " << c_tele_brandname << endl
             << "SIM VALIDITY\t: " << c_simcard_validity << endl
             << "MO.NUMBER\t: " << c_mo_num;
    }
};

int main()
{
    Customer c1,c2,c3,c4,c5;
    c1.setter();
    c2.setter();
    c3.setter();
    c4.setter();
    c5.setter();
    return 0;
}
