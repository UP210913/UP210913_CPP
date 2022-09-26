/*
Date: 26/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Programa que otorga un bono de acuerdo a su calificación anual
*/

#include <iostream>
using namespace std;

int main(){
    double calificacion;
    double bono = 2400;

    cout<<"Ingrese su calificación anual: \n0.0      0.4      0.6+\n";
    cin>>calificacion;

    if (calificacion == 0.0){
        cout<<"De acuerdo a tu calificación, tu bono es de 0";
        cout<<"\nRendimiento inaceptable.";
    }else{
        if (calificacion == 0.4){
            cout<<"De acuerdo a tu calificación, tu bono es de " <<bono*calificacion;
            cout<<"\nRendimiento aceptable.";
        }else{
            if (calificacion >= 0.6 && calificacion <= 1){
                cout<<"De acuerdo a tu calificación, tu bono es de : " <<bono*calificacion;
                cout<<"\nRendimiento meritorio.";
            }else{
                cout<<"Valor inválido";
            }
        }
    }


    return 0;
}