#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
// #define RS(a, n) ((a >> n) & 1)            // Right bit Shift fixme
// #define LS(a, n) ((a << n) & 1)            // Left bit shift fixme
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) 
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

bool check(ull n, int pos) { return (bool)(n & (1 << pos)); }
ull Set(ull N,int pos){	return N= N | (1<<pos);}
ull status[2000/32];
ull status2[2000/32];
void sieve(int n) {
  cout<<"2 ";
  for (int i = 3; i * i <= n; i += 2) {
    if (check(status[i / 32], i % 32) == 0) {
      for(int j=i*i; j<=n; j+=2*i) {
        status[j/32] = Set(status[j/32], j%32);
        // status[j/32] = status2[j/32];
      }
    }
  }
  for (int i = 3; i <= n; i += 2)
    if (check(status[i / 32], i % 32) == 0)
      printf("%d ", i);
}

int main() {
  // IOS;
  sieve(1002);

  return 0;
}