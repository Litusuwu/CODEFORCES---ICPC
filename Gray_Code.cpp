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
    vector<string>grey;
    string str;
    cin >> n;
    m = 1<<n;
    for(int mask = 0 ; mask < m ; mask++){
        for(int bit = n-1 ; bit >= 0; bit --){
            if(1<<bit & mask)str+='1';
            else str+='0';
        }
        grey.push_back(str);
        str.clear();
    }
    sort(all(grey));
    for(auto it : grey)cout<<it<<endl;
    // for(int mask = m-1 ; mask >= m/2 ; mask--){
    //     for(int bit = n-1 ; bit >= 0 ; bit --){
    //         if(1<<bit & mask)cout<<"1";
    //         else cout << "0";
    //     }
    //     cout << endl;
    // } 
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

