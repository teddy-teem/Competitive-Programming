//Print 1 to 100 without loop, goto, recursive in c++;

#include<iostream>
using namespace std;

int count;

class Math {
    private: int IamNotAccessableOutside=100;
    public: 
        int IamAccessableOutside;
        Math(){ //Constructor
            IamAccessableOutside = IamNotAccessableOutside;
        };
        ~Math(){ //Destructor
            cout<<"Memory Cleared\n"<<endl;
        };
        int sum(int a, int b) {
            return a+b;
        };
        int multiply(int a, int b){
            return a*b;
        }
        int sub(int a, int b){
            return a-b;
        }
        int sqr(int a){
            return a*a;
        }
        
};


int main(){
    Math a;
    cout<<a.sum(10,20)<<endl;
    return 0;
}