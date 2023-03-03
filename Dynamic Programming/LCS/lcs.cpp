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

string s1, s2;
vector<vi> mem(3000, vi(3000, -1));

int LCS (int i=0, int j=0) {
    if(i==s1.size() || j==s2.size()) return 0;
    if(mem[i][j] != -1) return mem[i][j];
    int ans=0;
    if(s1[i]==s2[j]) {
        ans = 1 + LCS(i+1, j+1);
    } else {
        int v1 = LCS(i, j+1);
        int v2 = LCS(i+1, j);
        ans = max(v1, v2);
    }
    mem[i][j]=ans;
    return mem[i][j];
}
 
int main() {
  IOS;
  cin>>s1>>s2;
  int a = LCS(0, 0);
  int s1_size = s1.size();
  int s2_size = s2.size();
  int ans = max(s1_size, s2_size) - min(s1_size, s2_size);
  ans = ans+(max(s1_size, s2_size)-a);
  cout<<ans<<endl;
  return 0;
}