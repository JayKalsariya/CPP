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
        cout << endl << "ID\t\t: " << c_id << endl
             << "NAME\t\t: " << c_name << endl
             << "AGE\t\t: " << c_age << endl
             << "CITY\t\t: " << c_city << endl
             << "TELEBRAND\t: " << c_tele_brandname << endl
             << "SIM VALIDITY\t: " << c_simcard_validity << endl
             << "MO.NUMBER\t: " << c_mo_num << endl << endl;
    }
};

int main()
{
    Customer c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i].setter();
    }
    
    return 0;
}
