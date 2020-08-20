/* Este programa es para realizar operaciones entre dos numeros complejos
  Autor:Mariana Herrera y  Karin Lugo 
  Licencia: Comercial
  Versión: 1.0
  */

/* inclusión de librerias */
#include<stdio.h>

/* inclusión de prototipos */
void pedir_valores (float *num1, float *num2, float *num1i, float *num2i);



/* Código principal */
int main (void) // esta es la función principal
{       
	float numero1 = 0, numero2 = 0,numero1i = 0, numero2i = 0, resultado = 0, resultadoi = 0;   
	int  num3 = 0 ; 

	pedir_valores (&numero1, &numero2, &numero1i, &numero2i);
	// pide al usuario ingresar la opción correspondiente a la operación deseada
	
	printf( "ingrese el valor correspondiente a la operación deseada\n");
	printf( "para la suma presione 1\n");
	printf("para la resta presione 2\n");
	printf("para la multiplicación 3\n");
	printf("para la división presione 4\n");
	scanf("%d",&num3);
	
	// muestra al usuario los opciones que ingreso
	printf("el primer valor real es : %f\n", numero1);
	printf("el segundo valor real es : %f\n", numero2);
	printf("el primer valor imaginario es : %f\n", numero1i);
	printf("el segundo valor imaginario es : %f\n",numero2i);
	
	// realiza la operación deseada con base en los datos suministrados por el usuario



	if ( num3 == 1) 
	{
	       	resultado = numero1 + numero2; 
		resultadoi = numero1i + numero2i;
		printf ( "La suma de estos números complejos es : %f+ %fi\n",resultado,resultadoi);	

	}
	else
       	{

		if (num3 == 2)
	       	{
			resultado = numero1 - numero2;
		      	resultadoi = numero1i - numero2i;
			printf( "La resta de estos números complejos es : %f+%fi\n",resultado,resultadoi);

		}
		else
	       	{
		       if (num3 == 3)
		       {
			resultado = numero1 * numero2 - numero1i * numero2i;
			resultadoi = numero1 * numero2i + numero2 * numero1i; 
			printf("La multiplicacion de estos números complejos es : %f+%fi\n", resultado,resultadoi);
		       }
		       else
		       {
			       if (num3 == 4)
				{
			       resultado = ((numero1 * numero2) + (numero1i * numero2i))/ (numero2 * numero2) - (numero2i * numero2i);
			       resultadoi = ((numero2 * numero1i) + (numero1 * numero2i))/(numero2 * numero2) - (numero2i * numero2i);
			       printf( "La division de estos números complejos : %f+%fi\n", resultado, resultadoi);
				}
			       else 
			       { printf( " El número ingresado no corresponde a ninguna operación\n");
			       }
		       }
		}
	}	

}

void pedir_valores (float *num1, float *num2, float *num1i, float *num2i)
{ 
	printf("ingrese el primer número real a operar :  "); 
	scanf ("%f",&(* num1));
	printf("ingrese el segundo número real a operar : ");
	scanf ("%f",&(* num2));
	printf("ingrese el primer número complejo a operar: ");
	scanf ("%f", &(* num1i));
	printf("ingrese el segundo número complejo a operar: ");
	scanf ("%f", &(* num2i));
}




