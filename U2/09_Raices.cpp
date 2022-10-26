/*
Date: 17/10/2022
Author: Angel oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double Ecuacion(float worth)
{
    return pow(worth, 2) - worth - 12;
}
int main()
{
    double a;
    double b;
    double c = (a + b) / 2;
    double ya = Ecuacion(a);
    double yb = Ecuacion(b);
    double yc = Ecuacion(c);
    float error = 0.01;
    float noRoot = 0;

    cout << "Enter the value of (a): ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of (b): ";
    cin >> b;
    cout << endl;

        cout << "\t" << "a" << "\t"
        << "\t" << "b" << "\t"
        << "\t" << "c" << "\t"
        << "\t" << "ya" << "\t"
        << "\t" << "yb" << "\t"
        << "\t" << "yc" << "\t" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << endl;

    do
    {
        c = (a + b) / 2;
        ya = Ecuacion(a);
        yb = Ecuacion(b);
        yc = Ecuacion(c);
        if (ya * yc < 0)
        {
            b = c;
        }
        else if (yc * yb < 0)
        {
            a = c;
        }
        else
        {
            noRoot = 1;
        }

        if (noRoot == 0)
        {
            cout << fixed;
            cout << setprecision(3) << "\t" << a << "\t"
            << "\t" << b << "\t"
            << "\t" << c << "\t"
            << "\t" << ya << "\t"
            << "\t" << yb << "\t"
            << "\t" << yc << "\t" << endl;
        }
        else
        {
            cout << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root." << endl;
        }
        
    } while ((abs(yc) >= error) && (noRoot != 1));

    cout << endl;

    return 0;
}