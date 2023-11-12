#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(ll i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(ll i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(ll i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(ll i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(ll i = k; i > n ; i--)
#define bucleR2(i, k, n) for(ll i = k; i >= n ; i--)
typedef long long ll;

void Solve(){
    ll n;
    cin>>n;
    vector<ll> v(n), ss;
    bucle(i,n){
        cin>>v[i];
        ss.push_back(v[i]);
    }
    sort(ss.begin(),ss.end());
    ll Mex = 0;
    bucle(i,n){
        if(ss[i]==Mex) Mex++;
    }
    if(Mex==n){cout<<"No"<<endl;return;}
    ll req = Mex+1;
    ll fap=-1, lap = -1;
    bucle(i,n){
        if(v[i]==req && fap==-1) fap=i;
        if(v[i]==req) lap = i;
    }
    bool ispos = true;
    map<ll,ll> minInd, maxInd;
    bucle(i,n){
        if(minInd.find(v[i])==minInd.end()) minInd[v[i]]=i;
        ll ii = minInd[v[i]], ii2 = maxInd[v[i]];
        minInd[v[i]] = min(ii,i);
        maxInd[v[i]] = max(ii2,i);
    }
    if(fap==-1 && lap==-1) cout<<"Yes"<<endl;
    else {
        bucleV3(i,fap+1,lap){
            if(v[i]<Mex){
                if(minInd[v[i]]>=fap && maxInd[v[i]]<=lap) {ispos=false;break;}
            }
        }
        if(ispos) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}