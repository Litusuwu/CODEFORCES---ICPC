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
    int n, m, k;
    //string palabra;
    
    cin >> n >> m;
    char arr[n+1]{};
    bucle(i, n){
        cin >> arr[i];
    }
    bucle(j, m){
        bucle(i, n-1){
            if(arr[i]=='B' and arr[i+1]=='G'){
                swap(arr[i], arr[i+1]);
                i++;
            }
        }
        
    }

    //reverse(arr, arr + m);
    cout<<arr;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}