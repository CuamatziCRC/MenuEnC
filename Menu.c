//Programa en C 
//Suma de dos flotantes con metodos por paso de valores.
//Librerias
#include <stdio.h>
	
	//Declaracion de funciones
	float suma (float operando1, float operando2);
	float area_cuadrado(float lado);
	float area_circulo(float radio);
	void menu();

	//Programa principal(MAIN)

	 int main()
	{
		
		//llamado al metodo 
		menu();
		//Valor de retorno
		return 0;
	}

	//Definicion de funciones
	float suma(float operando1, float operando2){
		return operando1 + operando2 ;
	}

	float area_cuadrado(float lado){
		return (lado*lado);
	}

	float area_circulo(float radio){
		return ( 3.1416 * (radio * radio));
	}

	void menu(){

		int opcion;

		do{
		printf("MENU \n");
		printf("1 - Suma\n");
		printf("2 - Area cuadrado\n");
		printf("3 - Area del circulo\n");
		printf("4 - salir\n");
		printf("Por favor digite una opcion => ");
		scanf("%d",&opcion);

			switch (opcion){
					case 1:
						printf("La suma es :%.2f \n",suma(3.5,6.5));
						break;
					case 2:
						printf("El area del cuadrado es :%.2f\n",area_cuadrado(5.5));
						break;
					case 3:
						printf("El area del circulo es :%.2f\n",area_circulo(4.5));
						break;
					default:
					if (opcion < 1 || opcion > 4)
					{
						printf("La opcion es invalida !\n");
						printf("Digite nuevamente por favor\n");
					}
			}

		}while(opcion != 4);
	}