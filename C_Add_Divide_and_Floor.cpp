#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(int i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(int i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(int i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(int i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(int i = k; i > n ; i--)
#define bucleR2(i, k, n) for(int i = k; i >= n ; i--)
typedef long long ll;

void Solve(){
    ll n, maxi, mini, count = 0;
    cin >> n;
    vector<ll>greed(n), ans;
    bucle(i, n)cin>>greed[i];
    maxi = *max_element(greed.begin(), greed.end());
    mini = *min_element(greed.begin(), greed.end());
    if(maxi==mini){
        cout<<"0"<<endl;
        return;
    }

    //cout<<maxi<<" "<<mini<<endl;
    while(true){
        if(mini==maxi)break;
        if(!maxi&1 and mini&1){
            //cout<<maxi<<" "<<mini<<endl;
            maxi=floor((maxi+1)/2);
            mini=floor((mini+1)/2);
            ans.push_back(1);
        }
        else{
            maxi=floor(maxi/2);
            mini=floor(mini/2);
            ans.push_back(0);
        }
        count++;
        
    }
    if(count<=n){
        cout<<count<<endl;
        for(auto it : ans)cout<<it<<" ";
    }
    else{
        cout<<count;
    }
    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}