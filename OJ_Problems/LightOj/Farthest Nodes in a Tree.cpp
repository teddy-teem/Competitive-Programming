#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ISEVEN(a) (a & 1 ? 0 : 1)
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
    for (int i = 0; i < x.size(); i++) \
        a += x[i] + '0';

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

int visited[10000];
int d[10001][10001];
int dist[10000];

void dfs(int root, vector<vi>& v, int p=0)
{
    if(p) cout<<root<<" ";
    for(auto i:v[root]) {
        dist[i]=dist[root]+d[root][i];
        dfs(i, v);
    } 
}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int node;
        cin >> node;
        vector<vi> v(node); // Alway take 1 extra size else will get runtime error:
        for (int i = 0; i < node-1; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            v[a].push_back(b);
            // v[b].push_back(a);
            d[a][b]=c;
        }
        dfs(0, v, 0);
        int root, mx=0;
        for(int i=0; i<=10000; i++) {
            if(mx<dist[i]){
                mx=dist[i];
                root=i;
            }
        };
        cout<<root<<" hahah ";
        for(int i=0; i<=10000; i++) {
            dist[i]=0;
        }

        dfs(root, v, 1);
        mx=0;
        for(int i=0; i<=10; i++) {
            cout<<dist[i]<<" ";
            if(mx<dist[i]){
                mx=dist[i];
            }
        };
        cout<<mx<<endl;
    }
    
    return 0;
}