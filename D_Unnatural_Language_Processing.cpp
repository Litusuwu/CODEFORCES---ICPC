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

void Solve(){
    int n, m, k, l, d, ans = 0, cV=0, cC=0;
    string rpta, rec2;
    bool flag = false;
    cin >> n;
    cin >> rpta;
    rep(i, n){
        if(i>1 and (rpta[i-1]=='a' or rpta[i-1]=='e') and (rpta[i-2]=='d' or rpta[i-2]=='b' or rpta[i-2]=='c')  and
            (rpta[i+1]=='a' or rpta[i+1]=='e')){
                cout<<'.';
        }
        else if (i>1 and (rpta[i-1]=='a' or rpta[i-1]=='e') and (rpta[i-2]=='d' or rpta[i-2]=='b' or rpta[i-2]=='c') and (i+1 < n-1) and
            (rpta[i+1]=='d' or rpta[i+1]=='b' or rpta[i+1]=='c') ){
            cout<<rpta[i];
            cout<<'.';
            //i++;
            continue;
        }
        cout<<rpta[i];
    }
    cout<<endl;

}
int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}