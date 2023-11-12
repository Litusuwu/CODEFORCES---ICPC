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
    int n, x, y, x2, y2,d=0;
    cin >> n;
    vector<int>numeros(n*2);
    bucle(i, n*2){
        cin>> numeros[i];
    }
    sort(numeros.begin(), numeros.end());
    deque<int>ordenados(numeros.begin(), numeros.end());
    deque<int>ordenados2(numeros.begin(), numeros.end());
    //for(auto it : ordenados)cout<<it<<" ";
    x = ordenados.front();
    y = ordenados.back();
    ordenados.pop_back();
    ordenados.pop_front();
   // cout<<x<<" "<<y<<endl;
    while(!ordenados.empty()){
        x2 = ordenados.front();
        y2 = ordenados.back();
        ordenados.pop_back();
        ordenados.pop_front();
        d+=abs(x-x2)+abs(y-y2);
        //cout<<x2<<" "<<y2<<endl;
        x=x2;
        y=y2;
    }
    cout<<d<<endl;
    x = ordenados2.front();
    y = ordenados2.back();
    ordenados2.pop_back();
    ordenados2.pop_front();
    cout<<x<<" "<<y<<endl;
    while(!ordenados2.empty()){
        x2 = ordenados2.front();
        y2 = ordenados2.back();
        ordenados2.pop_back();
        ordenados2.pop_front();
        d+=abs(x-x2)+abs(y-y2);
        cout<<x2<<" "<<y2<<endl;
        x=x2;
        y=y2;
    }
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}