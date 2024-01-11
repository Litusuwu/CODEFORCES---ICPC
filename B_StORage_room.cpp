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
    ll n, m;
    cin >> n;
    ll matrix[n][n];
    bucle(i, n){
        bucle(j, n){
            cin >> matrix[i][j];
        }
    } 
    vector<ll>vek;
    ll count = 0;
    bucle(i, n){
        ll maxI=-1, minI=LONG_LONG_MAX, chad = 2e30 - 1; 
        bucle(j, n){
            if(i==j)continue;
            
            else{
                chad &= matrix[i][j];
                if(minI > matrix[i][j])minI = matrix[i][j];
                if(maxI < matrix[i][j])maxI = matrix[i][j];
            }
        }
      //  cout<<" ... " << maxI<<" "<<minI<<endl;
        vek.push_back((chad));
    } 
    bucle(i, n){
        bucle(j, n){
            if(i==j)continue;
            if((vek[i]|vek[j])==matrix[i][j])continue;
            cout<<"NO"<<endl;
            return;
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
        cout<<"9"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    for(auto it : vek )cout<<it<<" ";

    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}