#include <iostream>
#include <string>
using namespace std;

typedef class Railreservation
{

public:
    char t_name[30], sourse[30], destination[30], t_time[30];
    double t_num;

    void setdata()
    {
        cout << "Train Number\t: ";
        cin >> t_num;
        fflush(stdin);
        cout << "Train Name\t: ";
        gets(t_name);
        fflush(stdin);
        cout << "Source\t\t: ";
        gets(sourse);
        fflush(stdin);
        cout << "Destination\t: ";
        gets(destination);
        fflush(stdin);
        cout << "Train Time\t: ";
        gets(t_time);
        fflush(stdin);
        cout << "----------------------------------------" << endl << endl;
    }

    void getdata()
    {
        cout << "Train Number\t: " << t_num << endl;
        cout << "Train Name\t: " << t_name << endl;
        fflush(stdin);
        cout << "Source\t\t: " << sourse << endl;
        fflush(stdin);
        cout << "Destination\t: " << destination << endl;
        fflush(stdin);
        cout << "Train Time\t: " << t_time << endl;
        fflush(stdin);
        cout << "----------------------------------------" << endl << endl;
    }

    int getSearchData(int id)
    {
        if (id == t_num)
        {
            cout << "Train Number\t: " << t_num << endl;
            cout << "Train Name\t: " << t_name << endl;
            cout << "Source\t\t: " << sourse << endl;
            cout << "Destination\t: " << destination << endl;
            cout << "Train Time\t: " << t_time << endl;
            cout << "----------------------------------------" << endl << endl;
            return 0;
        }
        else
        {
            return 1;
        }
    }

    void getn(int n){
        cout << "Enter Number Of Train : ";
        cin >> n;
    }

    void data(int n)
    {
        Railreservation r[n];
        for (int i = 0; i < n; i++)
        {
            r[i].setdata();
        }
        for (int i = 0; i < n; i++)
        {
            r[i].getdata();
        }
        logic(n,r);
    }

    void logic(int n, Railreservation r[]){
    
        int val;
        double t_num2;
        cout << "Enter Train Number : ";
        cin >> t_num2;
        for (int i = 0; i < n; i++)
        {
            val = r[i].getSearchData(t_num2);
            if (val == 0){
                break;
            }
        }
        if (val == 1)
            cout << "No data match" << endl << endl;
    }
} Rail;

int main()
{
    int n;
    // cout << "Enter Number Of Train : ";
    // cin >> n;
    Rail r1;
    r1.getn(n);
    r1.data(n);
    return 0;
}
