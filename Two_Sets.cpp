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

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n;
    if((n%2 == 0 || ((n - 3) % 4 != 0)) and n%4 != 0){
        cout << "NO" << endl;
    }    
    else{
        vector<int>set1, set2;
        bool flag = false;
        if(n%4!=0){
            set1.push_back(1);set1.push_back(2);set2.push_back(3);
            for(int i = 3, j = n-1; i <= n/2 + 1 ; i++, j--){
                if(not flag){
                    set1.push_back(i+1);set1.push_back(j+1);
                    flag = true;
                }
                else{
                    set2.push_back(i+1);set2.push_back(j+1);
                    flag = false;
                }
            }
        }else{
            for(int i = 0, j = n-1 ; i < n/2 ; i++, j--){
                if(not flag){
                    set1.push_back(i+1);set1.push_back(j+1);
                    flag = true;
                }
                else{
                    set2.push_back(i+1);set2.push_back(j+1);
                    flag = false;
                }
            }
        }
        
        cout << "YES" << endl;
        cout << set1.size() << endl; 
        for(int it : set1){
            cout << it << " ";
        }
        cout << endl;
    
        cout << set2.size() << endl; 
        for(int it : set2){
            cout << it << " ";
        }
        cout << endl;
    }
    
}


int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

