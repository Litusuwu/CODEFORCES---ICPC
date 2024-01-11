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
    int n, aux;
    cin >> n;
    vector<pair<int,int>>chad, chad2, chad3(n);
    map<int,int>ostras, pedrin;
    vector<int>humilk;
    bucle(i, n){
        cin>> aux;
        humilk.push_back(aux);
        chad.push_back({aux, i});
    }
    sort(chad.begin(), chad.end());
    bucle(i, n){
        cout<<chad[i].first<<" "<<chad[i].second<<endl;
        if(i==0){
            chad3[i].first = chad[i].first;
            chad3[i].second = chad[i].second;
        }
        else{
            chad3[i].first = chad[i-1].first + chad[i].first;
            chad3[i].second = chad[i].second;

            ostras[chad[i].second]=chad3[i].first;
        }

    }
    bucle(i, n){
        pedrin[chad[i].first]=
    }
    
    // int n;
    // cin>>n;
    // vector<ll>chad1(n), chad2(n), chad3(n);
    // set<pair<ll, ll>>chadin;
    // bucle(i, n){
    //     cin>>chad1[i];
    //     chad3[i]=i;
    //     chadin.insert({chad1[i], chad3[i]});
    // }
    // vector<ll>chad4, chad5;
    // chad4 = chad1;
    
    // sort(chad1.begin(), chad1.end());
    // bucle(i, n){
    //     if(i==0)chad2[i]=chad1[i];
    //     else{
    //         chad2[i]=chad2[i-1]+chad1[i];
    //     }
    // }
    // for(auto it : chadin)cout<<it.first<<" "<<it.second<<endl;
    // for(auto it : chad2)cout<<it<<" ";
    // cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}