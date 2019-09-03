/**********************************************************
* Programa calculadora
* Trabajo Practico numero 1
* División 1E
* Autor: Julio Alejandro Baña
***********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main()
{
// Declaracion de variables del programa principal
    float operandoA=0;
    float operandoB=0;
//Ingreso de datos
    operandoA = pedirNumero();
    operandoB = pedirNumero();
// Se elige la opcion y se realiza la operacion devolviendo el resultado
    int opcion=0;
    do{
        opcion = menuOpciones();
        printf("\nLa operacion seleccionada fue: %d ",opcion);
        float resultado=0;
        float resultadoFactorialA=0;
        float resultadoFactorialB=0;

        switch(opcion){
            case 1:
                resultado = sumar(operandoA,operandoB);
                break;
            case 2:
                resultado = restar(operandoA,operandoB);
                break;
            case 3:
                resultado = multiplicar(operandoA,operandoB);
                break;
            case 4:
                resultado = dividir(operandoA,operandoB);
                if(operandoB == 0){
                    printf("\nERROR MATEMATICO- No se puede dividir por cero.\n");
                }
                break;
            case 5:
                resultadoFactorialA = factorialA(operandoA);
                resultadoFactorialB = factorialB(operandoB);
                if(resultadoFactorialA==0){
                        printf("\nEl factorial del operando A es: No se puede calcular el factorial de un numero negativo");
                }
                if(resultadoFactorialB==0){
                        printf("\nEl factorial del operando B es: No se puede calcular el factorial de un numero negativo");
                }
                if(resultadoFactorialA >0){
                    printf("\nEl factorial del operando A es: %f",resultadoFactorialA);
                }
                 if(resultadoFactorialB >0){
                    printf("\nEl factorial del operando B es: %f",resultadoFactorialB);
                }
                break;
            case 6:
                break;
           default:
                printf("\n***Opcion no valida reingrese Opcion nuevamente!!***");
                break;
           }
           if(opcion >=1 && opcion <= 4){
                 printf("\nEl resultado de la operacion es: %.2f ",resultado);
           }
    }
    while(opcion!=6);
    printf("\n***Saliste de la calculadora***");
}
