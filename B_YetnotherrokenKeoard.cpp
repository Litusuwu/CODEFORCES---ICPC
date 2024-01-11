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
    string ostras;
    cin >> ostras;
    int z = ostras.size(), XX=0, XXX=0;
    char cadena[z+1]{};
    vector<char>ahora;
    deque<char>indexU, indexL;

    for(int i = z - 1 ; i >=0 ; i--){
        if(ostras[i]=='B'){
            XX++;
            continue;
        }
        if(ostras[i]=='b'){
            XXX++;
            continue;
        }
        if(ostras[i]>='a' and ostras[i]<='z'){
            if(XXX){
                XXX--;
                continue;
            }
            else{
                indexU.push_front(ostras[i]);
            }
        }
        else if(ostras[i]>='A' and ostras[i]<='Z'){
            if(XX){
                XX--;
                continue;
            }
            else{
                indexU.push_front(ostras[i]);
            }
        
        }
    }
    while(!indexU.empty()){
        cout<<indexU.front();
        indexU.pop_front();
    }
    cout<<endl;

}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    //cin.get();
    while(time--)Solve();
    return 0;
}