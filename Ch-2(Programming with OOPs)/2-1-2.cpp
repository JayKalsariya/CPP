#include<iostream>
using namespace std;

class Car{
    public:
        int car_id, release_year;
        char car_company_name[20], car_color[10], car_model[10];
};

int main()
{
    Car c[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter car id : ";
        cin >> c[i].car_id;
    fflush(stdin);
        cout << "Enter company name : ";
        gets(c[i].car_company_name);
        cout << "Enter car model : ";
        gets(c[i].car_model);
        cout << "Enter car color : ";
        gets(c[i].car_color);
        cout << "Enter relese date : ";
        cin >> c[i].release_year;
        cout << endl << endl;
    }

    cout << endl << "--------------------------------------------------------" << endl;
    cout << "ID\tCOMPANY NAME\tMODEL\tCOLOR\tRELEASE DATE" << endl;
    cout << endl << "--------------------------------------------------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << c[i].car_id << "\t" << c[i].car_company_name << "\t\t" << c[i].car_model
             << "\t" << c[i].car_color << "\t" << c[i].release_year << endl;
    }
    cout << "--------------------------------------------------------" << endl;


    return 0;
}
