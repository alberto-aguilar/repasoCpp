/* 
 *  17 / 02 / 2026
 *  He añadido comentarios    
 */ 

// Bibliotecas
#include <iostream>
#include <cmath>
    // #include <stdexcept>
    // #include <vector>
    // #include <iomanip>

// Constantes

// Funciones
void inicioCalculadora(bool&, bool&);
void pedirDatos(double&, double&, char&);
void resultado(double&, double&, char&, bool&);
void otroCalculo(bool&);
void cierreCalculadora();


// Programa Principal
int main() 
{
    double num1, num2;
    char operacion;
    bool iniciar, opcionValida;


    do 
    {
         inicioCalculadora(iniciar, opcionValida);
         pedirDatos(num1, num2, operacion);
         resultado(num1, num2, operacion, opcionValida);
         otroCalculo(opcionValida);
    } while (opcionValida);
    cierreCalculadora();
}; // main


// Implementación de funciones
void inicioCalculadora(bool& iniciar, bool& opcionValida)
{
// 
    iniciar = true;
    opcionValida = iniciar;
    
    std::cout << " ---------------------------------------------\n"
              << "|            Calculadora de Beto             |\n"
              << "|     Por favor sigue las instrucciones      |\n"
              << " ---------------------------------------------"
              << std::endl;
}

void pedirDatos(double& num1, double& num2, char& operacion)
{

    std::cout << "Ingresa el primer número: " << std::endl;
    std::cin  >> num1;
    std::cout << std::endl;

    std::cout << " --------------------------------------------- " << "\n"
              << " Selecciona qué tipo de cálculo quieres hacer \n"
              << " (+) Suma \n"
              << " (-) Resta \n"
              << " (*) Multiplicación \n"
              << " (/) División \n"                
              << " --------------------------------------------- " 
              << std::endl;

    std::cin  >> operacion; 
    std::cout << std::endl;

    std::cout << "Ingresa el segundo número" << std::endl;
    std::cin  >> num2;
    std::cout << std::endl;

}

void resultado(double& num1, double& num2, char& operacion, bool& opcionValida)
{
    std::cout << "El resultado es: " << std::endl;
    switch(operacion)
    {
         case '+':
              std::cout << num1 + num2 << "\n" << std::endl;
              opcionValida = true;
              break;

         case '-':
              std::cout << num1 - num2 << "\n" << std::endl;
              opcionValida = true;
              break;
    
         case '*':
              std::cout << num1 * num2 << "\n" << std::endl;
              opcionValida = true;
              break;
    
         case '/':
              std::cout << num1 / num2 << "\n" << std::endl;
              break;
    
         default:
              std::cout << "\n NO SELECCIONASTE UNA OPCIÓN VALIDA. \n "
                        << "VUELVE A INTENTAR >:( \n" << std::endl;
    };

};  // resultado()


void otroCalculo(bool& opcionValida)
{
    bool seguir, reintentar;
    char reinicio;

    std::cout << " ¿Quieres hacer otro cálculo? (s/n)" << std::endl;
    
    do
    {
         std::cin  >> reinicio;
         switch(reinicio)
         {
              case 's': 
              case 'S':  
                   seguir = true;
                   reintentar = false;
                   break;

              case 'n': 
              case 'N': 
                   seguir = false;
                   reintentar = false;
                   break;

              default:
                   std::cin.clear();   
                   std::cout << "Opcion no valida, por favor reintenta." 
                             << std::endl;

                   reintentar = true;
                   break;
         }
    } while (reintentar);

    std::cout << std::endl;

    std::cin.clear();   
    if (seguir != opcionValida)
    {
         opcionValida = false;    
    }
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
