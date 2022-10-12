/*
Date: 12/10/22
Author: Angel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that ask to user a number and make a multiplication table.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, multi, limite, i, j;
    cout<<"Enter a number: ";
    cin>>numero;
    cout<<"Enter a limit of table: ";
    cin>>limite;

    cout<<"-------------------------\n";

    for(i=1; i<=limite; i++){
        multi=numero * i;
        cout<<"|\t" <<i <<"\tx\t" <<numero <<"\t=\t" <<multi <<"\t|\n";
        cout<<"-------------------------\n";
    }

    return 0;
}