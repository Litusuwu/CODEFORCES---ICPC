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
ll counter = 0;
void Solve(){
    ll n;
    ll p=0, guardado;
    cin >> n;
    string numeros[n], t1, t2, t3;
    map<pair<ll,ll>,ll>verificado;
    bucle(i, n){
        cin>>numeros[i];
    }
    bucle(i, n){
        t1 = numeros[i];
        bucle(j, n){
            t2 = numeros[j];
            //if(verificado[{i, j}] == 10 or verificado[{j, i}]==10)continue;
           // verificado[{i, j}]=10;
          //  verificado[{j, i}]=10;
            t3 = t2+t1;
            
            if(!(t3.size() & 1)){
                guardado = ll(t3.size());
                p=0;  
                //cout<<guardado<<" ";
                bucle(k,(guardado/2)){
                    //cout<<t3[k]<<" vs "<<t3[t3.size()-k-1]<<endl;// logn
                    p = p + t3[k] - t3[t3.size()-k-1];
                }
                //cout<<endl;
                if(p==0)counter++; 
                   
            }
        }
    }
    cout<<counter<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}