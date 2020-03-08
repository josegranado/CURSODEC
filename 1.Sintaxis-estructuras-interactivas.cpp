#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i;
	int w = 1; //VARIABLE BOOLEANA INICIALIZADA EN TRUE
	int x = 0;
	for(i = 0; i <= 10; i++)
	{
		//BLOQUE DE CODIGO A REPETIR
		// SE REPITE 11 VECES	
	}
	//EN TEORIA ESTE CICLO LEE INFINITOS NUMEROS, SOLO SI EL NUMERO ES MENOR A 20
	while (w == 1)
	{
		cin>>x;
		if (x >= 20) // CONDICION PARA VERIFICAR SI EL NUMERO ES MAYOR QUE 20
		{
			w = 0; // SI EL VALOR ES MAYOR A 20 CAMBIA EL VALOR DE LA VARIABLE
					// BOOLEANA A FALSO O 0 EN CUESTIÓN.
		}
	}
	//LO MISMO DE ARRIBA PERO CON SINTAXIS DE DO-WHILE
	do
	{
		cin>>x;
		if ( x >= 20)
		{
			w = 0;
		}	
	}
	while(w == 1)
}
