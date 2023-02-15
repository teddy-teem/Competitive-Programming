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
vec2d MatMultiplication(vec2d a, vec2d b)
{
    if (a[0].size() != b.size())
    {
        vec2d v;
        return v;
    }
    vec2d ans;
    for (int i = 0; i < a.size(); i++)
    {
        vi v;
        for (int j = 0; j < b[0].size(); j++)
        {
            int d = 0;
            for (int k = 0; k < a[0].size(); k++)
            {
                d += a[i][k] * b[k][j];
            }
            v.PB(d);
        }
        ans.PB(v);
        v.clear();
    }
    return ans;
}

vec2d MatExpo(vec2d a, ull n)
{
    if (n == 2)
        return MatMultiplication(a, a);
    else if (n % 2 == 1)
        return MatMultiplication(a, MatExpo(a, n - 1));
    return MatMultiplication(MatExpo(a, n / 2), MatExpo(a, n / 2));
}

int main()
{
    IOS;
    vec2d a{{1, 1},
            {1, 0}};
    vec2d ans = MatExpo(a, 30);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}