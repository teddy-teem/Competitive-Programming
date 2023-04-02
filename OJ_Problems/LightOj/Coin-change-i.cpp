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
#define newLine cout << "\n";

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
int N, K;
vi coins, limits;
int MOD = 100000007;

INIT_2D_VEC(1000, 1000, -1, mem);

int solve(int n, int amount)
{
    if (n >= N)
    {
        if (amount == 0)
            return 1;
        else
            return 0;
    }
    if (mem[n][amount] != -1)
        return mem[n][amount];
    int ans1 = 0;
    REP(i, 0, limits[n])
    {
        if (amount - coins[n] * i >= 0)
        {
            int calcAmount = amount - coins[n] * i;
            ans1 = ((ans1 % MOD) + (solve(n + 1, calcAmount) % MOD)) % MOD;
        }
    }
    return mem[n][amount] = ans1%MOD;
}

int main()
{

    IOS;
    int t, cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> N >> K;
        coins.resize(N);
        limits.resize(N);
        REP(i, 0, N - 1)
        {
            cin >> coins[i];
        }
        REP(i, 0, N - 1)
        {
            cin >> limits[i];
        }
        cout << "Case " << cnt++ << ": " << solve(0, K) << endl;
        fill(mem.begin(), mem.end(), vector<int>(1000, -1));
    }
    return 0;
}
