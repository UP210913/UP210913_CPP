/*
Date: 22/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa de entrada de datos
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout<<"Este programa muestra como se ingresan datos por el ususario\n";
    cout<<"Ingresa un dato de tipo entero:\n";
    cin>>entero;
    cout<<"El dato ingresado es: " <<entero <<"\n";

    cout<<"Ingresa un dato de tipo flotante:\n";
    cin>>flotante;
    cout<<"El dato ingresado es: " <<flotante <<"\n";

    cout<<"Ingresa un dato de tipo double:\n";
    cin>>grande;
    cout<<"El dato ingresado es: " <<grande <<"\n";

    cout<<"Ingresa un dato de tipo char:\n";
    cin>>caracter;
    cout<<"El dato ingresado es: " <<caracter <<"\n";

    cout<<"--------------------------------------\n";

    printf("Usando la fnción printf y scanf\n");
    printf("Ingresa un dato de tipo entero:\n");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    return 0;
}