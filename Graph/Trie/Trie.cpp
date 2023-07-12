#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ISEVEN(a) (a & 1 ? 0 : 1)
#define PRINT_2D(r, c, v)           \
    for (int i = 0; i < r; i++)     \
    {                               \
        for (int j = 0; j < c; j++) \
            cout << v[i][j] << " "; \
        cout << endl;               \
    }
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
    for (int i = 0; i < x.size(); i++) \
        a += x[i] + '0';
#define GCD(m, n) __gcd(m, n)
#define INIT_2D_VEC(r, c, v, vec) vec2d vec(r, vi(c, v));
#define INIT_VEC(n, v, vec) vi vec(n, v);
#define newLine cout << "\n";

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


struct TrieNode
{
    TrieNode *node[26];
    bool endOfWord=false;
};

TrieNode* insert(TrieNode* root, char c, bool endOfWord=false) {
        TrieNode *b = new TrieNode();
        if(root->node[(int)c-(int)'a']) {
            root->endOfWord = endOfWord;
            return root->node[(int)c-(int)'a'];
        }
        root->node[(int)c-(int)'a']=b;
        root->endOfWord = endOfWord;
        return root->node[(int)c-(int)'a'];
}

bool isExists(TrieNode* root, string word){
    TrieNode* tmp = root;
    for(int i=0; i<word.size(); i++) {
        if(tmp->node[(int)(word[i]-'a')]==NULL) {
            return false;
        }
        if(tmp->endOfWord && i==word.size()-1) return true;
        tmp=tmp->node[(int)(word[i]-'a')];
    }
    return false;
}


int main()
{

    IOS;
    vector<string> v={"jahid", "hasan", "apple", "app", "a"};
    string s = "jahid";
    string t = "nahid";
    TrieNode *a = new TrieNode();
    TrieNode *ans;

    for(auto s:v) {
        for(int i=0; i<s.size(); i++) {
            if(i==0 && i!=s.size()-1) {
                ans = insert(a, s[i]);
            } else {
                if(i==0){
                    ans = insert(a, s[i], true);
                }
                else if(i==s.size()-1) {
                    ans = insert(ans, s[i], true);
                } else {
                    ans = insert(ans, s[i]);
                }
            }
            
        }
    }
    string find;
    cin>>find;

    cout<<find<<" is "<<(isExists(a, find)? "*Found*": "Not Found")<<" in the list."<<endl;
    
    return 0;
}
