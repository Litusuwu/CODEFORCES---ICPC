#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

void Solve(){
    int n, m, ans;
    pii minIndex(0,101), maxIndex(0, -1);
    cin >> n;
    int arr[n]{};
    rep(i, n){
        cin>>arr[i];
        if(arr[i]<=minIndex.S ){minIndex.F=i+1;minIndex.S=arr[i];}
        if(arr[i]>maxIndex.S){maxIndex.F=i+1;maxIndex.S=arr[i];}
    }
    //cout<<minIndex.F<<" "<<maxIndex.F<<endl;

    ans = (abs(n-minIndex.F) + abs(maxIndex.F-1)) - (maxIndex.F > minIndex.F);
    cout << ans;

}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}