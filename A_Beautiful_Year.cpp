#include <iostream>
using namespace std;

int main(){
   int anho;
    cin>>anho;
    if(anho>=1987 and anho<2013)
    {
        cout<<2013;
    }else{
        int contadores[10]{}; 
        while(true)
        {
            anho+=1;
            int copia=anho;
            while(copia>0) //2014
            {
            int digito=copia%10; 
            copia=copia/10; 
            contadores[digito]++;
            }
            int bandera=1;
            for(int i=0;i<10;i++)
            {
                if(contadores[i]>1) bandera=0;
            }
            if(bandera==1)
            {
                cout<<anho;
                break;
            }
        }  
    }

    return 0;
}