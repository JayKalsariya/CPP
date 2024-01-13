#include <iostream>
using namespace std;

class Employee
{
    public:
        int emp_id, emp_age, emp_experience;
        char emp_name[20], emp_role[20], emp_salary[20], emp_city[10], emp_company_name[10];
};

int main()
{
    Employee e1[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee Id\t\t: ";
        cin >> e1[i].emp_id;
    fflush(stdin);
        cout << "Employee Name\t\t: ";
        gets(e1[i].emp_name);
        cout << "Employee Age\t\t: ";
        cin >> e1[i].emp_age;
    fflush(stdin);
        cout << "Employee Role\t\t: ";
        gets(e1[i].emp_role);
        cout << "Employee Experience\t: ";
        cin >> e1[i].emp_experience;
    fflush(stdin);
        cout << "Employee Salary\t\t: ";
        cin >> e1[i].emp_salary;
        cout << "Employee Company Name\t: ";
        cin >> e1[i].emp_company_name;
        cout << "Employee City\t\t: ";
        cin >> e1[i].emp_city;
        cout << endl << endl;
    }

    cout << endl << "--------------------------Employee Data------------------------------" << endl;
    cout << "ID\tNAME\tAGE\tROLE\tEXPERIENCE\tSALARY\tCOMPANY\tCITY" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << e1[i].emp_id << "\t" << e1[i].emp_name << "\t" << e1[i].emp_age << "\t"
             << e1[i].emp_role << "\t"
             <<e1[i].emp_experience << "\t" << e1[i].emp_salary << "\t" << e1[i].emp_company_name
             << "\t" << e1[i].emp_city << endl;
    }
    cout << "---------------------------------------------------------------------" << endl;


    return 0;
}
