//21-04
//PRIMERA TAREA C++
/*
Calculadora de Índice de Masa Corporal (IMC) con Categorización
Este ejercicio refuerza el uso de tipos de datos float, operaciones aritméticas y la lectura de 
múltiples datos, similar a los ejercicios de notas y catetos que viste.
Consigna:
Escribe un programa que solicite al usuario su peso (en kilogramos) y su altura (en metros). El 
programa debe:
1.	Calcular el IMC usando la fórmula:  
2.	Mostrar el resultado con una salida amigable.
3.	Reto extra: Aunque aún no profundizan en condicionales, intenta investigar cómo mostrar si el 
resultado es mayor a 25 (sobrepeso) usando una expresión lógica.
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	float peso, altura, imc;
	char corazon=3;
	cout<<"Ingrese su peso: "<<endl;
	cin>>peso;
	cout<<"Ingrese su altura: "<<endl;
	cin>>altura;
	imc=peso/(altura*altura);
	cout<<"\n\n";
	cout<<corazon<<corazon<<corazon;
	cout<<" Su IMC es: "<<imc<<" .Esto es un numero, el cambio esta en ti. "<<corazon<<corazon<<corazon<<endl;
	cout<<"\n\n";
	cout<<corazon<<" Esto le dara su resultado de sobrepeso (1)Si (0)No: "<<(imc>25)<<" "<<corazon<<endl;
	
	system("pause");
	return 0;
}*/
/*Sistema de Conversión de Divisas y Comisiones
Este ejercicio eleva la dificultad al requerir un manejo más preciso de las constantes y 
fórmulas encadenadas, como en el ejercicio del IVA y la media ponderada.
Consigna: Crea un programa para una casa de cambio en Perú. El programa debe:
1.	Solicitar el monto en Dólares que el usuario desea cambiar a Soles.
2.	Pedir el tipo de cambio actual (ejemplo: 3.75).
3.	Aplicar una tasa de comisión fija del 2% sobre el monto total en Soles resultante.
4.	Mostrar un "recibo" detallado en la salida estándar que incluya:
o	Monto original en dólares.
o	Valor equivalente en soles (antes de comisión).
o	El monto descontado por comisión.
o	El monto final neto que recibirá el cliente.
Requisito técnico: Utiliza double para asegurar la precisión de los decimales y organiza el 
código usando comentarios para separar la entrada, el proceso y la salida, tal como en tus 
ejemplos de clase.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double soles, dolares, cambioS, tasa, totalneto;
	cout<<"Bienvenido a la casa de cambio DOLARITO"<<endl;
	cout<<"Ingrese la cantidad de dolares que desea cambiar a soles: "<<endl;
	cin>>dolares;
	cout<<"Ingrese el tipo de cambio actual: "<<endl;
	cin>>cambioS;
	soles=dolares*cambioS;
	tasa=soles*0.02;
	cout<<"\n";
	cout<<"Su monto original en dolares es: "<<dolares<<endl;
	cout<<"\n";
	cout<<"Su monto convertido en soles es: "<<soles<<endl;
	cout<<"\n";
	cout<<"El monto descontado por comision es: "<<tasa<<endl;
	cout<<"\n";
	cout<<"El monto final neto que recibira es: "<<soles-tasa<<endl;
	cout<<"\n";
	cout<<"Gracias por utilizar la casa de cambio DOLARITO"<<endl;
	cout<<"\n";
	getch();
}