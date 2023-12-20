#include<iostream>
#include<string>
using namespace std;

class Bill{
    public:
        int n, i_num, i_qut, i_price;
        double dis;
        char i_name[30], username[30], username1[30], psw[30], psw2[30];

    void signup(){
        cout << endl << "----------SIGNUP----------" << endl;
        cout << "USERNAME\t: "; gets(username);
        cout << "PASSWORD\t: "; gets(psw);
    }

    void setdata(){
        cout << "Item Number\t: "; cin >> i_num;
        fflush(stdin);
        cout << "Item Name\t: "; gets(i_name);
        cout << "Item Quantity\t: "; cin >> i_qut;
        cout << "Item Price\t: "; cin >> i_price;
        cout << "Item Discount\t: "; cin >> dis;
        cout << endl << "-------------------------------------" << endl;
    }

    void getdata(){
        cout << "Item Number\t: " << i_num << endl;
        cout << "Item Name\t: " << i_name << endl;
        cout << "Item Quantity\t: " << i_qut << endl;
        cout << "Item Price\t: " << i_price << endl;
        cout << "Item Discount\t: " << dis << endl;
        cout << endl << "-------------------------------------" << endl;

    };

    void login(){
        cout << endl << "----------LOGIN----------" << endl;
        cout << "USERNAME\t: "; gets(username1);
        cout << "PASSWORD\t: "; gets(psw2);
    }
};

int main()
{
    int n, i_num2;
    double bill=0;
    Bill b[n];
    b[0].signup();
    cout << "Enter Number Of Item : "; cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        b[i].setdata();
        bill += ((b[i].i_qut * b[i].i_price) - ( (b[i].i_qut * b[i].i_price) * (b[i].dis/100) ) );
    }
    for (int i = 0; i < n; i++)
    {
        b[i].getdata();
    }
    cout << endl << "Total Bill\t: " << bill << endl;
    // system("cls");
    b[0].login();
    for (int i = 0; i < n; i++)
    {
        if (b[i].username == b[i].username1 && b[i].psw == b[i].psw2)
        {
            cout << "Enter Item Number : "; cin >> i_num2;
            if (b[i].i_num == i_num2)
            {
                b[i].getdata();
            }
            else{
                cout << endl << "INVALID" << endl;
            }
        }
    }
    
    
    return 0;
}
