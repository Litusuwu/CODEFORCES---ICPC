#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
#define endl "\n"
typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    string str;
    map<char, int>letras;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        letras[str[i]]++;
    }
    
    int countPar = 0, countImpar = 0;
    char letra;
    for(auto it : letras){
        if(it.second == 0)continue;
        if(it.second % 2 == 0)countPar++;
        else{
            letra = it.first;
            countImpar++;
        } 
    }
    if(str.length() % 2 == 0 and countImpar > 0 || str.length() % 2 != 0 && countImpar != 1){
        cout << "NO SOLUTION" << endl;
        return;
    }
    else{
        string strAns = str;
        int s = str.length();
        if(s%2!=0){
            strAns[str.length()/2] = letra;
            letras[letra]--;
        }
        int i = 0, j = s-1;
        for(auto it = letras.begin(); it != letras.end() ; it++ ){
            if(i == (s/2 + 1)){
                continue;
            }
            while((*it).second > 0 ){
                // cout << i << " - " << j << endl;
                strAns[i] = (*it).first;
                i++;
                strAns[j] = (*it).first;
                j--;
                (*it).second = (*it).second - 2;
            }
            // cout << (*it).first << endl;
        }
        cout << strAns << endl;
    }
    
    

}


int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}
