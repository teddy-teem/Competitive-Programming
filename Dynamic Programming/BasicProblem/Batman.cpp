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

// INIT_2D_VEC(60, 60, -1, mem);
string s1, s2, s3;
int mem[55][55][55];
int solve(int i, int j, int k)
{
    if (i >= s1.size() || j >= s2.size() || k>=s3.size())
        return 0;
    if (mem[i][j][k] != -1)
        return mem[i][j][k];
    int ans = 0;
    if (s1[i] == s2[j] && s1[i] == s3[k])
    {
        ans = 1 + solve(i + 1, j + 1, k + 1);
    }
    else
    {
        ans = max(solve(i + 1, j, k), max(solve(i, j + 1, k), solve(i, j, k + 1)));
    }
    return mem[i][j][k] = ans;
}

int main()
{
    IOS;
    int t, tc = 1;
    cin >> t;
    while (t--)
    {
        memset(mem, -1, sizeof(mem));
        cin >> s1 >> s2 >> s3;
        cout << "Case " << tc++ << ": " << solve(0, 0,0) << endl;
    }
    return 0;
}