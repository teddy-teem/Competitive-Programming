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
#define PRINT_2D(r, c, v)           \
    for (int i = 0; i < r; i++)     \
    {                               \
        for (int j = 0; j < c; j++) \
            cout << v[i][j] << " "; \
        cout << endl;               \
    }
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
#define INIT_2D_VEC(r, c, v, vec) vec2d vec(r, vi(c, v));
#define INIT_VEC(n, v, vec) vi vec(n, v)

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

vi steps;
INIT_VEC(100010, -1, mem);

int jump(int n, int k)
{
    if (n >= steps.size() - 1)
        return 0;
    if (mem[n] != -1)
        return mem[n];
    int ans1 = abs(steps[n] - steps[n + 1]) + jump(n + 1, k);
    int ans2 = INT_MAX;
    for (int i=1; i <=k; i++)
    {
        if (n+i <= steps.size()-1)
        {
            ans2 = min(ans2, abs(steps[n] - steps[n + i]) + jump(n + i, k));
        }
    }
    mem[n] = min(ans1, ans2);
    return mem[n];
}

int main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        steps.PB(a);
    }
    cout << jump(0, k) << endl;
    return 0;
}