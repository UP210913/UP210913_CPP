/*
Date: 24/10/22
Author: Angel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa que pide un monto de dinero e imprime la cantidad de billetes y monedas que completan el monto
*/

#include <iostream>
using namespace std;

void obtenerCambio(int);
void imprimirCambio(string);

int quinientos = 0, doscientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0; 
int dinero;

int main(){
    cout<<"Enter the money: ";
    cin>>dinero;
    obtenerCambio(dinero);
    
}

void obtenerCambio(int dinero){
    while(dinero>=500){
        dinero-=500;
        quinientos++;
    }
    while(dinero>=200){
        dinero-=200;
        doscientos++;
    }
    while(dinero>=100){
        dinero-=100;
        cien++;
    }
    while(dinero>=50){
        dinero-=50;
        cincuenta++;
    }
    while(dinero>=20){
        dinero-=20;
        veinte++;
    }
    while(dinero>=10){
        dinero-=10;
        diez++;
    }
    while(dinero>=5){
        dinero-=5;
        cinco++;
    }
    while(dinero>=2){
        dinero-=2;
        dos++;
    }
    while(dinero>=1){
        dinero-=1;
        uno++;
    }
}