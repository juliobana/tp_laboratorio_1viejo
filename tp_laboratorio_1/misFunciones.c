#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

/**
*\brief Las funciones (sumar,restar,multiplicar,dividir) calculan las operaciones entre dos numeros
*\param Operando A y operando B correspondiente al ingreso de numeros al usuario
*\return resultado de la operacion Operando A y Operando B
*/

 float sumar(float numeroA, float numeroB){
	 return numeroA+numeroB;
 }
 float restar(float numeroA, float numeroB){
	 return numeroA-numeroB;
}

 float multiplicar(float numeroA, float numeroB){
	 return numeroA*numeroB;
}

 float dividir(float numeroA, float numeroB){
	 if(numeroB == 0){
        printf("\n\n El numero B es cero.");
        return 0;
	 }
	 return numeroA/numeroB;
}

/**
*\brief La funcion (factorialA) calcula el factorial de un numero positivo
*\param Numero A ingresado por usuario
*\return El factorial del numero positivo.
*/

float factorialA(float numeroA){
   float factorial=1;
   if(numeroA >=0){
        if(numeroA ==0){
            return 1;
        }else{
            for(int i= 1 ; i <= numeroA ;i++ ){
                 factorial = i * factorial;
            }
            return factorial;
        }
   }return 0;
}

/**
*\brief La funcion (factorialB) calcula el factorial de un numero positivo
*\param Numero B ingresado por usuario
*\return El factorial del numero positivo.
*/

float factorialB(float numeroB){
    float factorial=1;
    if(numeroB >=0){
        if(numeroB ==0){
            return 1;
        }else{
            for(int i= 1 ; i <= numeroB ;i++ ){
                 factorial = i * factorial;
            }
            return factorial;
        }
    }return 0;
}

/**
*\brief La funcion (pedirNumero) pide y devuelve un numero
*\param No recibe parametros
*\return El numero pedido al usuario
*/

float pedirNumero(){
    float numero;
    printf("\nIngrese numero\n");
    scanf("%f",&numero);
    printf("\nNumero ingresado: %.2f ",numero);
    return numero;
}

/**
*\brief La funcion (menuOpciones) muestra todas las operaciones posibles de la calculadora
*\param No recibe parametros
*\return la opcion elegida de la operacion del menu
*/

int menuOpciones(){
    int opcionFuncion;
    printf("\n***TP1 programa calculadora***");
    printf("\nOpcion 1 : Sumar");
    printf("\nOpcion 2 : Restar");
    printf("\nOpcion 3 : Multiplicar");
    printf("\nOpcion 4 : Dividir");
    printf("\nOpcion 5 : Factorial");
    printf("\nOpcion 6 : Salir");
    printf("\nIngrese una opcion:");
    scanf("%d",&opcionFuncion);
    return opcionFuncion;
}
