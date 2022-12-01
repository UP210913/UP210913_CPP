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
/*#include <iostream>
#include <ctime>
using namespace std;
 
const int rows = 10;
const int elements = 10;
 
int maxships = 10;
 
int matrix[rows][elements];
 
void Clear()
{
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < elements; j++)
        {
            matrix[i][j] = 0;
        }
    }
}
 
void Show()
{
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < elements; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
int NumberOfShips()
{
    int c = 0;
 
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < elements; j++)
        {
            if(matrix[i][j] == 1)
                c++;
        }
    }
 
    return c;
}
 
void SetShips()
{
    int s = 0;
    while(s < maxships)
    {
        int x = rand() % rows;
        int y = rand() % elements;
        if(matrix[x][y] != 1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
}
 
bool Attack(int x,int y)
{
    if(matrix[x][y] == 1)
    {
        matrix[x][y] = 2;
        return true;
    }
    return false;
}
 
int main()
{
    srand(time(NULL));
    Clear();
    SetShips();
    int pos1,pos2;
    char prompt;
    while(1)
    {
        cout << "Please input location: "; cin >> pos1 >> pos2;
        if(Attack(pos1,pos2))
            cout << "You got me! :)" << endl;
        else
            cout << "Sorry no ship at that position!" << endl;
        cout << "Number of ships left: " << NumberOfShips() << endl;
        cout << "Do you want to surrender (y/n)? "; cin >> prompt;
        if(prompt == 'y')
            break;
    }
    cout << "Game over!" << endl;
    Show();
    system("pause");
    return 0;
}*/