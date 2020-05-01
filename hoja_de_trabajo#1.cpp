/*En la pizzeria "gran sabor" se tiene las siguientes ofertas
por la compra de una pizza grande Q80.00
recibie un descuento de 10%
por la compra de un pizza familir Q115
recibe un decuento de 15%
por la compra de una pizza fiesta Q100
recibie un dexsunto de 20%
solicitar el tipo de pizza, el precio unitario y 
el precio a pagar 
grabar los datos a un arcivo y mostrar el total
global de la venta del dia y determinar el total 
de lo vendido por producto,
mostando tambien el porcentaje con relacion al total.*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main(){
	
	int n;
	int n1;
	int grande=80;
	int familiar=115;
	int fiesta=100;
	float des1;
	float des2;
	float des3;
	
	ofstream guardar;
	guardar.open("pizzeria_gran_sabor.txt",ios::app);
	
	
	do{
	
	system("CLS");
	cout<<"ingrese su pedido"<<endl;
	cout<<"1. pizza grande Q.80"<<endl;
	cout<<"2. pizza familiar Q115"<<endl;
	cout<<"3. pizza fiesta Q.100"<<endl;
	cin>>n;
	
	if (n==1){
		cout<<"pizza grande"<<endl;
		
		des1=grande*0.10;
		cout<<"su descuento es de: Q."<<des1;
		cout<<"\ntotal a pagar: Q."<<grande-des1;
		 
		guardar<<"pizza grande"<<endl;
		guardar<<"su descuento es de Q."<<des1<<endl;
		guardar<<"total a pagar Q."<<grande-des1<<endl;
		
		
	}
	if (n==2){
		cout<<"pizza familiar"<<endl;
		
		des2=familiar*0.15;
		cout<<"su descuento es de: Q."<<des2;
		cout<<"\ntotal a pagar: Q."<<familiar-des2;
		
		guardar<<"pizza familiar"<<endl;
		guardar<<"su descuento es de: Q."<<des2<<endl;
		guardar<<"\ntotal a pagar: Q."<<familiar-des2<<endl;
		
	}
	if (n==3){
		cout<<"pizza fiesta"<<endl;
		
		des3=fiesta*0.20;
		cout<<"su descuento es de: Q."<<des3;
		cout<<"\ntotal a pagar: Q."<<fiesta-des3;
		
		guardar<<"pizza fiesta"<<endl;
		guardar<<"su descuento es de: Q."<<des3<<endl;
		guardar<<"\ntotal a pagar: Q."<<fiesta-des3<<endl;
		
	}
	cout<<"\n1)permanecer en el menu 2)salir";
	cin>>n1;
}
   while (n1==1);
   system("PAUSE");
	
	
	
	
	return 0;
}