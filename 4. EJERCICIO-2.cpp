#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	//SE DECLARA UN ENTERO POSITIVO
	signed int n = 0;
	//SE IMPRIME LA INFORMACIÓN QUE RECIBE EL USUARIO
	cout<<"Este programa determina si en un numero entero positivo:"<<endl;
	cout<<"\n"<<endl;
	cout<<"1. Cuantos digitos posee..."<<endl;
	cout<<"\n"<<endl;
	cout<<"NOTA: EL LIMITE SON 5 DIGITOS."<<endl;
	system("pause");
	system("cls");
	//SE LE NOTIFICA AL USUARIO QUE INGRESE UN NUMERO PARA SU POSTERIOR LECTURA.
	cout<<"Ingresa el numero:"<<endl;
	cin>>n;
	//LA PRIMERA Y SEGUNDA CONDICIONAL VERIFICAN LOS DÍGITOS
	//LA TERCERA CONDICIONAL VERIFICA SI ES PAR O IMPAR
	if((n >= 0)&& (n < 10))
	{
		cout<<"El numero posee un digito..."<<endl;
	}
	else if ((n>=10)&&(n<100))
	{
		cout<<"El numero posee dos digitos..."<<endl;
	}
	else if ((n>=100)&&(n<1000))
	{
		cout<<"El numero posee tres digito..."<<endl;
	}
	else if ((n>=1000)&&(n<10000)&&)
	{
		cout<<"El numero posee cuatro digitos..."<<endl;
	}
	else if ((n>=10000)&&(n<100000))
	{
		cout<<"El numero posee cinco digitos..."<<endl;
	}
	system("pause");
	return 0;
}
