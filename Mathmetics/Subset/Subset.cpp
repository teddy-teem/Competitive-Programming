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

int main()
{
    vi v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int n = v.size();
    int x = (1 << n);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if ((1 << j) & i)
            {
                cout << v[j];
            }
        }
        cout << endl;
    }
    return 0;
}