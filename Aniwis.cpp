#include <iostream>
#include <cmath>
using namespace std;

//problema de mochilas
struct Objeto{
    int peso;
    int espacio;
};
int main(){
    int espacioMochila = 20; //espacio
    //cantidad de objetos
    int cantidadObjetos = 10;
    int mejorPeso = 0;
    int mascaraRespuesta = 0;
    //datos de los 10 objetos
    struct Objeto Objetos[10]{};
    //rellenamos los objetos
    for(int i = 0 ; i < cantidadObjetos ; i++){
        cin >> Objetos[i].peso >> Objetos[i].espacio;
    }
    int maxComb = 1<<cantidadObjetos; 
    for(int mascaraBits = 0 ; mascaraBits < maxComb ; mascaraBits++){
        int pesoInicial = 0;
        int espacioInicial = 0;
        for(int bit = 0 ; bit < cantidadObjetos;bit++){
            if(mascaraBits & 1<<bit){
                //en esta combinacion, este elemento está
                pesoInicial += Objetos[bit].peso;
                espacioInicial += Objetos[bit].espacio;
            }
        } 
        if(pesoInicial > mejorPeso and espacioInicial < espacioMochila){
            mejorPeso=pesoInicial;
            mascaraRespuesta = mascaraBits;
        }
    }
    cout<<"El mejor peso que puede contener la mochila es : "<<mejorPeso<<endl;
    cout<<"Con la combinación: "<<endl;
    for(int bit = 0 ; bit < cantidadObjetos;bit++){
        if(mascaraRespuesta & 1<<bit){
            cout<<"-"<<Objetos[bit].peso<<" "<<Objetos[bit].espacio<<endl;
        }
    } 
}


























