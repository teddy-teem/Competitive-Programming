#include<bits/stdc++.h>
#define F_READ   freopen("input.txt", "r", stdin);
#define F_WRITE   freopen("output.txt", "w", stdout);
#define IOS   ios_base::sync_with_stdio(false); cin.tie(NULL)
#define PB   push_back
#define F   first
#define S   second
#define REP(i,a,b)   for(int i=a; i<=b; i++)
#define I_REP(i,a,b)   for(int i=a; i>=b; i--)
#define ISEVEN(a) (a&1?0:1)
//#define RS(a,n) ((a>>n)&1) //Right bit Shift
//#define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) //Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define INF 10000000
using namespace std; 

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef pair<string,int> psi;
typedef map<int,int> mii;
vi v;
// vi 
int ans=0;
int solve(int i, int w) {
  if(i>v.size()) return INF;
  if(w<0) return INF;
  if (w == 0)
  {
    return 0;
  };
  ans = min(solve(i + 1, w), 1 + solve(i + 1, w - v[i]));
  return ans;
}

int main() {
  IOS;
  int n, W;
  cin>>n>>W;
  for(int i=0; i<n; i++) {
    int a ;
    cin>>a;
    v.PB(a);
  }
  int ans = solve(0, W);
  cout<<ans<<endl;
  return 0;
}