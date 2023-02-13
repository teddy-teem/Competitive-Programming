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
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

vector<ull> v, prm;
bool ch[2000000]; /// 10^6

void sieve()
{
    for (int i = 3; i * i <= 2000000; i += 2)
    {
        if (ch[i] == 0)
        {
            for (int j = i * i; j <= 2000000; j += i)
            {
                ch[j] = 1;
            }
        }
    }
    v.PB(2);
    for (int i = 3; i < 2000000; i += 2)
    {
        if (ch[i] == 0)
            v.PB(i);
    }
}

map<ull, ull> PrmFact(ull n)
{
    map<ull, ull> m;
    ull i = 0;
    while (v[i] * v[i] <= n)
    {
        if (n % v[i] == 0)
        {
            n /= v[i];
            m[v[i]]++;
        }
        else
        {
            i++;
        }
    }
    m[n]++;
    return m;
}

int main()
{
    // IOS;
    sieve();
    int t, cNo = 1;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        map<ull, ull> m;
        m = PrmFact(n);
        ull ans = 1;
        for (auto i : m)
        {
            ans *= (i.second + 1);
        }
        cout << "Case " << (cNo++) << ": " << (ans - 1) << endl;
    }
    return 0;
}