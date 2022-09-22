/*
Date: 22/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa con el uso del if
*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    int dato = 1;

    cout<<"Ingresa un número entero:\n";
    cin>>numero;
    if (numero == dato){
        cout<<"El número es igual a dato\n";
    }

    if (numero != dato){
        cout<<"El número es diferente a dato\n";
    }

    if (numero < dato){
        cout<<"El número es menor a dato\n";
    }

    if (numero > dato){
        cout<<"El número es mayor a dato\n";
    }

    return 0;
}