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
#define INIT_2D_VEC(r, c, v, vec) vector<vi> vec(r, vi(c, v));
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

INIT_2D_VEC(104, 104, -1, mem);
string s, t;
int solve(int sI, int tI)
{
    if (sI >= s.size() || tI >= t.size())
        return "";
    if (mem[sI][tI] != -1)
        return mem[sI][tI];
    int ans = 0;
    if (s[sI] == t[tI])
    {
        ans += 1 + solve(sI + 1, tI + 1);
    }
    else
    {
        ans += solve(sI, tI + 1);
        ans += solve(sI + 1, tI);
        }
    }
    return 
}

int main()
{
    // Need to optimize ................ eeeeeeeeeeeeeeeeeeeeeeeeee :-( //
    IOS;
    int tc, i = 1;
    cin >> tc;
    while (tc--)
    {
        // memset(mem, '-', sizeof(mem));
        cin >> s >> t;
        string ans = solve(0, 0);
        cout << "Case " << i++ << ": ";
        if (ans.size() > 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ":(" << endl;
        }
        fill(std::begin(mem), std::end(mem), vs(100, ""));
    }
    return 0;
}