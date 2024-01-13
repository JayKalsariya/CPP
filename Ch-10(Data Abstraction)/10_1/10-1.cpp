#include<iostream>
#include<string>
using namespace std;

class Admin{
    private:
        double total_annual_revenue;
    protected:
        int manager_salary, employee_salary, total_staff;
        string company_name = "JK Developer";
        string can_terminate;
    public:
        void setdata(){
            cout << "Company Name\t: " << company_name << endl;
            cout << "Total Annual Revenue : ";
            cin >> total_annual_revenue;
            cout << "Manager salary\t: ";
            cin >> manager_salary;
            cout << "Total stafft\t: ";
            cin >> total_staff;
            cout << "Can Terminate\t: Yes";
        }
        void getdata(){
            cout << endl << "\t------Get Data By Admin------" << endl;
            cout << "Company Name\t: " << company_name << endl;
            cout << "Total Annual Revenue\t: "<< total_annual_revenue << endl;
            cout << "Manager salary\t: " << manager_salary << endl;
            cout << "Total staff\t: " << total_staff << endl;
            cout << "Can Terminate\t: Yes" << endl;
        }
};
class Manager : public Admin{
    
    public:
        void getdata(){
            cout << "\t------Get Data By Manager------" << endl;
            cout << "Company Name\t:" << company_name << endl;

            cout << "Manager salary\t: " << manager_salary << endl;
            cout << "Total staff\t: " << total_staff << endl;
            cout << "Can Terminate\t: No" << endl;
        }
};
class Employee : public Manager{
    public:
        void getdata(){
            cout << "\t------Get Data By Employee------" << endl;
            cout << "Company Name\t: " << company_name << endl;
            cout << "Can Terminate\t: Yes" << endl;
        }
};

int main()
{
    Admin a;
    a.setdata();
    a.getdata();
    Manager m;
    m.getdata();
    Employee e;
    e.getdata();
    return 0;
}
