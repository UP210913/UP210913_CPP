/*
Date: 28/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that returns a price according to your age.
*/

#include <iostream>
using namespace  std;

int main(){
    int edad;

    //Ask the user their age
    cout<<"Ingrese su edad: ";
    cin>>edad;

    //Make the comparisons in each case
    if (edad > 0 && edad < 4){
        cout<<"Bienvenido. Tu entrada es gratis.\n";
    }else if (edad >= 4 && edad <= 18){
        cout<<"Bienvenido. Tu entrada tiene un precio de $5.\n";
    }else if (edad > 18){
        cout<<"Bienvenido. Tu entrada tiene un precio de $10.\n";
    }else{
        cout<<"No te entiendo.";
    }

    return 0;
}
