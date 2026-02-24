/* 
 *  17 / 02 / 2026
 *  He añadido comentarios    
 */ 

// Bibliotecas
#include <iostream>
#include <cmath>
    // #include <vector>
    // #include <iomanip>

// Constantes

// Funciones
void inicioCalculadora();
void seleccionOperacion(int );
void comprobarError(int );
void mostrarOperacion();
void mostrarResultado();
void cierreCalculadora();
double suma();
double resta();
double multiplicacion();
double division();

// Programa Principal
int main() 
{
    int seleccion;
    inicioCalculadora();
    seleccionOperacion(seleccion);
    comprobarError(seleccion);
}; // main


// Implementación de funciones
void inicioCalculadora()
{
    std::cout << "Calculadora de Beto" << std::endl;
    std::cout << " -------------------------------------------- " << "\n"
              << " Selecciona qué tipo de cálculo quieres hacer \n"
              << " 1. Suma \n"
              << " 2. Resta \n"
              << " 3. Multiplicación \n"
              << " 4. División \n"                
              << " -------------------------------------------- " 
              << std::endl;
};  // inicioCalculadora


void seleccionOperacion(int operacion)
{
    std::cin >> operacion;
}


void comprobarError(int operacion)
{
    if (operacion < 1 || operacion > 4 )
    {
         std::cout << "opción invalida, por favor vuelve a intentar \n"
                   << "seleccionando una opción valida de 1 a 4" 
                   << std::endl;
         
         exit(1);
    };
}


void cierreCalculadora()
{
    std::cout << "Adios :)" << std::endl;

    exit(1);
};


/*
 *  ------------------------ Notas del programa ------------------------
 *
 *
 *
 *
 *
 *  ------------------------------ Teoría ------------------------------
 *
 *
 *
 *
 *
 */
