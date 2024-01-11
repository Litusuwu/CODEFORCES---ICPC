#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;

char matrix[3][3]{};

void Solve(){
    int n, m, k, l, d, ans = 0;
    int cA = 0, cB= 0, cC=0;
    rep(i, 3){
        rep(j, 3){
            cin >> matrix[i][j];
            if(matrix[i][j]=='A')cA++;
            else if(matrix[i][j]=='B')cB++;
            else cC++;
        }
    }
    if(cA<3)cout<<'A';
    else if (cB <3)cout<<'B';
    else cout<<'C';
    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}