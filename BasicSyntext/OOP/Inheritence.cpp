//Print 1 to 100 without loop, goto, recursive in c++;

#include<iostream>
using namespace std;

int count;

class Math {
    private: int IamNotAccessableOutside=100;
    public: 
        int IamAccessableOutside;
        Math(){ };
        ~Math(){};
        int sum(int a, int b) {
            return a+b;
        };
        double multiply(double a, double b){
            return a*b;
        }
        int sub(int a, int b){
            return a-b;
        }
        int sqr(int a){
            return a*a;
        }
        
};

class Area: private Math {  // private make all resource private for Area of Math excpet private properties of Math, 
                            // those will be still not accessable., 
    public:
        Area(){};
        ~Area(){};
        double circle(int r) {
            return multiply(3.1416, (double)r*r);
        }
};

int main(){
    Area a;
    cout<<a.circle(10)<<endl;
    return 0;
}