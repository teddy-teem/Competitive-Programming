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

vi v;
vi mem(1000, -1);
vi next_pointer(1000, -1);
void printV(vi vec, int n = -1)
{
    int size = n!=-1 ? n : vec.size();
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int findLis(int i) {
    if(mem[i]!=-1) return mem[i];
    int ans=0;
    REP(j, i+1, v.size()) {
        if(v[i]<v[j]){
            int subResult =  findLis(j);
            if(subResult > ans) {
                ans=subResult;
                next_pointer[i]=j;
            }
        }
    }
    mem[i]=ans+1;
    return mem[i];
}


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans =0;
    REP(i, 0, n-1) {
        ans=max(ans, findLis(i));
    }
    cout<<"LIS Length: "<<ans<<"\n";
    next_pointer[0]=-1;
    cout<<"LIS Path:\n";
    REP(i, 0, n-1) {
        if(next_pointer[i]!=-1) {
            cout<<i<<" - "<<next_pointer[i]<<endl;
        }
    }
    // printV(next_pointer, n);
    return 0;
}