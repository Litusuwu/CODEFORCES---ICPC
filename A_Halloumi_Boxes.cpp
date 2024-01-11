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
    int n , m, z, count = 0; 
    cin >> n >> m ;
    vector<int> numeros(n);
    bucle(i, n){
        cin >> numeros[i];
        if(i != 0){
            if(numeros[i-1]>numeros[i])count++;
        }
    }
    // int k = numeros[n-1];
    // sort(numeros.begin(), numeros.end());
    if(m!= 1 or count == 0)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}