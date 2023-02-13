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

vector<int> v,prm;
bool ch[1000000];  ///10^6
map<int, int> m;
void sieve(){
    for(int i=3; i*i<=1000000; i+=2){
        if(ch[i]==0){
            for(int j=i*i; j<=1000000; j+=i){
                ch[j]=1;
            }
        }
    }
    v.PB(2);
    for(int i=3; i<1000000; i+=2){
        if(ch[i]==0)
            v.PB(i);
    }
}

void PrmFact(int n){
    int i=0;
    while(v[i]*v[i]<=n){
        if(n%v[i]==0){
            n/=v[i];
            m[v[i]]++;
        }
        else{
            i++;
        }
    }
    m[n]++;

}

int main() {
  IOS;
  sieve();
    PrmFact(10254785);
    for(auto i:m)
        cout<<i.first<<"^"<<i.second<<endl;
  return 0;
}