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
    vector<int>test{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    for(int i = 1 ; i < 10 ; i ++){
        int key = test[i];
        int j = i - 1;
        while(j > -1 and test[j]>key){
            test[j+1]=test[j];
            j--;
        }
        test[j+1]=key;
    }
    for(auto it : test)cout<<it<<" ";
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}