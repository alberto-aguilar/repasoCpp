/* 
 *  24 / 02 / 2026
 *  
 *  Mascota digital: Programar una mascota que coma, beba, juegue, tenga 
 *  nombre, duerma, estado físico, etc.
 *  No debemos dejar que muera la mascota.
 *
 *  Lo qué prácticamos es que los valores se salgan de rango (por ejemplo,
 *  que el hambre sea menor de 0 ni mayor a 100)
 *
 *  Pista:
 *  Atributos: nombre, hambre, energía  <- Los atributos son características
 *  Métodos: comer, jugar, dormir, estado  <- los métodos son acciones
 */ 

// Biblioteca
#include <iostream>
#include <cmath>
#include <string> 

    // #include "constantesFisicas.h"  // Para usar las ctes físicas usando
                                       // Fisica::  <- Libreria creada por 
                                       //              mi y gemini
                                       // el hf esta en: */tesis/plantillas
                                       //                */semestre7/cpp/plantillas
                                       //                */semestre8/cpp/plantillas
    // #include <vector>
    // #include <iomanip>


// Declaración de Funciones 


//  Clase                                                               
class Tamagotchi // El nombre de la clase es un sustantivo que empieza en Mayúscula
{                                                                       
//  Encapsulación                                                       
protected:                                                                
    // Miembro de Datos                                                 
    std::string nombre_{"Pepe"};
    int hambre_{20};  // Porcentaje de 0 a 100% -> Comienza en 100 al iniciar
    int energia_{100};
    int sed_{20};  // Empieza con 20% de sed para que en el tutorial le demos
                   // de beber


public:                                                                 
    // Miembro de Datos                                                 
    

    // Miembro de Métodos                                               
    void comer();
    void jugar();
    void dormir();
    void estadp();
    void beberAgua();
    

};  // Importante terminar con ";"


// Programa Principal
int main() 
{
    std::cout << "¡hola, mundo!" << std::endl;

}; // main


// Implementación de funciones
    


/*  ------------------------ Notas del programa ------------------------
 *
 *
 *
 *  ------------------------------ Teoría ------------------------------
 *
 *
 *
 */
