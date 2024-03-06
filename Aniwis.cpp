#include <iostream>
#include <cmath>
using namespace std;

//problema de mochilas
struct Objeto{
    int peso;
    int espacio;
};


//void cargaBin(arregloCromosomatico)


int main(){

    int espacioMochila = 20; //espacio

    //cantidad de objetos
    int cantidadObjetos = 10;
    
    //datos de los 10 objetos
    struct Objeto Objetos[10]{};
    
    //rellenamos los objetos
    for(int i = 0 ; i < cantidadObjetos ; i++){
        cin >> Objetos[i].peso >> Objetos[i].espacio;
    }

    int maxComb = 1<<cantidadObjetos; 

    
    for(int mascaraBits = 0 ; mascaraBits < maxComb ; mascaraBits++){
        1 -> 0000000000010000
        << >> 


    }
}


























