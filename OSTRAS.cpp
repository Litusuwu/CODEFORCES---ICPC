#include <iostream>
#include <vector>
using namespace std;

int matrix[5][5]{};
int matrix2[2][2][5]{};
int matrixAns[5][5]{};
int values[5]{-1, 1, 2, 3, 4};
int matrixSeg[5][5]{};
int co = 0;
void imprimir(){
    for(int i = 0 ; i < 5 ;i++){
        for(int j = 0 ; j < 5 ; j++){
            cout << matrixAns[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool validar(){
    //aqui sumamos horizontal
    for(int i = 0 ; i < 5 ; i++){
        int count = 0, sum = 0;
        for(int j = 0 ; j < 5 ; j++){
            if(matrixAns[i][j]==-1)continue;
            else if ( matrixAns[i][j]==4)count++;
            else sum+=matrixAns[i][j];
        }
        //cout<<sum<<" vs "<< matrix2[0][0][i]<<" -- -- -- "<<count<<" vs "<<matrix2[0][1][i]<<endl;
        if(sum != matrix2[0][0][i] or count != matrix2[0][1][i])return false;
    }
    //aqui sumamos vertical
    for(int j = 0 ; j < 5 ; j++){
        int count = 0, sum = 0;
        for(int i = 0 ; i < 5 ; i++){
            if(matrixAns[i][j]==-1)continue;
            else if ( matrixAns[i][j]==4)count++;
            else sum+=matrixAns[i][j];
        }
        //cout<<sum<<" vs "<< matrix2[1][0][j]<<" -- -- -- "<<count<<" vs "<<matrix2[1][1][j]<<endl;
        if(sum != matrix2[1][0][j] or count != matrix2[1][1][j])return false;
    }
    return true;
}
bool validarMenor(){
    //aqui sumamos horizontal
    for(int i = 0 ; i < 5 ; i++){
        int count = 0, sum = 0;
        for(int j = 0 ; j < 5 ; j++){
            if(matrixAns[i][j]==-1)continue;
            else if ( matrixAns[i][j]==4)count++;
            else sum+=matrixAns[i][j];
        }
        if(sum > matrix2[0][0][i] or count > matrix2[0][1][i])return false;
    }
    //aqui sumamos vertical
    for(int j = 0 ; j < 5 ; j++){
        int count = 0, sum = 0;
        for(int i = 0 ; i < 5 ; i++){
            if(matrixAns[i][j]==-1)continue;
            else if ( matrixAns[i][j]==4)count++;
            else sum+=matrixAns[i][j];
        }
        if(sum > matrix2[1][0][j] or count > matrix2[1][1][j])return false;
    }
    return true;
}
void pasarMatrix(){
    for(int i = 0 ; i< 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            matrixSeg[i][j]=matrixAns[i][j];
        }
    }
}
void verificar(){
    for(int i = 0 ; i< 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if((matrixSeg[i][j]==4 or matrixAns[i][j]==4)){
                if(matrixSeg[i][j]!=matrixAns[i][j] ) matrixSeg[i][j]=5;
            }
            
        }
    }
}
void BK(int x, int y, int maxX, int maxY){
    //cout<<"a";
    if(not validarMenor())return;
    if(x == 5 and y == 4){
        //imprimir();
        
        if(validar()){
            if(co == 0 ){
                pasarMatrix();
                co++;
            }
            else{
                verificar();
            }
            imprimir();
            cout<<endl<<endl;
        }
        return;
    }
    if(x < 5 and y < 5){
        if(matrix[x][y]!=-1){
            BK(x+1, y, maxX, maxY);
        }
        else{
            for(int i = 0 ; i < 4 ; i++){
                matrixAns[x][y]=i+1;
                BK(x+1, y, maxX, maxY);
                matrixAns[x][y]=-1;
            }
        }
    }
    else if(y<5){
        if(matrix[x][y]!=-1){
            BK(0, y+1, maxX, maxY);
        }
        else{
            for(int i = 0 ; i < 4 ; i++){
                matrixAns[x][y]=i+1;
                BK(0, y+1, maxX, maxY);
                matrixAns[x][y]=-1;
            }
        }
    } 

}

int main(){
    for(int i = 0 ; i < 2 ; i++){ // 0 -> Y , 1 -> X
        for(int k = 0 ; k < 5 ; k++){ 
            cin >> matrix2[i][0][k] >> matrix2[i][1][k];
        }
    }
    for(int i = 0 ; i < 5 ;i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> matrix[i][j];
            matrixAns[i][j]=matrix[i][j];
        }
    }
    // cout<<endl<<endl;
    // imprimir();
    BK(0, 0, 5, 5);
    //validar();
    //imprimir();
    cout<<endl<<endl<<"Cosas Seguras:"<<endl;
    for(int i = 0 ; i < 5 ;i++){
        for(int j = 0 ; j < 5 ; j++){
            cout << matrixSeg[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}