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
    ll n, c,k=0, maxSum=0, maxNoSum=0, test1=0, test2=0;
    cin>>n;
    vector<ll>arr(n);
    bucle(i, n){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<arr[n-1]+arr[n-2]-arr[0]-arr[1]<<endl;
    bucle(i, n){
        if(i==n-1-i)break;
        k++;
        cout<<test1<<" "<<test2<<"  ";
        test1+=arr[i];
        test2+=arr[n-1-i];
        if((test2-test1)>maxSum and n%(i+1)==0){
            
            maxSum=test2-test1;
            cout<<"ga"<<i+1<<" "<<maxSum;
        }
    }
    cout<<maxSum<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}