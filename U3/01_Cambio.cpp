/*
Date: 24/10/22
Author: Angel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa que pide un monto de dinero e imprime la cantidad de billetes y monedas que completan el monto
*/

#include <iostream>
using namespace std;

void obtenerCambio(int);
void imprimirCambio(int);

int quinientos = 0, doscientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0; 
int dinero, cambio[9]={500,200,100,50,20,10,5,2,1}, cantidad[9];

int main(){
    cout<<"Enter the money: ";
    cin>>dinero;
    obtenerCambio(dinero);
    imprimirCambio(dinero);

    return 0;
}

void obtenerCambio(int dinero){
    for(int i=0; i<9; i++){
        while(dinero>=cambio[i]){
            dinero-=cambio[i];
            cantidad[i]++;
        }
    }
}

void imprimirCambio(int dinero){
    for(int i=0; i<9; i++){
        cout<<"Bills of " <<cambio[i] <<" = " <<cantidad[i] <<"\n";
    }
}