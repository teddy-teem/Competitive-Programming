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
#define PRINT_2D(array, row, col) \
  for (int i = 0; i < row; i++)   \
  {                               \
    for (int j = 0; j < col; j++) \
      cout << array[i][j] << " "; \
    cout << endl;                 \
  }
#define PRINT_ARRAY(arr, size)   \
  for (int i = 0; i < size; i++) \
    cout << arr[i] << " ";
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
vector<vector<int>> mem(10, vector<int>(7500, -1));

int Max = 7489;
int makeValue;
vi coins, maxUse;

int coinChange(int i, int amount)
{
  if (i >= coins.size())
  {
    return amount == 0 ? 1 : 0;
  }
  if (mem[i][amount] != -1)
    return mem[i][amount];
  int res1 = 0, res2 = 0;
  REP(j, 0, maxUse[i])
  {
    if (amount - coins[i] >= 0)
    {

      res1 = coinChange(i, amount - coins[i]);
    }
    res2 = coinChange(i + 1, amount);
  }
  mem[i][amount] = res1 + res2;
  return mem[i][amount];
}

int main()
{
  IOS;
  int n;
  cin >> n;
  while (n--)
  {
    int a, value;
    vi tmp;
    cin >> a >> value;
    REP(i, 0, 2*a)
    {
      int b;
      cin >> b;
      tmp.PB(b);
    }
    REP(i, 0, a)
    {
      coins.PB(tmp[i]);
    }
    REP(i, a, 2*a)
    {
      maxUse.PB(tmp[i]);
    }
    cout << coinChange(0, value)<< endl;
    // PRINT_ARRAY(maxUse, a);
    // PRINT_ARRAY(coins, a);
  //  PRINT_2D(mem, 5, 5);
    fill(mem.begin(), mem.end(), vector<int>(1005, -1));
    coins.clear();
    maxUse.clear();
  }
  return 0;
}