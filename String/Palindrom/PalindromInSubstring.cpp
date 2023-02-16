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
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
    for (int i = 0; i < x.size(); i++) \
        a += x[i] + '0';
#define GCD(m, n) __gcd(m, n)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vec2d;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

bool isContain(string s, int l, int r, int ans)
{
    if(s.size()==2){
        if(s[l]==s[r]) return true;
        else return false;
    }
    if (l > r)
        return ans;
    if (r-l==1)
        return ans;
    if (s[l] == s[r])
    {
        ans = isContain(s, l + 1, r - 1, true);
        return ans ||  isContain(s, l + 1, r, 0) ||  isContain(s, l, r - 1, 0);
    }
    return isContain(s, l + 1, r, 0) || isContain(s, l, r - 1, 0);
}

int main()
{
    IOS;
    string s;
    cin >> s;
    int a = isContain(s, 0, s.size() - 1, 0);
    cout << a << endl;
    return 0;
}