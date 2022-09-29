/*
Date: 28/09/22
Author: Ángel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: Proram that asks for the type of pizza and the ingredient, and prints at the end the pizza and the ingredients it has.
*/

#include <iostream>
using namespace std;

int main(){
    char pizza[20], ingrediente[20];

    cout<<"¿Qué pizza desea?\nVegetariana         No vegetariana\n";
    cin>>pizza;

    if(pizza[0] == 'v' || pizza[0] == 'V'){
        cout<<"Estos son los ingredientes de la pizza veegetariana:\n Pimiento        Tofu\n ¿Cuál quiere?\n";
        cin>>ingrediente;
        if (ingrediente[0] == 'p' || ingrediente[0] == 'P'){
            cout<<"Su pizza es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Pimiento\n";
        }else if (ingrediente[0] == 't' || ingrediente[0] == 'T'){
            cout<<"Su pizza es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Tofu\n";
        }else{
            cout<<"No entiendo";
        }
    }else if (pizza[0] == 'n' || pizza[0] == 'N'){
        cout<<"Estos son los ingredientes de la pizza no vegetariana:\n Peperoni        Jamón       Salmón\n ¿Cuál quiere?\n";
        cin>>ingrediente;
        if (ingrediente[0] == 'p' || ingrediente[0] == 'P'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Peperoni\n";
        }else if (ingrediente[0] == 'j' || ingrediente[0] == 'J'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Jamón\n";
        }else if (ingrediente[0] == 's' || ingrediente[0] == 'S'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Salmón\n";
        }else{
            cout<<"No entiendo";
        }
    }else{
        cout<<"No entiendo.";
    }

    return 0;
}