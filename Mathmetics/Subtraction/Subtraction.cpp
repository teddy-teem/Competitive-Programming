#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
// #define RS(a,n) ((a>>n)&1) //Right bit Shift
// #define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) // Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
    for (int i = 0; i < x.size(); i++) \
        a += x[i] + '0';

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

string ans,m;

bool isSmall(string s, string t){
    if(s.size()<t.size()) return 1;
    else if(s.size()>t.size()) return 0;
    else{
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]>t[i]) return 0;
            if(s[i]<t[i]) return 1;
        }
        return 0;
    }
}

string sub(string s, string t){
    if(isSmall(s,t)) swap(s,t);
    int n=t.size();
    for(int i=n; i<s.size(); i++)
        m+=('0');
    m+=t;
    t=m;
    vector<int> v,w,x;
    STRING_TO_INT(v,s);
    STRING_TO_INT(w,t);

    int j=w.size()-1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]>=w[j])
            x.PB(v[i]-w[j--]);
        else{
            x.PB(v[i]+10-w[j--]);
            w[j]+=1;
        }
    }
    INT_TO_STRING(ans,x);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string a, b;
    cin>>a>>b;
    cout<<sub(a,b)<<endl;
    return 0;
}