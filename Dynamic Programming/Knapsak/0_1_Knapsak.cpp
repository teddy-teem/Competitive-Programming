#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                         \
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
#define STRING_TO_INT(v, s)          \
  for (int i = 0; i < s.size(); i++) \
    v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)          \
  for (int i = 0; i < x.size(); i++) \
    a += x[i] + '0';
#define GCD(m, n) __gcd(m, n)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

vvi mem(4000, vi(4000, -1));

int CAP, n;
int Goods[4000], Price[4000];
int knapsak(int i, int W)
{
  if (i == n)
    return 0;
  if (mem[i][W] != -1)
    return mem[i][W];
  int ans = 0;
  if (W + Goods[i] <= CAP)
  {
    ans = Price[i] + knapsak(i + 1, W + Goods[i]);
  }
  ans = max(ans, knapsak(i + 1, W));
  mem[i][W] = ans;
  return ans;
}

int main()
{
  IOS;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> Price[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> Goods[i];
  }
  cin>>CAP;
  cout<<knapsak(0,0)<<endl;
  return 0;
}
