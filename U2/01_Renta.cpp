/*
Date: 22/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa que calcula la renta


Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:

Renta	Tipo impositivo
Menos de $10,000	5%
Entre $10,000 y $20,000	15%
Entre $20,000 y $35,000	20%
Entre $35,000 y $60,000	30%
Más de $60,000	45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.
*/

#include <iostream>
using namespace std;

int main(){
    int renta;
    float impositivo;
    cout<<"Ingrese el valor de su renta anual: ";
    cin>>renta;

    if(renta <= 0){
        cout<<"Valor erróneo";
    }else{
        if(renta < 10000){
            impositivo = renta * 0.05;
            cout<<"Se le aplica un 5 por ciento de impositivo y su renta total es de " <<impositivo + renta;
        }else{
            if(renta >= 10000 && renta < 20000){
                impositivo = renta * 0.15;
                cout<<"Se le aplica un 15 por ciento de impositivo y su renta total es de " <<impositivo + renta;
            }else{
                if(renta >= 20000 && renta < 35000){
                    impositivo = renta * 0.2;
                    cout<<"Se le aplica un 20 por ciento de impositivo y su renta total es de " <<impositivo + renta;
                }else{
                    if(renta >= 35000 && renta < 60000){
                        impositivo = renta * 0.3;
                        cout<<"Se le aplica un 30 por ciento de impositivo y su renta total es de " <<impositivo + renta;
                    }else{
                        if(renta >= 60000){
                            impositivo = renta * 0.6;
                            cout<<"Se le aplica un 45 por ciento de impositivo y su renta total es de " <<impositivo + renta;
                        }
                    }
                }
            }
        }
    }

    
    return 0;
}