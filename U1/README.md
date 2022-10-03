📂Unit 1: Programming introduction

Here you see functions such as basic operations and type of variables.

Code sample:

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int entero = 5;
    float flotante = 2.565465654654;
    double grande = 2.546546545464845;
    char caracter = 64;

    cout<<"Este programa muestra los tipos de datos";

    cout<<"El numero entero es: " <<entero <<"\n";
    cout<<"El tamaño del entero es: " <<sizeof(entero) <<"bytes\n";

    cout<<"El numero flotante es: " <<flotante <<"\n";
    cout<<"El tamaño del flotante es: " <<sizeof(flotante) <<"bytes\n";

    cout<<"El numero double es: " <<grande <<"\n";
    cout<<"El tamaño del double es: " <<sizeof(grande) <<"bytes\n";

    cout<<"El caracter char es: " <<caracter <<"\n";
    cout<<"El tamaño del char es: " <<sizeof(caracter) <<"bytes\n";

    cout<<"-----------------------------------\n";

    printf("Usando la funcion printf\n");

    printf("El número entero es: %i \n", entero);
    printf("El número flotante es: %3.1f \n", flotante);

    return 0;
}
