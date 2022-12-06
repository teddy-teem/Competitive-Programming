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
//#define RS(a,n) ((a>>n)&1) //Right bit Shift
//#define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) // Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

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
bool found = false;
char a[100][100];
int n, m;

void dfs(int i, int j)
{
  cout << i << " " << j << " ";
  cout << a[i][j] << "\n";
  if (i >= n || j >= m || i < 0 || j < 0)
    return;
  if (a[i][j] == 'B')
  {
    found = true;
    return;
  }
  else if (a[i][j] == 'X')
    return;
  else
  {
    dfs(i - 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i + 1, j);
  }
}

int main()
{
  IOS;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j];
    }
    cout << endl;
  }
  dfs(0, 0);
  cout << found << endl;

  return 0;
}