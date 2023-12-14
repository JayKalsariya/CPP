#include <iostream>
#include <string>
using namespace std;

class Hoteldata
{
    public:
        int n, id, rating, staffqut, roomqut;
        static int year;
        char name[20], type[10];
        static char location[10];

    void setdata(){
        cout << "ID\t: ";
        cin >> this->id;
    fflush(stdin);
        cout << "NAME\t: ";
        gets(this->name);
        cout << "TYPE\t: ";
        gets(this->type);
        cout << "STAFF QUT.\t: ";
        cin >> this->staffqut;
        cout << "ROOM QUT.\t: ";
        cin >> this->roomqut;
    }

    void getdata(){
        cout << "\t " << this->id << "     " << this->name << "     " << this->type << "     " << this->staffqut << "     " << this->roomqut << "     " << this->location << endl;
    }

    static void Format(){
        cout << "\t-------------------------------------------------------------------------" << endl
             << "\t ID     NAME         TYPE     YEAR     STAFF QUT.     ROOM QUT.     LOCATION" << endl
             << "\t-------------------------------------------------------------------------" << endl;
    }
};

int Hoteldata::year = 2023;
char Hoteldata::location[10] = "Surat";

int main(int n)
{
    Hoteldata h[n];
    cout << "Enter num of Hotel : ";
    cin >> n;
    for (int i = 0; i < n; i++)
        h[i].setdata();
    Hoteldata::Format();
    for (int i = 0; i < n; i++)
        h[i].getdata();
    return 0;
}
