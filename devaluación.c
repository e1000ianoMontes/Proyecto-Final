//Calculadora de devaluación:))))

#include<stdio.h>
#include<stdlib.h>
int main()

{
	//Cambiamos el color de fondo y el color del texto
	
	system("color 3F");
	
	// Mensaje de presentación
	
	printf("\n\n\t\t\tCalculadora de devaluaci\242n anual de veh\241culo\n\n");
	
	// Declaramos variables
	
	int tiempo, op, repetir;
	float costo, valor;
	
	// Damos los años a calcular (opciones)
	
	printf("1) Un a\244o\t7) 7 a\244os\n2) 2 a\244os\t8) 8 a\244os\n3) 3 a\244os\t9) 9 a\244os\n4) 4 a\244os\t10) 10 a\244os\n5) 5 a\244os\t11) 11 a\244os\n6) 6 a\244os\t12) 12 a\244os\n");
	
	do
	{
		
	// Dejamos opciones a escoger 
	
		printf("Elige los a\244os de devaluaci\242n a calcular: ");
		scanf("%d",&op);
	
			switch(op)
		{
			
			// Ingresamos el costo del vehículo
			
			case 1: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= costo*.85;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 2: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (costo*.85)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 3: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= ((costo*.85)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 4: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (((costo*.85)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 5: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= ((((costo*.85)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 6: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (((((costo*.85)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 7: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= ((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 8: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 9: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= ((((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 10: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (((((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 11: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= ((((((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
			case 12: 
			printf("Por favor ingrese el costo inicial del veh\241culo y presione enter\n");
			scanf("%f",&costo);
			valor= (((((((((((costo*.85)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90)*.90;
				printf("Este es el valor final de su auto: %.2f \n",valor);
			
				break;
				
			default:
			printf("Tu veh\241culo ya no se puede devaluar m\240s!!! m\240ximo de 12 a\244os\n");
				
			break;
		}
		
		//Damos la opción de volver a usar la calculadora o la opción de abandonar el programa
		
		printf(" \nSi desea volver a calcular la devaluaci\242n oprima 1 y luego enter\n");
		printf("De lo contrario presione cualquier n\243mero y enter \n");
		scanf("%d", &repetir);
	}
	while(repetir==1);
	if(repetir!=1)
		
	//Despedida
	
	printf("Hasta luego :) vuelva pronto...");
	
	//Fin del programa

	return 0;
}










