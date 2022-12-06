
#include<bits/stdc++.h>
#define F_READ   freopen("input.txt", "r", stdin);
#define F_WRITE   freopen("output.txt", "w", stdout);
#define IOS   ios_base::sync_with_stdio(false); cin.tie(NULL)
#define PB   push_back
#define F   first
#define S   second
#define REP(i,a,b)   for(int i=a; i<=b; i++)
#define I_REP(i,a,b)   for(int i=a; i>=b; i--)
#define ISEVEN(a) (a&1?0:1)
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) //Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

using namespace std; 

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef pair<string,int> psi;
typedef map<int,int> mii;


//Write a recursive program to remove all odd integers from an array. 
//You must not use any extra array or print anything in the function. 
//Just read input, call the recursive function, then print the array in main().


void fun (int *a , int *n, int i, int j) {
    if(i==*n) {
        *n=j;
        return;
    };
    if(ISEVEN(a[i])==1) {
        a[j++]=a[i];
    }
    fun(a, n, i+1, j);
}
int main() {

    int n, a[10000];
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"Before: ";
    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\nAfter: ";
    fun(a, &n, 0, 0);
    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}