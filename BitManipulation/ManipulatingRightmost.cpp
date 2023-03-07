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
#define PRINT_2D(r, c, v) \
  for(int i = 0; i < r; i++)    \
  {                             \
    for (int j = 0; j < c; j++) \
      cout << v[i][j] << " ";   \
    cout << endl;               \
  }
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
#define INIT_2D_VEC(r,c,v, vec) vec2d vec(r, vi(c, v));
#define INIT_VEC(n,v, vec) vi vec(n ,v);

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
typedef hash<string> stringHash; 

inline void printBit(int n) {
    for(int i=7; i>=0; i--) {
        n&(1<<i)?cout<<1:cout<<0;
    }
    cout<<endl;
}

int main()
{
  IOS;
  int x=11;
  cout<<"x: ";
  printBit(x);

  int turnOffRightMostOne=x&(x-1);
  cout<<"Off Right Most One: ";
  printBit(turnOffRightMostOne);

  int turnOnRightMostZero=x|(x+1);
  cout<<"On Right Most Zero: ";
  printBit(turnOnRightMostZero);

  int turnOffTrailingOnes = x&(x+1);
  cout<<"Off Trailing Ones: ";
  printBit(turnOffTrailingOnes);

  int turnOnTrailingZeros = x|(x-1);
  cout<<"On Trailing Zeros: ";
  printBit(turnOnTrailingZeros);

  int wordWithSingleOneInRightMostZero = ~x&(x+1); //  create a word with a single 1-bit at the position of the rightmost 0-bit in x, producing 0 if none
  cout<<"A Word With Single One In Right Most Zero: ";
  printBit(wordWithSingleOneInRightMostZero);

  int wordWithSingleZeroInRightMostOne = ~x|(x-1); //  create a word with a single 0-bit at the position of the rightmost 1- it in x, producing all 1’s if none
  cout<<"A Word With Single Zero In Right Most One: ";
  printBit(wordWithSingleZeroInRightMostOne);




  return 0;
}