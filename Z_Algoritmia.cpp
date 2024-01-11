#include <iostream>
#include <iomanip>
using namespace std;

const int MAXIMO = 1000;
int n, x, y;
int matriz[1000][1000];
int weight[1000]{};

int max(int a, int b){
    return (a>b? a : b);
}
void imprimirMatriz(){
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0 ; j <= y ; j++){
            cout<<left<<setw(2)<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
string func(){
    for(int i = 0 ; i <= x ; i ++){
        for(int j = 0; j <= y ; j++){
            if(j==0) matriz[i][j]=1;
            else matriz[i][j]=0;
        }
    }
    imprimirMatriz();
    for(int j = 1 ; j <= y ; j++){
        for(int i = 1 ; i <= x ; i++){
            if(j - weight[i] < 0)matriz[i][j]=max(matriz[i-1][j],matriz[i-1][j-weight[i]]);
            else matriz[i][j]=matriz[i-1][j-weight[i]];
        }
    }
    imprimirMatriz();
    //cout<<y/2<<endl<<endl;
    if(matriz[x][y/2]==0)return "False";
    else return "Verdadero";

}

int main(){
    int sum=0;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin>>weight[i];
        sum+=weight[i];
    }
    x = n;
    y = sum;
    if(!(sum&1))cout<<func()<<endl;
    else cout<<"Falso."<<endl;
    return 0;
}
/*
4
1 5 5 11
*/