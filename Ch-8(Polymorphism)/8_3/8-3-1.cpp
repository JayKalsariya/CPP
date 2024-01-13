#include<iostream>
#include<string>
using namespace std;

class Result{
    public:
        int sub;
    void setter(){
        cout << "Sci : "; cin >> sub;
    }
    Result operator-(int sub){
            Result tmp;
            tmp.sub = sub - 3;
            return tmp;
    }
    
};

int main()
{
    Result sci, math, eng, guj, ss, com;
    sci.setter();
    math.sub = math.sub - 3;
    cout << math.sub;
    return 0;
}
