/* 
 * SEparación de la Dee y la implementación 
 */ 
#include <iostream>
#include <cmath>

// Declaración
double f(double);

// Programa principal
int main() {
    double x{13.2};
    std::cout << f(x) << std::endl; 
};

// Implementacion
double f(double x)
{
    /*
     *
     */ 
    return 3.75*pow(x,3)-2.6134*pow(x,2) + 5.2;
};
