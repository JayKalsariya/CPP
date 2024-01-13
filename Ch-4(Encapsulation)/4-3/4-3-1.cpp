#include<iostream>
#include<string>
using namespace std;

typedef class Diamondcompanies{
    public:
        int id, staffqut;
        char name[20], ceo[20];
        double revenue, imp_row_dia, exp_row_dia;
    Diamondcompanies(char name[20], int id){
            this->id = id;
            this->name[20] = name[20];

            cout << "ID : " << this->id << endl
                 << "NAME : " << this->name << endl;
    }
} Dia;

int main(int id, char name[20])
{
    int n;
    
    cout << "Enter num of Company : "; cin >> n;
    fflush(stdin);
    cout << "Enter Id : " ; cin >> id; 
    fflush(stdin);
    cout << "Enter Company name : "; gets(name);
    Dia d(name, id);
    
    return 0;
}

