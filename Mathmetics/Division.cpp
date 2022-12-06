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
#define STRING_TO_INT(v,s) for(int i=0; i<s.size(); i++) v.PB(s[i]-'0');
#define INT_TO_STRING(a,x) for(int i=0; i<x.size(); i++) a+=x[i]+'0';

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

string ans;
ll temp;
string divide(string s, ll n){
    temp=s[0]-'0';
    ll i=0;
    while(temp<n){
        temp=(temp*10)+(s[++i]-'0');
    }
    while(i<s.size()){
         ans += (temp / n) + '0'; ;
         temp = (temp % n) * 10 + s[++i] - '0';
    }
    if(ans.size()==0)
        return "0";
    return ans;
}
int main(){
    cout<<divide("102", 5)<<endl;
}