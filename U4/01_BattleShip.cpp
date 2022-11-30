/*
Authors: 
-Ocar Alejandro Hernández Gómez
-Elber Horacio Jiménez Mendoza
-Ángel Owaldo Vargas Rocha
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void ubicaciondebarcos();
void makeBoard(); 
int horizontal, columna;
    int mar[10][10];
int main(){
cout<<"   ───────╔═.✰.══════╗\n";
cout<<"   ───────║ No cuentes \n";
cout<<"   ──────▓║ los días \n";
cout<<"   ─────▓▓║ haz que los \n";
cout<<"   ───▓▓▓▓║ días cuenten-Ebel Parce 2022 \n";
cout<<"   ──▓▓▓▓▓║══════.✰.═╝ \n";
cout<<"       ▀████████████████▀── \n";
cout<<"•*+:｡.｡∘｡.｡:+*••*+:｡.｡∘｡.｡:+*••*+: \n"; 

    makeBoard();
        for (int i=0; i<10;i++){
    for (int j=0; j<10; j++){
        mar[i][j]=0;

    }
}
cout<<"\n Ingresa la horizontal a ubicar el barco:"; cin>>horizontal;

if( horizontal >=1 && horizontal <=10){
    columna= rand()%6;
    for ( int i= 0; i<5; i++)
        mar[horizontal - 1][columna + i]=1;

        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++)        
            cout<< mar[i][j]<< "\t";
            cout <<"\n";
            }
}else 
    cout<<"\ningresa un rango valido: ";
    return 0;
} 
void makeBoard(){
    int x=0, y=0;
    for(int row=0; row<21; row++){
        for(int col=0; col<10; col++){
            if(row==0){
                cout<<"____";
            }
            if(col==0 && row>0){
                cout<<"|";
            }
            if(row%2==1 && col<10){
                cout<<" 0 ";
            }else if(row>0 && row%2==0){
                cout<<"___";
            }
            if(row>0){
                cout<<"|";
            }
        }
        cout<<"\n";
    }
}

