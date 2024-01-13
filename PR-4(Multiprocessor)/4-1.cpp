#include<iostream>
using namespace std;

class Message{
    private:
        string first = "Hello";
        string third;
    public:
    Message(string first1){
        first = first1;
    }
    void Print(){
        cout << endl << first << endl;
    }
    void Print(string sec){
        third = first + " " + sec;
        cout << third;
    }
};

int main()
{
    char first1[20], sec[20];
    cout << "Enter any name : "; gets(first1);
    Message m(first1);
    m.Print();
    cout << "Enter 2nd string : "; gets(sec);
    m.Print(sec);
    return 0;
}