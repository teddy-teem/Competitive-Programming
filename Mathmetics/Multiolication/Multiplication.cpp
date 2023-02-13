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

string add(string s, string t)
{
    int cr = 0, j;
    string ans;
    vector<int> v, w, x;
    STRING_TO_INT(v, s);
    STRING_TO_INT(w, t);
    if (v.size() < w.size())
        swap(v, w);
    j = w.size() - 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (j != -1)
            cr += v[i] + w[j--];
        else
            cr += v[i];
        x.PB(cr % 10);
        cr /= 10;
    }
    if (cr != 0)
        x.PB(cr);
    INT_TO_STRING(ans, x);
    reverse(ans.begin(), ans.end());
    return ans;
}
string mul(string s, string t)
{
    string result = "0", a;
    int sm = t.size(), big = s.size(), cr = 0;
    if (big < sm)
    {
        swap(big, sm);
        swap(s, t);
    }

    vector<int> v, w, x;
    STRING_TO_INT(v, s);
    STRING_TO_INT(w, t);
    int l = 0;
    for (int i = sm - 1; i >= 0; i--)
    {
        for (int j = big - 1; j >= 0; j--)
        {
            cr += v[j] * w[i];
            x.PB(cr % 10);
            cr /= 10;
        }
        if (cr != 0)
            x.PB(cr);
        reverse(x.begin(), x.end());
        INT_TO_STRING(a, x);
        x.clear();
        string tm;
        for (int k = 0; k < l; k++)
            a += '0';
        result = add(a, result);
        a.clear();
        l++;
    }
    return result;
}
int main()
{
    cout << "\n"
         << mul("5", "5") << endl;
    cout << mul("10", "11") << endl;
}