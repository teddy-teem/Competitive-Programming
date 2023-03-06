#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
int c = 0;

void print(vector<int> a) {
c++;
    for(int i=0; i<=2; i++) {
        cout<<a[i]<< " ";
    }
    cout<<endl;

}

vector<int> pos;
bitset<100> taken;

void generate(int idx) {
    if(idx==4) {
        print(pos);
        return ;
    }
    for(int i=0; i<4; i++) {
        if(taken[i]==false) {
            taken[i]=true;
            pos[idx]=i;
            generate(idx+1);
            taken[i]=false;
        }
    }
}

int main()
{
    vector<int> a = {0,1,2,3};
    pos=a;
    generate(0);
    cout<<c<<endl;
    return 0;
}
