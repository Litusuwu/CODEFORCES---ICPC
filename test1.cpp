#include <iostream>
#define MAX 10
using namespace std;

int almacen[MAX][MAX]={ {3},
                        {4},
                        {9},
                        {1},
                        {8}};
int F=5,C=1;

void recorrerAlmacen(int ini,int i_fin,int j_fin){
    
    for(int i=ini;i<j_fin;i++)
        cout << almacen[ini][i] << " ";
    cout << endl;
    
    for(int i=ini;i<i_fin;i++)
        cout << almacen[i][j_fin] << " ";
    cout << endl;
    
    for(int i=j_fin;i>ini;i--)
        cout << almacen[i_fin][i] << " ";
    cout << endl;
    
    for(int i=i_fin;i>ini;i--)
        cout << almacen[i][ini] << " ";
    cout << endl;
    
    if(j_fin==C/2){
        return;
    }
    
    recorrerAlmacen(ini+1,i_fin-1,j_fin-1);
    
}

int main(int argc, char** argv) {
    recorrerAlmacen(0,F-1,C-1);
    return 0;
}