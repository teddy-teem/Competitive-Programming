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

int N;
vi price;
INIT_2D_VEC(100, 100, -1, dp);
int topDownApproach(int i, int j, int yr)
{
    if (i > j)
        return 0;
    return max(topDownApproach(i + 1, j, yr + 1) + yr * price[i], topDownApproach(i, j - 1, yr + 1) + yr * price[j]);
}
int optimizedTopDownApproach(int i, int j)
{
    if (i > j)
        return 0;
    int yr = N - (j - i + 1) + 1;
    return max(topDownApproach(i + 1, j, yr + 1) + yr * price[i], topDownApproach(i, j - 1, yr + 1) + yr * price[j]);
}

int main()
{
    // Have wine bottle in a row 1 to N with price[i] for each. each year the price will be increase multiple by year
    //  I can sell one bottle from left or right once in a year. calculate maximum profit I can earn.
    IOS;
    cin >> N;
    price.resize(N);
    REP(i, 0, N - 1)
    {
        cin >> price[i];
    }
    // int ans1 = topDownApproach(0, N - 1, 1);
    // int ans2 = optimizedTopDownApproach(0, N - 1); // year calculation using i, j
    // int ans1;
    // printf("%d\n", ans1);
    // printf("%d", ans2);

    dp[0][0] = 0;
    dp[1][0] = 1 * price[1];
    dp[0][1] = 1 * price[N - 1];
    ;
    int ans3 = 0;
    REP(i, 1, N)
    {

        int yr = 1;
        I_REP(j, N, 0)
        {
            ans3 = max(ans3, dp[i - 1][j] + yr * price[i]);
            ans3 = max(ans3, dp[i][j + 1] + yr * price[j]);
            dp[i][j] = ans3;
            // cout<<ans3<<" "<<i<<" "<<j<<endl;
        }
    }
    REP(i, 0, N - 1)
    {
        REP(j, 0, N - 1)
        {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }
    return 0;
}