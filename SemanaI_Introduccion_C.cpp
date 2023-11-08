#include <iostream>

using namespace std;

int main(){
    //Buscar el mayor de tres numeros.
    int x=26;//Inicializar una variable.
    int y,z;
    y=23;z=67;
    //Ejemplo bloque de decision
    /*if(x>0){
        cout<<"La variable x contiene un numero positivo.";
    }
    else{
        cout<<"La variable x no contiene un numero positivo.";
    }*/
    /*if(x>y){
        if(x>z){
            cout<<"El mayor es: "<<x;
        }
        else{
            if(z>y){
                cout<<"El mayor es: "<<z<<endl;
            }
            else{
                cout<<"El mayor es: "<<y<<endl;
            }    
        }
    }*/
    int mayor=x;
    if(mayor<y){
        mayor=y;
    }
    if(mayor<z){
        mayor=z;
    }
    cout<<"El mayor es: "<<mayor<<endl;
    return 0;    
}

