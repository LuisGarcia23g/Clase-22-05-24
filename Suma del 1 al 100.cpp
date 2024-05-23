//Suma del 1 al 100
#include <iostream>
using namespace std;

int main (){
    int numero[100];
    int suma=0;
    for (int i = 0; i <100; i++){
        numero[i]=i+1;
        suma= suma + numero[i];
    }

cout << "La suma de los numeros del 1 al 100 es: " << suma;  

    return 0;
}