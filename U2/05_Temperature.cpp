/*
Date: 03/10/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Program that ask to user 6 temperatures, then take the average and print the highest and lowest temperature.
*/

#include <iostream>
using namespace std;

int main(){
    float temperature, average, high, low, suma=0;
    int i=0;
    while(i!=6){
        cout<<"Enter a temperature: \n";
        cin>>temperature;
        suma+=temperature;
        if(i=0){
            high=temperature;
            low=temperature;
        }
        if(temperature<low){
            low=temperature;
        }else if(temperature>high){
            high=temperature;
        }
        temperature=0;
        i++;
    }
    average=suma/6;
    cout<<"The average temperature is " <<average <<"\n";
    cout<<"The highest temperature is " <<high <<"\n";
    cout<<"The lowest temperature is " <<low <<"\n";

    return 0;
}