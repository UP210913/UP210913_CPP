/*
Date: 05/10/22
Author: Angel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that ask to user a quantity of products and his price. Then, print the final price to pay.
*/

#include <iostream>
using namespace std;

int main(){
    int products=1;
    float price, total, multi;

    while(products>0){
        cout<<"Enter the number of products: ";
        cin>>products;
        cout<<"Enter the price of product: ";
        cin>>price;
        multi=products*price;
        total+=multi;
        multi=0;
    }
    cout<<"The final price is: " <<total;

    return 0;
}