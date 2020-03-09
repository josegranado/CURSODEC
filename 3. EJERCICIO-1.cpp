#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	//SE DESCLARAN LAS VARIABLES X,Y,Z DONDE SE GUARDAN LOS VALORES.
	//TAMBIÉN SE DECLARA LA VARIABLE R EN DONDE SE GUARDARA LA RESPUESTA.
	int x=0, y=0, z=0, r = 0;
	//SE IMPRIME EN PANTALLA LA DESCRIPCIÓN DEL EJERCICIO
	cout<<"Esto es un programa que resta tres numero enteros \n"<<endl;
	//SE IMPRIME EN PANTALLA LA SOLICITUD DEL PRIMER NUMERO.
	cout<<"Ingresa el primer numero: "<<endl;
	//SE GUARDA EL NUMERO EN LA VARIABLE X.
	cin>>x;
	//SE IMPRIME EN PANTALLA LA SOLICITUD DEL SEGUNDO NUMERO.
	cout<<"Ingresa el segundo numero: "<<endl;
	//SE GUARDA EL NUMERO EN LA VARIABLE Y.
	cin>>y;
	//SE IMPRIME EN PANTALLA LA SOLICITUD DEL TERCER NUMERO.
	cout<<"Ingresa el tercer numero: "<<endl;
	//SE GUARDA EL NUMERO EN LA VARIABLE Z.
	cin>>z;
	//SE OPERA LA RESTA EN LA VARIABLE R.
	r = ((x-y)-z);
	//SE IMPRIME EL RESULTADO.
	cout<<"El resultado de la resta es :"<<r<<endl;
	// SALTO DE LINEA POR MOTIVOS ESTETICOS.
	cout<<"\n";
	// LLAMADA AL SISTEMA PARA QUE NO SE CIERRE AL IMPRIMIR EL RESULTADO.
	system("pause");
	// FINALIZA EL PROGRAMA RETORNANDO 0
	return 0;
}
