#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<'['<< #x << "]: " << x << '\n'
#else
#endif

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> par;

const ll N=2048;
const ll MOD = 998244353LL;
const ll INF = 1e18;
const ld PI = acos(-1);
const ld EPS = 1e-9;

const char ZERO = '0';
const string YES = "YES";
const string NO = "NO";

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    multiset<int>c1, c2;
    set<int>c3;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(x == y){
            c1.insert(x);
            c3.insert(x);
            continue;
        }
        c3.insert(x);c3.insert(y);
        c1.insert(x);c2.insert(y);
    }

    int ans =  INT_MAX, mini = n/2 + (n%2==0? 0 : 1);

    for(auto it : c3){
        // cout << it << " ";
        // debug(it);
        if(c1.count(it) >= mini){
            ans = 0;
            break;
        }
        int resp = c1.count(it) + c2.count(it);
        if(resp >= mini){
            ans = min(mini-(int)c1.count(it), ans);
        }
    }
    cout <<(ans==INT_MAX? -1 :ans) << endl;
    return 0;
}
