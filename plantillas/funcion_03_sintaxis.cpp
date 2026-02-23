/* 
 * Pasar los argumentos por valorr 
 * Función tipo void
 */ 
#include <iostream>
#include <ostream>

// Declaración
void intercambioPorValor(int, int);

// Programa principal
int main() {
    int a{1};
    int b{-7};

    intercambioPorValor(a, b);
    std::cout << "a = " << a;
    std::cout << "b = " << b << std::endl;
}

// Implementacion
double f(double x)
{
    /*
     *
     */ 
    return 3.75*pow(x,3)-2.6134*pow(x,2) + 5.2;
};
