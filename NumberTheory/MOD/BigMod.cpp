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
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v,s) for(int i=0; i<s.size(); i++) v.PB(s[i]-'0');
#define INT_TO_STRING(a,x) for(int i=0; i<x.size(); i++) a+=x[i]+'0';
#define GCD(m,n)  __gcd(m,n)

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

ll bigMod(ll b, ll pw, ll M){ //b=base pw=power M=mod
    if(pw==0)
        return 1;
    if(pw%2==0){
        ll val=bigMod(b,pw/2,M);
        return (val*val)%M;
    }
    else{
        ll x, y;
        x=b%M;
        y=bigMod(b,pw-1,M);
        return (x*y)%M;
    }
}

int main() {
  IOS;
  cout<<bigMod(100000,100000,15)<<endl; //100000^100000%15
  return 0;
}