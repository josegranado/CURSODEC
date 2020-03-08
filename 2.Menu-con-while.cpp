#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	int opc = 1;
	int x = 0, y = 0;
	float r = 0;
	
	while(opc != 0)
	{
		
		system("cls");
		cout<<"MENU DE OPERACIONES BASICAS"<<endl;
		cout<<"1. SUMA"<<endl;
		cout<<"2. RESTA"<<endl;
		cout<<"3. MULTIPLICACION"<<endl;
		cout<<"4. DIVISIÓN"<<endl;
		
		cout<<"\n"<<endl;
		cout<<"INGRESE LA OPCIÓN QUE USTED PREFIERA:"<<endl;
		cin>>opc;
		
		switch( opc )
		{
			case 1:
			system("cls");
			cout<<"Ingresa el primer numero"<<endl;
			cin>>x;
			cout<<"Ingresa el segundo numero"<<endl;
			cin>>y;
			r = x + y;
			cout<<"El resultado de la suma es: "<<r;
			cout<<"\n";
			system("pause");
			break;
			case 2:
			system("cls");
			cout<<"Ingresa el primer numero"<<endl;
			cin>>x;
			cout<<"Ingresa el segundo numero"<<endl;
			cin>>y;
			r = x - y;
			cout<<"El resultado de la resta es: "<<r;
			cout<<"\n";
			system("pause");
			break;
			case 3: 
			system("cls");
			cout<<"Ingresa el primer numero"<<endl;
			cin>>x;
			cout<<"Ingresa el segundo numero"<<endl;
			cin>>y;
			r = x * y;
			cout<<"El resultado de la multiplicacion es: "<<r;
			cout<<"\n";
			system("pause");
			break;
			case 4:
			system("cls");
			cout<<"Ingresa el primer numero"<<endl;
			cin>>x;
			cout<<"Ingresa el segundo numero"<<endl;
			cin>>y;
			r = x/y;
			cout<<"El resultado de la división es: "<<r;
			cout<<"\n";
			system("pause");
			break;
		}
		
	}
}
