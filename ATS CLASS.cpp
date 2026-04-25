//1 Entrada y salidas 
//Primer programa en c++
/* Salida de texto
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	cout<<"Hello World again :)"<<endl;
	cout<<"\n";
	system("pause");
	return 0;
}*/
//02 Tipos de datos basicos
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero=15; //Tipo de datos enteros(int)
	float decimal = 3.1415; //Tipo de datos decimales(float)
	double mayor = 3.1235425213424234124234;  //Para numeros grandes (double)
	char letra = 'f'; //Para una letra (char)
	cout<<"Tu numero es \n"<<numero<<endl;
	cout<<"\n";
	cout<<"Tu numero es \n"<<decimal<<endl;
	cout<<"\n";
	cout<<"Tu numero es \n"<<mayor<<endl;
	cout<<"\n";
	cout<<"Tu letra es \n"<<letra<<endl;
	cout<<"\n";
	return 0;
	getch();
}*/
//03 Lectura o entrada de datos
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero=0; //definiendo variable
	float decimal=0;
	cout<<"Ingresa un numero: "<<endl;
	cin>>numero;
	cout<<"Tu numero es: "<<numero<<endl;
	cout<<"Ingresa un decimal: "<<endl;
	cin>>decimal; //Ingresando dato
	cout<<"Tu numero es: "<<decimal<<endl;
	
	
	system("pause");
	return 0;
}*/
//04 Ejercicio 1
/*Escibe un programa que lea de la entrada estandar dos numeros y muestre en la salida
estandar su suma, resta, multiplicacion y division
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double num1=0, num2=0; //si quiero que mi resultado salga con todos los digitos
	double suma=0, resta=0; //tengo que inicializar con double para que mi resultado
	double multiplicacion=1; //tambien sea double
	double division;
	cout<<"Ingrese su primer numero para las operaciones matematicas: "<<endl;
	cin>>num1;
	cout<<"Ingrese su segundo numero para las operaciones matematicas: "<<endl;
	cin>>num2;
	suma=num1+num2;
	resta=num1-num2;
	multiplicacion=num1*num2;
	division=num1/num2;
	cout<<"La suma de estos dos numeros es: "<<suma<<endl;
	cout<<"La resta de estos dos numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de estos dos numeros es: "<<multiplicacion<<endl;
	cout<<"La division de estos dos numero es: "<<division<<endl;
	
	getch();
	return 0;
}*/
//Ejercicio 02
/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la 
salida estandar el precio del producto al aplicarle el IVA
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double precioP=0, iva=0;
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precioP;
	iva=precioP*0.18;
	cout<<"El precio en total es: "<<precioP+iva<<endl;
	
	
	system("pause");
	return 0;
}*/
//Ejercicio 03
/*Realice in programa que lea de la entrada estandar los siguientes datos de una persiona:
	Edad: dato de tipo entero.
	Sexo: dato de tipo caracter.
	Altura en metro: datos de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estandar
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int edad=0;
	char sexo[20]; //se utiliza para que sea mas de un caracter o una palabra entera
	float altura=0;
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo (M) masculino o (F) femenino: "<<endl;
	cin>>sexo;
	cout<<"Ingrese su altura: "<<endl;
	cin>>altura;
	cout<<"Su edad es: "<<altura<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	
	
	
	getch();
	return 0;
}*/
//Ejercicio 4
/*Ejecute el programa del ejercicio anterior con entradas erroneas y observe los resultados. 
Por ejemplo, introduzca un dato de tipo caracter cuando se espera un dato de tipo entero
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char edad=0;
	int sexo[20];
	int altura;
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo (M) masculino o (F) femenino: "<<endl; //aqui falla
	cin>>sexo[20];
	cout<<"Ingrese su altura: "<<endl;
	cin>>altura;
	cout<<"Su edad es: "<<altura<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	getch();
	return 0;
}*/
//2 Expresiones
//06 Escriba la siguiente expresion
/*01 Escriba la siguiente expresion: a/b +1 en c++
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double a,b,division, total=0;
	cout<<"Ingrese el primer numero para el ejercicio: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero para el ejercicio: "<<endl;
	cin>>b;
	division =a/b;
	total=division+1;
	cout<<"El resultado del ejercicio es: "<<total<<endl;	
	system("pause");
	return 0;
}*/
/*02 Escriba la siguiente expresion : (a+b)/(c+d) a c++
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double a,b,c,d, suma1=0, suma2=0, division=1;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d: "<<endl;
	cin>>d;
	suma1=a+b;
	suma2=c+d;
	division=suma1/suma2;
	cout<<"El resultado es: "<<division<<endl;
	getch();
	return 0;
}*/
/*03 Escribel la sguiente expresion a c++: (a+(b/c))/(d+(e/f))
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double a,b,c,d,e,f, divi1=1,divi2=1, suma1=0, suma2=0, diviM=1;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d: "<<endl;
	cin>>d;
	cout<<"Ingrese el valor de e: "<<endl;
	cin>>e;
	cout<<"Ingrese el valor de f: "<<endl;
	cin>>f;
	divi1=b/c;
	divi2=e/f;
	suma1=a+divi1;
	suma2=d+divi2;
	diviM=suma1/suma2;
	cout<<"El resultado es : "<<diviM<<endl;
	
	
	system("pause");
	return 0;
}*/
/*04 Ejercicio: Escribe la siguiente expresion como c++: a+(b/(c-d))
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double a,b,c,d,resta=0, divi=1,total=0;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d: "<<endl;
	cin>>d;
	resta=c-d;
	divi=b/resta;
	total=a+divi;
	cout<<"El total es: "<<total<<endl;
	
	
	getch();
	return 0;
}*/
/*05 Escriba un fragmento de programa que intercambie los valores de dos variables
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a=10, b=20, y;
	cout<<"Los valores al iniciar eran :"<<a<<" y "<<b<<endl;
	y=a;
	a=b;
	b=y;
	cout<<"Los valores ahora son: "<<a<<" y "<<b<<endl;
	system("pause");
	return 0;
}*/
/*06 Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media 
de los cuatro alumnos
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float nota1,nota2,nota3,nota4,sumaN, notaM;
	cout<<"Ingrese la nota del primer alumno: "<<endl;
	cin>>nota1;
	cout<<"Ingrese la nota del segundo alumno: "<<endl;
	cin>>nota2;
	cout<<"Ingrese la nota del tercer alumno: "<<endl;
	cin>>nota3;
	cout<<"Ingrese la nota del cuarto alumno: "<<endl;
	cin>>nota4;
	sumaN=nota1+nota2+nota3+nota4;
	notaM=sumaN/4;
	cout<<"El promedio de las cuatro notas es: "<<notaM<<endl;
	getch();
	return 0;
}*/
/*07 La calificaion final de un estudiante es la media ponderada de tres notas: la nota de 
practicas  que cuenta un 30% del total, la nota teorica que cuenta un 60% y la nota de 
participacion que cuenta un 10% restantes. Escriba un programa que lea de la entrada estandar 
las tres notas de un alumno y escriba en la salida estandar su nota final.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float notaP, notaT, notaPA,notaP1, notaT1, notaPA1, sumaT=0;
	cout<<"Ingrese la nota de practica: "<<endl;
	cin>>notaP;
	cout<<"Ingrese la nota de teoria: "<<endl;
	cin>>notaT;
	cout<<"Ingrese la nota de participacion: "<<endl;
	cin>>notaPA;
	notaP1=notaP*0.3;
	notaT1=notaT*0.6;
	notaPA1=notaPA*0.1;
	sumaT=notaP1+notaT1+notaPA1;
	cout<<"Su nota final es: "<<sumaT<<endl;
	
	system("pause");
	return 0;
}*/
/*08 Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo 
y escriba en la salida estandar su hipotenusa
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float cat1, cat2, cuad1, cuad2, suma=0, hipo;
	cout<<"Ingrese el primer cateto: "<<endl;
	cin>>cat1;
	cout<<"Ingrese el segundo cateto: "<<endl;
	cin>>cat2;
	hipo=sqrt((pow(cat1,2))+(pow(cat2,2)));
	cout<<"La hipotenusa es: "<<hipo<<endl;
	getch();
	return 0;
}*/
/*09 Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la 
forma ax2+bx+c=0, teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y 
(-b-sqrt(pow(b,2))-4*a*c)/2*a     
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	float m=0,n=0,o=0, res1=0, res2=0;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>m;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>n;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>o;
	res1=(-n+sqrt((pow(n,2))-4*m*o))/(m*2);
	res2=(-n-sqrt((pow(n,2))-4*m*o))/(m*2);
	cout<<"El resultado positivo es: "<<res1<<endl;
	cout<<"\n";
	cout<<"El resultado negativo es: "<<res2<<endl;
	
	
	system("pause");
	return 0;
}*/