//Print 1 to 100 without loop, goto, recursive in c++;

#include<iostream>
using namespace std;

int count;

class Demo {
    private: int num=0;
    public: 
        // static int count; // or just a global variable.
        Demo(){
            count++;
            num = count;
        }
        ~Demo() {
            cout<<(num)<<endl;
        }
};

// int Demo::count = 0;

int main(){
    int n;
    cin>>n;
    Demo a[n];
    return 0;
}