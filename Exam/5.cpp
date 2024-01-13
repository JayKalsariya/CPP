#include <iostream>
#include <string>
using namespace std;

class Hoteldata
{
    public:
        int id, rating;
        char name[20], type[10], location[10];

    void setdata(){
        cout << "NUMBER\t: ";
        cin >> this->id;
    fflush(stdin);
        cout << "NAME\t: ";
        gets(this->name);
        cout << "LOCATION\t: ";
        gets(this->location);
        cout << "TYPE\t: ";
        gets(this->type);
        cout << "RATING\t: ";
        cin >> this->rating;
        cout << endl;
    }

    void getdata(){
        cout << "Number\t: " << this->id << endl
			<< "Name\t: " << this->name << endl
			<< "Type\t: " << this->type << endl
			<< "Location: " << this->location << endl
			<< "Rating\t: " << this->rating << endl << endl;
    }
};

int main()
{
	int n, i;
	cout << "Enter No. of Hotel : ";
	cin >> n;
    Hoteldata h[n];
    for(i=0; i<n; i++){
    	h[i].setdata();
	}
    for(i=0; i<n; i++){
    	h[i].getdata();
	}
    return 0;
}