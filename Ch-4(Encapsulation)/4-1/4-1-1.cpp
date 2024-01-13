#include <iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int s_id;
    char s_name[20], s_course[20], s_city[20], s_email[20], s_collage[20];

public:
    void setdata()
    {
        cout << "Enter your Id : ";
        cin >> s_id;
        fflush(stdin);
        cout << "Enter your Name : ";
        gets(s_name);
        cout << "Enter your Course : ";
        gets(s_course);
        cout << "Enter your City : ";
        gets(s_city);
        cout << "Enter your Email : ";
        gets(s_email);
        cout << "Enter your Collage : ";
        gets(s_collage);

        getdata();
    }

    void getdata()
    {
        cout << endl << "ID\t: " << s_id << endl
             << "NAME\t: " << s_name << endl
             << "COURSE\t: " << s_course << endl
             << "CITY\t: " << s_city << endl
             << "EMAIL\t: " << s_email << endl
             << "COLLAGE\t: " << s_collage << endl << endl;
    }
};

int main()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].setdata();
    }
    
    return 0;
}