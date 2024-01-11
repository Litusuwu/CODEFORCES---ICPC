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
    int n, x, min=0, a=0;
    cin >> n >> x;
    vector<int>cosas(n+1), pes(n+1);
    bucle(i, n){
        cin>>cosas[i];
        if(i==n-1)a=cosas[i];
        if(i!=0)pes[i]=cosas[i]-cosas[i-1];
        else if(i==0)pes[i]=cosas[i];
        //cout<<pes[i]<<" ";
    }
    //cout<<a;
    pes[n]=(x-a)*2;
    // bucle(i, n){
    //     if(n==1){
    //         cout<<cosas[i]<<endl;
    //         return;
    //     }
    //     if(i==n-1){
    //         if(min<((x-cosas[i])*2))min=(x-cosas[i])*2;  
    //         //cout<<cosas[i];  
    //     }
    //     else{
    //         if(min < cosas[i]-a)min=cosas[i]-a;
    //         a=cosas[i];
    //     }
    // }
    cout<<*max_element(pes.begin(), pes.end())<<endl;
    //cout<<min<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}