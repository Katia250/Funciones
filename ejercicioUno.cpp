#include <iostream>
using namespace std;

void mostrarParidad(int numero){
    if(numero %2 ==0){
        cout<<"El numero es par:"<<endl;
    }else{
        cout<<"El numero es impar:"<<endl;
    }
}

int main (){
    int numero;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>numero;
    mostrarParidad(numero);

    return 0;
}