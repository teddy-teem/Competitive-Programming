//Print 1 to 100 without loop, goto, recursive in c++;

#include<iostream>
using namespace std;

int count;

class DemoClass {
    private: int IamNotAccessableOutside=100;
    public: 
        int IamAccessableOutside;
        DemoClass(){ //Constructor
            IamAccessableOutside = IamNotAccessableOutside;
        };
        ~DemoClass(){ //destructor
            IamAccessableOutside = 10;
            cout<<"Memory Cleared\n"<<endl;
        };
};


int main(){
    DemoClass a;
    cout<<a.IamAccessableOutside<<endl;
    return 0;
}