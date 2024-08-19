#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
#define endl "\n"
typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

class TrieNode{

public:
    bool finPalabra;
    TrieNode *child[26];
    
    TrieNode(){
        finPalabra = false;
        for(int i = 0 ; i < 26 ; i ++){
            child[i] = nullptr;
        }    
    }    
};
class Trie{

private:
    TrieNode *raiz; 
public:
    Trie(){
        raiz = new TrieNode();
    }
    void insertar(string &s){
        TrieNode *p;
        p = raiz;
        for(auto c : s){
            if(p->child[c-'a'] == nullptr){
                p->child[c-'a'] = new TrieNode();
            }
            p = p->child[c - 'a'];
        }
        p->finPalabra = true;
    }
    bool search(string &s){
        TrieNode *p;
        p = raiz;
        for(auto c : s){
            if(p->child[c-'a'] == nullptr){
                return false;
            }
            p = p->child[c - 'a'];
        }
        return p->finPalabra;
    }
};
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

