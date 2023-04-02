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
// #define RS(a,n) ((a>>n)&1) //Right bit Shift
// #define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) // Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define INF 10000000
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
vector<vector<ll>> mem(10, vector<ll>(7500, -1));

ll Max = 7489;
ll makeValue;
ll coins[5] = {50, 25, 10, 5, 1};
ll limits[5] = {5, 2, 1, 2, 9};

ll coinChange(int i, ll amount)
{
  if (i >= 5)
  {
    if(amount == 0) {
          return 1;
    }
    return 0;
  }
  if (mem[i][amount] != -1)
    return mem[i][amount];
  int res = 0;
  for (int j = 0; j <= limits[i]; j++)
  {
    if (amount - (coins[i]*j) >= 0)
    {
      res += coinChange(i+1, amount - (coins[i]*j));
    }
  }
  return mem[i][amount]=res;
}

int main()
{
  IOS;
  // Answer could be very large ... 
  while (cin >> makeValue)
  {
    cout << coinChange(0, makeValue) << endl;
    fill(mem.begin(), mem.end(), vector<ll>(7500, -1));
  }
  return 0;
}