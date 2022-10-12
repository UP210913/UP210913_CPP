/*
Date: 07/10/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that ask to user a decimal number and translate it to binary.
*/

#include <iostream>
using namespace std;

int main(){
    int decimal, d2, i=0, c;
    string resultado;

    cout<<"Enter a integer number: ";
    cin>>decimal;
    d2=decimal;

    while(decimal>0){
        d2=decimal/2;
        i++;
    }
    int bin[i];
    c=i;
    for(i=0; i<=c; i++){
        bin[i]=(decimal%2);
        decimal/=2;
    }
    cout<<"Your integer number translated to binary number is:\n";
    for(i=c;i>=0;i--){
        cout<<bin[i];
    }

    return 0;
}