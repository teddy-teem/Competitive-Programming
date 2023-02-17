#include <bits/stdc++.h>
using namespace std;
vector<int> v(100, -1);

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    if(v[n]!=-1) return v[n];
    v[n] = fib(n-1)+fib(n-2);
    return v[n];
}
int main() {
    int num;
    v[0]=0;
    v[1]=1;
    cin>>num;
    int c = fib(num);
    for(int i=0; i<num ; i++) {
        cout<<v[i]<<" ";
    }

}