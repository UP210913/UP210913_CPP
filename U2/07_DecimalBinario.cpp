/*
Date: 07/10/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that ask to user a decimal number and translate it to binary.
*/

#include <iostream>
using namespace std;

int main(){
    int cont, cont2, numero, divisor, divisor2;
    
    cout<<"Ingresa el número a convertir en binario: ";
    cin>>numero;
    divisor=numero;

    //Calculate how many times it can be divided
    while(cont2>0){
        cont2=divisor/2;
        divisor=cont2;
        cont++;
    }
    
    //Create vector
    int binario[cont];
    cont=0;
    divisor=numero;
    cont2=1;
    
    //Save remainders for binary number
    while(cont2>0){
    
        cont2=divisor/2;
        divisor2=divisor%2;
        divisor=cont2;
        binario[cont]=divisor2;
        if(cont2>0){
            cont++;
        }
    }
    
    cout<<"\nEl número " <<numero <<" en binario es: \n";
    
    //Loop to print the binary number
    for(int i=cont; i>=0; i--){
        cout<<binario[i];
    }
    
    return 0;
}