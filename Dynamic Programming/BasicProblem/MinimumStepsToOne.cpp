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
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) //Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

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

vi mem(1000, -1);

int toOne(int n) {
  if(n==1) return 0;
  if(mem[n]!=-1) return mem[n];
  int r = 1+toOne(n-1);
  if(n%2==0) r = min(r, 1+toOne(n/2));
  if(n%3==0) r = min(r, 1+toOne(n/3));
  mem[n]=r;
  return mem[n];
}

int main() {
  IOS;
  int n;
  cin>>n;
  cout<<toOne(n)<<endl;

  return 0;
}
