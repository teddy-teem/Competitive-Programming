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
#define INIT_VEC(n, v, vec) vi vec(n, v);

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

vi a, b, c;
INIT_2D_VEC(25, 4, -1, mem);
int N, cnt = 0;
int solve(int n, int taken)
{
    if (n >= N)
        return 0;
    if (mem[n][taken] != -1)
        return mem[n][taken];
    int ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX;
    if (taken == 1)
    {
        ans1 = min(b[n] + solve(n + 1, 2), c[n] + solve(n + 1, 3));
    }
    if (taken == 2)
    {
        ans2 = min(a[n] + solve(n + 1, 1), c[n] + solve(n + 1, 3));
    }
    if (taken == 3)
    {
        ans3 = min(b[n] + solve(n + 1, 2), a[n] + solve(n + 1, 1));
    }
    mem[n][taken] = min(ans1, min(ans2, ans3));
    return mem[n][taken];
}

int main()
{
    IOS;
    int t, cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> N;
        a.resize(N);
        b.resize(N);
        c.resize(N);
        REP(i, 0, N - 1)
        {
            cin >> a[i];
            cin >> b[i];
            cin >> c[i];
        }
        mem[0][1] = a[0];
        mem[0][2] = b[0];
        mem[0][3] = c[0];
        int x = a[0] + solve(1, 1);
        int y = b[0] + solve(1, 2);
        int z = c[0] + solve(1, 3);
        cout << "Case " << cnt++ << ": " << min(x, min(y, z)) << endl;
        fill(mem.begin(), mem.end(), vector<int>(25, -1));
    }
    return 0;
}