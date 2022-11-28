/*
Authors: 
-Ocar Alejandro Hernández Gómez
-Elber Horacio Jiménez Mendoza
-Ángel Owaldo Vargas Rocha
*/

#include <iostream>
using namespace std;

void makeBoard();

int main(){
    makeBoard();

    return 0;
}

void makeBoard(){
    int x=0, y=0;
    for(int row=0; row<55; row++){
        for(int col=0; col<27; col++){
            if(row==0){
                cout<<"____";
            }
            if(col==0 && row>0){
                cout<<"|";
            }
            if(row%2==1 && col<27){
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