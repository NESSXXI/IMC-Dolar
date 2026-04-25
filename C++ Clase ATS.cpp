/*Mi primer Hola Mundo
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	cout<<"Hola Mundo :D"<<endl;
	system("pause");
	return 0;
}*/
/*Tipos de datos basicos
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero=15; //dato entero que no tiene decimal
	float decimal=13.5343; //dato decimal y de mayor cantidad
	double mayor=16.343242; //dato para numeros mayores
	char caracter='A'; //dato para un caracter y numero tmbn
	cout<<caracter<<endl;//imprimimos
	
	
	getch();
	return 0;
}*/
/*Lectura o entrada de datos
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero; // "//": para realizar un comentario
	float flotante;
	cout<<"Digite un numero"<<endl;
	cin>>flotante; //cin: para guardar un dato
	cout<<"Su numero es: "<<flotante<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 1: Escribe un programa que lea de la entrada estándar dos números y muestre en 
la salida estándar su suma, resta, multiplicación y división.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int pnumero, snumero, suma=0, resta=0;
	float multiplicacion=0, division=0;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>pnumero;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>snumero;
	suma=pnumero + snumero; // +:sumar
	resta= pnumero - snumero;// -:resta
	multiplicacion= pnumero*snumero; // *:multiplicacion
	division= pnumero / snumero; // /:division
	cout.precision(4); //Para dar la cantidad de decimales
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	getch();                                             
	return 0; 
}*/
/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en 
la salida estándar el precio del producto al aplicarle el IVA.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int precio=0, ivap=0, total=0;
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precio;
	ivap=precio*0.18;
	total=precio+ivap;
	cout<<"El IVA del producto es: "<<ivap<<endl;
	cout<<"El total del producto es: "<<total<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de 
una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int edad=0;
	char sexo;
	float altura=0;
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo: "<<endl;
	cin>>sexo;
	cout<<"Ingrese su altura: "<<endl;
	cin>>altura;
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su genero es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;	
	getch();
	return 0;
}*/
/*Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe 
los resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato 
de tipo entero.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int edad=0;
	char sexo;
	float altura=0;
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su sexo: "<<endl;
	cin>>sexo;
	cout<<"Ingrese su altura: "<<endl;
	cin>>altura;
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su genero es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 1: Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float a, b, division=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
	division=a/b;
	cout.precision(4);
	cout<<"El total de la operacion es: "<<division+1<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float a, b, c, d;
	float suma1=0, suma2=0;
	float total=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>c;
	cout<<"Ingrese el curato numero: "<<endl;
	cin>>d;
	suma1=a+b;
	suma2=c+d;
	total=suma1/suma2;
	cout.precision(5); //Para elegir la cantidad de decimales que tendra el resultado
	cout<<"El resultado de la operacion es: "<<total<<endl;
	
	system("pause");
	return 0;
}*/
/*Ejercicio 3: Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float a, b, c, d, e, f, division1=1, division2=1, suma1=0, suma2=0, total=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>c;
	cout<<"Ingrese el cuarto numero: "<<endl;
	cin>>d;
	cout<<"Ingrese el quinto numero: "<<endl;
	cin>>e;
	cout<<"Ingrese el sexto numero: "<<endl;
	cin>>f;
	division1=b/c;
	division2=e/f;
	suma1=a+division1;
	suma2=d+division2;
	total=suma1/suma2;
	cout.precision(4);
	cout<<"El resultado es: "<<total<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 4: Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float a, b, c, d, resta=0, division=0, suma=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>c;
	cout<<"Ingrese el cuarto numero: "<<endl;
	cin>>d;
	resta=c-d;
	division=b/resta;
	suma=a+division;
	cout.precision(5);
	cout<<"El resultado de la operacion es: "<<suma<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos 
variables.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double a=0, b=0, c=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero numero: "<<endl;
	cin>>b;
	c=a; //A "c" le damos el valor de "a", y "a" queda vacio
	a=b; //A "a" le damos el valor de "b", y "b" queda vacio
	b=c; //A "b" le damos el valor de "c"
	cout<<"El primer numero intercambiado es: "<<a<<endl;
	cout<<"El segundo numero intercambiado es: "<<b<<endl;
	
	getch();
	return 0;
}*/
/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la 
nota final media de los cuatro alumnos.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float a, b, c, d, promedio=0, suma=0;
	cout<<"Ingrese la primera nota: "<<endl;
	cin>>a;
	cout<<"Ingrese la segunda nota: "<<endl;
	cin>>b;
	cout<<"Ingrese la tercera nota: "<<endl;
	cin>>c;
	cout<<"Ingrese la cuarta nota: "<<endl;
	cin>>d;
	suma=a+b+c+d; //sumamos las cuatro notas
	promedio=suma/4; //Y promediamos dividiendola entre cuatro 
	cout<<"El promedio de los cuatro alumnos es: "<<promedio<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres notas: 
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la 
nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada 
estándar las tres notas de un alumno y escriba en la salida estándar su nota final.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float nota1, nota2, nota3, practica=0, teorica=0, participacion=0, final=0;
	cout<<"Ingrese la nota de practica: "<<endl;
	cin>>nota1;
	cout<<"Ingrese la nota teorica: "<<endl;
	cin>>nota2;
	cout<<"Ingrese la nota de participacion: "<<endl;
	cin>>nota3;
	practica=0.3*nota1;
	teorica=0.6*nota2;
	participacion=0.1*nota3;
	final=practica+teorica+participacion;
	cout<<"La nota final: "<<final<<endl; 
	
	getch();
	return 0;
}*/
/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de 
un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	float a=0, b=0, cuad1=0, cuad2, suma=0, hipo=0;
	cout<<"Ingrese el primer cateto: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo cateto: "<<endl;
	cin>>b;
	cuad1=pow(a,2); //Con el pow elevamos al cuadrado
	cuad2=pow(b,2);
	suma=cuad1+cuad2;
	hipo=sqrt(suma); //Con el sqrt sacamos raiz
	cout.precision(4); //Damos la cantidad de decimales
	cout<<"La hipotenusa es: "<<hipo<<endl;
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función para 
unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float x=0, y=0, resultado=1;
	cout<<"Ingrese el valor de 'x' : "<<endl;
	cin>>x;
	cout<<"Ingrese el valor de 'y' : "<<endl;
	cin>>y;
	resultado=sqrt(x)/(pow(y,2)-1);
	cout<<"El valor de la funcion es: "<<resultado<<endl;
	getch();
	return 0;
}*/
/*Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la 
forma ax^2 + bx + c = 0, teniendo en cuenta que: 
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	float a, b, c, priresultado=1, secresultado=1;
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	priresultado=(-b+(sqrt(pow(b,2))-4*a*c))/(2*a);
	secresultado=(-b-(sqrt(pow(b,2))-4*a*c))/(2*a);
	cout<<"Primer valor de 'x' :"<<priresultado<<endl;
	cout<<"Segundo valor de 'x' :"<<secresultado<<endl;
	
	
	system("pause");
	return 0;
}*/
//CONDICIONALES
/*La sentencia if
	if(condicion1){
		Instrucciones1;	
	}
	else(condicion2){
		Instrucciones2
	}
*/
/*#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero, dato=5;
	cout<<"Digite un numero: "<<endl;
	cin>>numero;
	if(numero==dato){//El "==" se utiliza para igualdad
		cout<<"Numero es igual a 5"<<endl;
	}else{
		cout<<"El numero es diferente de 5"<<endl;
	}
	getch();
	return 0;
}*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero=0, dato=5;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	if(numero!=dato){// "!=" se usa para hacer un diferente
		cout<<"El numero es diferente a 5"<<endl;
	}else{
		cout<<"El numero es igual a 5"<<endl;
	}
	
	
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero, dato=5;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	if(numero>=5){ // se usa ">" para referencia a mayor
		cout<<"El numero es mayor e igual a 5"<<endl;
	}else{
		cout<<"El numero es menor a 5"<<endl;
	}
	getch();
	return 0;
}*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero, dato=5;
	cout<<"Ingrese un numero:" <<endl;
	cin>>numero;
	if(numero<=5){ // se usa "<" para menor
		cout<<"El numero es menor e igual a 5"<<endl;
	}else{
		cout<<"El numero es mayor a 5"<<endl;
	}
	system("pause");
	return 0;
}*/
/*La sentencia Switch

	switch(expresion){
		case literal1:
			conjunto de instrucciones1; break;
		case literal2:
			conjunto de instrucciones2; break;
		case literaln:
			conjunto de instruccionesn; break;
		default:
			conjunto de instrucciones por degecto; break;
		}
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero=0;
	cout<<"Ingrese un numero 1-5: "<<endl;
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"El numero es 1"<<endl; break;
		case 2: cout<<"El numero es 2"<<endl; break;
		case 3: cout<<"El numero es 3"<<endl; break;
		case 4: cout<<"El numero es 4"<<endl; break;
		case 5: cout<<"El numero es 5"<<endl; break;
		default: cout<<"El numero no esta en el rango de 1 a 5"<<endl; break;
	}
	
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el 
mayor.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1=0, num2=0;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	if(num1>num2){
		cout<<"El mayor es: "<<num1<<endl;
	}else if(num1<num2){
		cout<<"El mayor es: "<<num2<<endl;
	}else{
		cout<<"Los dos numero son iguales"<<endl;
	}
	
	getch();
	return 0;
}*/
/*Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es 
el mayor.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num1=0, num2=0, num3=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>num3;
	if((num1>num2)&&(num1>num3)){
		cout<<"El numero mayor es: "<<num1<<endl;
	}else if((num2>num1)&&(num2>num3)){
		cout<<"El numero mayor es: "<<num2<<endl;
	}else if((num3>num1)&&(num3>num1)){
		cout<<"El mayor numero es: "<<num3<<endl;	
	}else if((num1>num2)||(num1>num3)){
		cout<<"El numero mayor es: "<<num1<<endl;
	}else if((num2>num1)||(num2>num3)){
		cout<<"El numero mayor es: "<<num2<<endl;
	}else if((num3>num1)||(num3>num1)){
		cout<<"El mayor numero es: "<<num3<<endl;
	}else{
		cout<<"Lo numeros son iguales"<<endl;
	}
	system("pause");
	return 0;
}*/
/*Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de 
un número par o impar.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	if(num==0){
		cout<<"El numero es cero"<<endl;
	}else if(num%2==0){
		cout<<"El numero es par"<<endl;
	}else{
		cout<<"El numero es impar"<<endl;
	}
	system("pause");
	return 0;
}*/
/*Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num=0;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	if(num==0){
		cout<<"El numero es cero"<<endl;
	}else if(num<0){
		cout<<"El numero es negativo"<<endl;
	}else{
		cout<<"El numero es positivo"<<endl;
	}
	getch();
	return 0;
}
*/
/*Ejercicio 5: Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula o no.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char vocal;
	cout<<"Ingrese una vocal mayuscula o minuscula: "<<endl;
	cin>>vocal;
	switch(vocal){
		case 'A': cout<<"Es una vocal mayuscula"<<endl; break;
		case 'E': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'I': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'O': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'U': cout<<"Es una vocal mayuscula"<<endl; break;
		case 'a': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'e': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'i': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'o': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'u': cout<<"Es una vocal minuscula"<<endl; break;
		default: cout<<"La letra no es una vocal"<<endl; break;
	}
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 6: Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no 
es una vocal.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char vocal;
	cout<<"Ingrese una vocal mayuscula o minuscula: "<<endl;
	cin>>vocal;
	switch(vocal){
		case 'A': cout<<"Es una vocal mayuscula"<<endl; break;
		case 'E': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'I': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'O': cout<<"Es una vocal mayuscula"<<endl; break; 
		case 'U': cout<<"Es una vocal mayuscula"<<endl; break;
		case 'a': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'e': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'i': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'o': cout<<"Es una vocal minuscula"<<endl; break; 
		case 'u': cout<<"Es una vocal minuscula"<<endl; break;
		default: cout<<"La letra no es una vocal"<<endl; break;
	}
	
	getch();
	return 0;
}*/
/*Ejercicio 7: Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25].
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int edad=0;
	cout<<"Ingresa tu edad: "<<endl;
	cin>>edad;
	if((edad>17)&&(edad<26)){
		cout<<"Su edad esta en el rango de 18-25"<<endl;
	}else{
		cout<<"Su edad esta fuera del rango de 18-25"<<endl;
	}
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después 
debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos 
con anterioridad.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float num1, num2, num3, num4;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>num3;
	cout<<"Ingrese el cuarto numero: "<<endl;
	cin>>num4;
	if(num1==num4){
		cout<<"El cuarto numero coincide con el primer numero"<<endl;
	}else if(num2==num4){
		cout<<"El cuarto numero coincide con el segundo numero"<<endl;
	}else if(num3==num4){
		cout<<"El cuarto numero coincide con el tercer numero"<<endl;
	}else{
		cout<<"El cuarto numero no coincide con ningun numero anterior ingresado"<<endl;
	}
	getch();
	return 0;
}*/
/*Ejercicio 9: Cambiar un número entero con el mismo valor pero en romanos.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero, unidad=0, decena=0, centena=0, mil=0;
	cout<<"Ingrese un numero para poder pasarlo a romano:"<<endl;
	cin>>numero;
	unidad=numero%10; numero/=10;
	decena=numero%10; numero/=10;
	centena=numero%10; numero/=10;
	mil=numero%10; numero/=10;
	switch(mil){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	switch(centena){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
	switch(decena){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
	}
	switch(unidad){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
	cout<<endl;
	
	system("pause");
	return 0;
}*/
/*Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int mes;
	cout<<"Ingrese el numero: "<<endl;
	cin>>mes;
	switch(mes){
		case 1: cout<<"El mes es Enero "<<endl; break;
		case 2: cout<<"El mes es Febrero "<<endl; break;
		case 3: cout<<"El mes es Marzo "<<endl; break;
		case 4: cout<<"El mes es Abril"<<endl; break;
		case 5: cout<<"El mes es Mayo"<<endl; break;
		case 6: cout<<"El mes es Junio"<<endl; break;
		case 7: cout<<"El mes es Julio"<<endl; break;
		case 8: cout<<"El mes es Agosto"<<endl; break;
		case 9: cout<<"El mes es Setiembre"<<endl; break;
		case 10: cout<<"El mes es Octubre"<<endl; break;
		case 11: cout<<"El mes es Noviembre"<<endl; break;
		case 12: cout<<"El mes es Diciembre"<<endl; break;
		default: cout<<"El numero ingresado no corresponde a ningun mes "<<endl; break;
	}
	
	getch();
	return 0;
}*/
/*Ejercicio 11: Hacer un programa que simule un cajero automático con un saldo inicial 
de 1000 Dólares.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int saldo=1000,opc;
	float ing=0, ret=0, total=0;
	cout<<"\t Bienvenido al cajero "<<endl;
	cout<<"1. Ingresar dinero "<<endl;
	cout<<"2. Retirar dinero "<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Ingrese su opcion: "<<endl;
	cin>>opc;
	switch(opc){
		case 1: cout<<"Coloque la cantidad de dinero a ingresar: "<<endl; cin>>ing;
			total= saldo+ing;
			cout<<"El total de su saldo es: "<<total<<endl; break;
		case 2: cout<<"Ingrese el dinero que desea retirar : "<<endl; cin>>ret;
			if(saldo<ret){
				cout<<"El retiro es incorrecto"<<endl;
			}else{
				total=saldo-ret;
				cout<<"El total de su saldo es: "<<total<<endl;
			}
			break;
		case 3: break;
	}
	cout<<endl;
	cout<<"\tGracias por usar el cajero"<<endl;
	
	system("pause");
	return 0;
}*/
/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int opc, numero=0, total=0;
	cout<<"\tBienvenido a tu calculadora"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Ingrese una opcion: "<<endl;
	cin>>opc;
	switch(opc){
		case 1: cout<<"Ingrese el numero: "<<endl; cin>>numero;
		total=pow(numero,3);
		cout<<"El resultado es: "<<total<<endl; break;
		case 2: cout<<"Ingrese un numero: "<<endl; cin>>numero;
		if(numero>0){
			if(numero%2==0){
				cout<<"El numero es impar "<<endl;
			}else{
				cout<<"El numero es impar "<<endl;
			}
		}else{
			cout<<"Ingrese un numero mayor a 0"<<endl;
		}
		break;
		case 3: break; 
	}
	cout<<"\tGracias por usar la calculadora "<<endl;
	getch();
	return 0;
}*/
/*La sentencia while

	while(expresion logica){
		conjunto de instrucciones;
	}
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i;
	i=1;
	while(i<=10){
		cout<<i<<endl;
		i++;
	}

	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	i=10;
	while(i>=1){
		cout<<i<<endl;
		i--;
	}
	
	getch();
	return 0;
}*/
/*La sentencia do while

	do{
		conjunto de instrucciones;
	}while(expresion logica)
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i;
	i=1;
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	i=10;
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
	getch();
	return 0;
}*/
/*La sentencia for
	
	for(exp1; expreciones logicas; exp2;){
		conjunto de instrucciones;
	}
*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i;
	for(i=1; i<=10; i++){
		cout<<i<<endl;
	}
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	for(int i=1; i<=10; i++){
		cout<<i<<endl;
	}
	getch();
	return 0;
}*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i;
	for(i=10; i>=1; i--){
		cout<<i<<endl;
	}
	system("pause");
	return 0;
}*/
/*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 
1 al 10 y muestre en la salida estándar su tabla de multiplicar.*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	float num=0;
	do{
		cout<<"\tIngrese un numero del 1 - 10:"<<endl;
		cin>>num;
	}while(num<0 || num>10);//con este do while sustentamos la entrada 
	cout<<"\tLa tabla de multiplicar de "<<num<<" es:"<<endl;
	cout<<"\n";//espacio
	for(i=1; i<=12; i++){
		cout<<i<<" x "<<num<<" = "<<num*i<<endl;
	}
	cout<<"\n";
	cout<<"\tGracias por usar la calculadora "<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida 
estándar el número de valores mayores que cero leídos.*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num, conteo;
	do{
		cout<<"Ingrese un numero: "<<endl;
		cin>>num;
		if(num>0){ //expresion para determinar el dato
			conteo++; //guarda la cantidad de datos "num" ingresados
		}
	}while(num!=0); //se indica con que dato sale
	cout<<"La cantidad de numero ingresados es: "<<conteo<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.*/
/*
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int i, suma=0,cuad=0;
	for(i=1; i<11; i++){
		cuad=i*i;
		suma+=cuad;
	}
	cout<<"La suma de los cuadrados de los 10 primeros numeros es: "<<suma<<endl;
	
	
	getch();
	return 0;
}*/
/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule 
la temperatura media del día, la temperatura más alta y la más baja.*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, temp, masA=0, masB=99999999;
	float media=0, sumaT=0;
	for(i=4; i<=24; i+=4){
		cout<<"Ingrese la temperatura a las "<<i<<":"<<endl;
		cin>>temp;
		sumaT+=temp;
		if(temp>masA){
			masA=temp;
		}
		if(temp<masB){
			masB=temp;
		}
	}
	media=sumaT/6;
	cout<<"La temperatura media es: "<<media<<endl;
	cout<<"La temperatura mas alta es: "<<masA<<endl;
	cout<<"La temperatura mas baja es: "<<masB<<endl;
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, temp, masA=0, masB=99999;
	float sumaT=0, media=0;
	for(i=4; i<=24; i+=4){
		cout<<"Ingrese la temperatura a las "<<i<<" : "<<endl;
		cin>>temp;
		sumaT+=temp;
		if(temp>masA){
			masA=temp;
		}
		if(temp<masB){
			masB=temp;
		}
	}
	media=sumaT/6;
	cout<<"La temperatura media es: "<<media<<endl;
	cout<<"La temperatura mas alta: "<<masA<<endl;
	cout<<"La temperatura mas baja: "<<masB<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma 
de los valores mayores a 0 introducidos.*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int suma=0, num;
	do{
		cout<<"Ingrese un numero entero : "<<endl;
		cin>>num;
		if(num>0){
			suma+=num;
		}
	}while(((num<20) || (num>30)) && (num!=0));
	cout<<"La suma de los numeros ingresados es: "<<suma<<endl;
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num, suma=0;
	do{
		cout<<"\tIngrese un numero: "<<endl;
		cin>>num;
		if(num>0){
			suma+=num;
		}
	}while(((num<20) || (num>30)) && (num!=0));
	cout<<"La suma de los numeros es: "<<suma<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la función pow.*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, num,exp, elevacion=1;
	cout<<"Ingrese el numero base de la potencia: "<<endl;
	cin>>num;
	cout<<"Ingrese el numero del exponente:  "<<endl;
	cin>>exp;
	for(i=1; i<=exp; i++){
		elevacion*=num; // elev=elev*num
	}
	cout<<"El resultado es: "<<elevacion<<endl;
	
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, num, exp, elevacion=1;
	cout<<"Ingrese el valor de la base: "<<endl;
	cin>>num;
	cout<<"Ingrese el valor del exponente: "<<endl;
	cin>>exp;
	for(i=1; i<=exp; i++){
		elevacion*=num; //elevacion=elevacion*num
	}	
	getch();
	return 0;
}*/
/*Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n, i, sum=0;
	cout<<"Ingrese el valor de n: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		sum=sum+i;
	}
	cout<<"El valor de la suma es: "<<sum<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n, suma=0;
	cout<<"Ingrese el valor de n "<<endl;
	cin>>n;
	for(i=1; i<=(2*n)-1; i+=2){
		suma+=i;
	}
	cout<<"La suma es: "<<suma<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num, i, fac=1;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	for(i=1; i<=num; i++){
		fac*=i; //fac=fac*i;
	}
	cout<<"El facotrial de ese numero es: "<<fac<<endl;
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
(suma de factoriales).*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int suma=0, fac=1, i, num;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	for(i=1;i<=num; i++){
		fac*=i; //fac=fac*i
		suma+=fac; //suma=suma+fac
	}
	cout<<"La suma de factoriales del numero es: "<<suma<<endl;
	
	getch();
	return 0;
}*/
/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/
/*
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int i, n, cuad=0, suma=0;
	cout<<"Ingresa el valor de n: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		cuad=(pow(2,i)); //elevo al cuadrado
		suma+=cuad; //suma=suma+cuad;
	}
	cout<<"El valor de la operacion es: "<<suma<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresion: 
1-2+3-4+5-6...n
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, i, suma=0,par=1, impar=1, conpar=0, conim=0;
	cout<<"Ingrese el valor de n:" <<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			par=(i*-1);
			conpar+=par;
		}
		else{
			impar=1*i;
			conim+=impar;
		}
	}
	suma=conpar+conim;
	cout<<"El valor de de la expresion es: "<<suma<<endl;
	
	getch();
	return 0;
}*/
/*Ejercicio 13: Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int suma=0, i, n, a, x=0, y=1, z=1; 
	cout<<"Ingrese la cantidad de elementos de la serie:  "<<endl;
	cin>>n;
	cout<<"1 ";
	for(i=1; i<n; i++){
		z=x+y;;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	cout<<"\n";
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, x=0, y=1, z=1, n;
	cout<<"Ingrese la cantidad de elementos  de la serie: "<<endl;
	cin>>n;
	cout<<"1 ";
	for(i=1; i<n; i++){
		z=x+y; // z=0+1; 2=1+1; 3=1+2; 5=2+3; ...
		cout<<z<<" "; //imprimimos 1, 2, 3, 5,...
		x=y; //x=1; x=1; x=2; x=3;...
		y=z; //y=1; y=2; y=3; y=5;...
	}
	cout<<"\n";
	getch();
	return 0;
}*/
/*
Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float nota1, nota2, nota3 ;
	int i,aprobT=0, aprobU=0, aprobA=0;
	for(i=1; i<=5; i++){
		cout<<"Ingresa la primera nota del alumno "<<i<<": "<<endl;
		cin>>nota1;
		cout<<"Ingresa la segunda nota del alumno "<<i<<": "<<endl;
		cin>>nota2;
		cout<<"Ingresa la tercera nota del alumno "<<i<<": "<<endl;
		cin>>nota3;
		if((nota1>10.5) && (nota2>10.5) && (nota3>10.5)){
			aprobT++;
		}
		if((nota1>10.5) || (nota2>10.5) || (nota3>10.5)){
			aprobA++;
		}
		if((nota1<10.5) && (nota2<10.5) && (nota3>10.5)){
			aprobU++;
		}
	}
	cout<<"Los alumnos que aprobaron todos los examenes son: "<<aprobT<<endl;
	cout<<"Los alumnos que aprobaron al menos un examen son: "<<aprobA<<endl;
	cout<<"Los alumnos que aprobaron el ultimo examen son: "<<aprobU<<endl;
	system("pause");
	return 0;
}*/
/*Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo 
rango[1-100],e indicarle al usuario si el numero que dígito es menor o mayor al numero 
aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le 
llevo.
#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
int main(){
	int aleatorio, numero, conteo=0;
	srand(time(NULL));
	aleatorio=1+rand()%(100);
	do{
		cout<<"Ingrese un numero: "<<endl;
		cin>>numero;
		if(numero>aleatorio){
			cout<<"Ingrese un numero menor"<<endl;
		}
		if(numero<aleatorio){
			cout<<"Ingrese un numero mayor"<<endl;
		}
		conteo++;
	}while(numero!=aleatorio);
	cout<<"\tFELICIDADES, GANASTE"<<endl;
	cout<<"\n";
	cout<<"\tLo hiciste en "<<conteo<<" intentos"<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de 
un número entero. Por ejemplo: 20 = 2*2*5. 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n, i;
	cout<<"Ingrese el numero a descomponer: "<<endl;
	cin>>n;
	cout<<"\n";
	cout<<n<<"=";
	for(i=2; i<=n; i++){
		while(n%i==0){
			cout<<i;
			if(n!=i){ //cuando llega al ultimo divisible n va a ser igual a i, entonces ya no imprime el *
				cout<<"*";//esto es un capricho solo para que salga el *
			}
			n/=i;
		}
	}
	cout<<"\n";
	cout<<"\n";
	
	system("pause");
	return 0;
}*/
/*
											Vector
	Un vector o array unidimensional es un tipo de dato que almacena una secuencia de 
	datos del mismo tipo. Los elementos de un vector se almacenan en zonas contiguas de 
	memoria y se puede acceder a ellos de manera directa mediante un índice o posición.
					
					2	5	8	1	9
					0	1	2	3	4
					
	Para definir un vector:
	tipo nombre[tamaño];
	Ejemplos:
	int numero[10];
	char letras[5];
	float reales[15];
	
	Iniciacion de un vector en su definicion: 
	int numero[]={1,4,6,7,3}
	
					1	4	6	7	3
					0	1	2	3	4
					
	numero[0]=1;
	numero[1]=4;
	numero[2]=6;
	numero[3]=7;
	numero[4]=3;	
	
	char letra[]={'a','e','i','o','u'};
	
	letra[0]='a';
	letra[1]='e';
	letra[2]='i';
	letra[3]='o';
	letra[4]='u';
*/
/*Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de 
sus elementos.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num[]={1,2,3,4,5};
	int i, suma=0;
	for(i=0; i<5; i++){
		suma+=num[i];
	}
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 2: Escribe un programa que defina un vector de números y calcule la 
multiplicación acumulada de sus elementos.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num[]={1,2,3,4,5};
	int i, multi=1;
	for(i=0; i<5; i++){
		multi*=num[i];
	}
	cout<<"La multiplicacion de los elementos del vector es:\n\n "<<multi<<endl;
	cout<<"\n";
	cout<<"\n";
	system("pause");
	return 0;
}*/
/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números y 
muestre en la salida estándar los números del vector con sus índices asociados.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num[100], i, n;
	cout<<"Cuantos valores tendra el vector: "<<endl;
	cin>>n;
	cout<<"\n";
	for(i=0; i<n; i++){
		cout<<"Ingrese el valor del primer vector"<<endl;
		cin>>num[i];
	}
	for(i=0;i<n; i++){
		cout<<"\t"<<num[i];
	}
	cout<<endl;
	for(i=0;i<n; i++){
		cout<<"\t"<<i;
	}
	cout<<"\n\n";
	getch();
	return 0;
}*/
/*Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida 
estándar el vector en orden inverso—del último al primer elemento.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num[]={1,2,3,4,5}, i, aux[5],j;
	cout<<"El vector es: "<<endl;
	cout<<"\n";
	for(i=0; i<5; i++){
		cout<<"\t"<<num[i];
	}
	cout<<"\n";
	cout<<"El vector invertido es: "<<endl;
	for(i=4;i>=0; i--){
		cout<<"\t"<<num[i];
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}*/
/*Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros 
y determine el mayor elemento del vector.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, mayor=0, num[100], n;
	cout<<"Ingrese el numero de elementos del vector: "<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Ingrese un numero en el indice del vector "<<i<<" :"<<endl;
		cin>>num[i];
		if(num[i]>mayor){
			mayor=num[i];
		}
	}
	cout<<"El elemento mayor del vector es: "<<mayor<<endl;
	
	getch();
	return 0;
}*/
/*Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, num[]={1,2,3,4,10}, suma=0, mayor=0;
	for(i=0; i<5; i++){
		suma+=num[i];
		if(num[i]>mayor){
			mayor=num[i];
		}
		
	}
	if(mayor==suma-mayor){
		cout<<"El numero que es igual a la suma de los anteriores es: "<<mayor<<endl;
	}else{
		cout<<"No existe tal numero"<<endl;
	}
	
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num[]={1,2,3,6,12}, suma=0, mayor=0,i;
	for(i=0; i<5; i++){
		suma+=num[i];
		if(num[i]>mayor){
			mayor=num[i];
		}
	}
	if(mayor==suma-mayor){
		cout<<"El numero "<<mayor<<" es la suma de los anteriores"<<endl;
	}else{
		cout<<"No existe tal numero"<<endl;
	}
	
	getch();
	return 0;
}*/
/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después 
almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar 
los elementos del primer vector seguido por los elementos del segundo vector. Muestre 
el contenido del nuevo vector en la salida estándar. 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i=0,j=0,k=0; 
	char letras[]={'b','c','d','f','g'}, vocal[]={'a','e','i','o','u'}, nuevo[100];
	cout<<"El primero vector es: \n"<<endl;
	for(i=0; i<5; i++){
		cout<<"\t"<<letras[i];
	}
	cout<<"\n\nEl segundo vector es: \n"<<endl;
	for(j=0; j<5; j++){
		cout<<"\t"<<vocal[j];
	}
	cout<<"\n\n";
	for(k=0; k<5; k++){
		nuevo[k]=letras[k];
	}
	for(k=5; k<10; k++){
		nuevo[k]=vocal[k-5];
	}
	cout<<"El nuevo vector es :"<<endl;
	for(k=0; k<10; k++){
		cout<<"\t"<<nuevo[k];
	}
		cout<<"\n\n";

	
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	char letras[]={'b','c','d','f','g'}, vocal[]={'a','e','i','o','u'}, nuevo[100];
	cout<<"Nuestro primer vector: \n\n"<<endl;
	for(i=0; i<5; i++){
		cout<<"\t"<<letras[i];
	}
	cout<<"\n\nNuestro segundo vector:\n"<<endl;
	for(i=0; i<5; i++){
		cout<<"\t"<<vocal[i];
	}
	for(i=0; i<5; i++){
		nuevo[i]=letras[i];
	}
	for(i=5; i<10; i++){
		nuevo[i]=vocal[i-5];
	}
	cout<<"\n\nEl nuevo vector es: \n\n";
	for(i=0; i<10; i++){
		cout<<"\t"<<nuevo[i];
	}
	cout<<"\n\n";
	
	getch();
	return 0;
}
*/
/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro 
arreglo multiplicados por 2 y muestre el segundo arreglo.
#include<iostream>
#include<stdlib.h>
using namespace std; 
int main(){
	int num1[5], num2[5], i;
	for(i=0; i<5; i++){
		cout<<"Ingrese el numero en el indice "<<i<<" :"<<endl;
		cin>>num1[i];	
	}
	for(i=0; i<5; i++){
		num2[i]=num1[i]*2;
	}
	cout<<"\nPor tanto el nuevo arreglo es: \n\n"<<endl;
	for(i=0; i<5; i++){
		cout<<"\t"<<num2[i];
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}*/
/*Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número 
de filas y columnas, Posteriormente mostrar la matriz en pantalla.*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i=0, j=0, a=0, b=0, matriz[100][100];
	cout<<"Cuantas filas tendra la matriz? : "<<endl;
	cin>>a;
	cout<<"Cuantas columnas tendra la matriz? :"<<endl;
	cin>>b;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cout<<"Ingrese un valor en el orden ["<<i<<"]["<<j<<"]"<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\n\nSu matriz es: \n\n"<<endl;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\n";
	
	getch();
	return 0;
}*/
/*Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para 
que muestre la diagonal principal de la matriz.*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, j, matriz[2][2]={{1,2},{4,5}};
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(i==j){
				cout<<matriz[i][j]<<endl;
			}
		}
		
	}
	
	
	system("pause");
	return 0;
}*/
/*Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego 
copiar todo su contenido hacia otra matriz.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, j, matriz[2][2], nmatriz[2][2];
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<"Ingrese un dato en la matriz ["<<i<<"]["<<j<<"] :"<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\n\nLa matriz es: \n\n"<<endl;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\nCopiandolo a otra matriz es: \n"<<endl;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			nmatriz[i][j]=matriz[i][j];
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<"\t"<<nmatriz[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\n";	
	getch();
	return 0;
}*/
/*Ejercicio 4:  Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla 
en pantalla.
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int i, j, matriz[100][100], nmatriz[100][100], a=0, b=0, dato;
	cout<<"Cuantas filas tendra su matriz ? "<<endl;
	cin>>a;
	cout<<"Cuantas columnas tendra su matriz ?"<<endl;
	cin>>b;
	srand(time(NULL));
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			dato=1+rand()%(10000);
			matriz[i][j]=dato;
		}
	}
	cout<<"\n\nLa matriz original es: \n"<<endl;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			nmatriz[i][j]=matriz[i][j];
		}
	}
	cout<<"\n\nPasandola a otra matriz :\n"<<endl;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cout<<"\t"<<nmatriz[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}*/
/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz 
original.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, j, matriz[3][3], nmatriz[3][3];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Ingrese el dato en: ["<<i<<"]["<<j<<"] :"<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\n"<<"Mi matriz es: \n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\nMi matriz traspuesta es: \n\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<matriz[j][i];
		}
		cout<<endl;
	}
	cout<<endl;
	getch();
	return 0;
}*/
/*Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, j, matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}}, matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}}, nmatriz[3][3];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			nmatriz[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	cout<<"\n\nLa suema de las dos matrices es:\n\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<nmatriz[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}*/
/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i, j, filas, columnas, matriz[100][100];
	char band='F';
	cout<<"Ingrese el numero de filas de la matriz: "<<endl;
	cin>>filas;
	cout<<"Ingrese el numero de columnas de la matriz: "<<endl;
	cin>>columnas;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout<<"Ingrese un dato en la matriz ["<<i<<"]["<<j<<"] :"<<endl;
			cin>>matriz[i][j];
		}
	}
	if(filas==columnas){
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				if(matriz[i][j]==matriz[j][i]){
					band='V';
				}
			}
		}
	}
	if(band=='V'){
		cout<<"\n\nLa matriz es simetrica\n"<<endl;
	}else{
		cout<<"\nLa matriz no es simetrica\n"<<endl;
	}
	
	getch();
	return 0;
}*/
/*Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i, j, nmatriz[3][3];
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}}; 
	int matriz2[3][3]={{2,2,2},{2,2,2},{2,2,2}};
	cout<<"Mi primer matriz es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<matriz1[i][j];
		}
		cout<<endl;
	}
	cout<<"\nMi segunda matriz es: \n\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<matriz2[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\nLa multiplicacion de ambas matrices es:\n\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			nmatriz[i][j]=matriz1[i][j]*matriz2[i][j];
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"\t"<<nmatriz[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}*/
/*
			CADENA DE CARACTERES
*/
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 
int main(){
	char nombre[]="Flavio";
	char miname[]={'F','l','a','v','i','o'};
	cout<<nombre<<endl;
	cout<<"\n\n";
	cout<<miname;
	getch();
	return 0;
}*/
/*
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[20];
	cout<<"Digite su nombre: "<<endl;
	cin>>nombre; // se usa pero cuando usas un espacio ya no lee
	cout<<"\n\n";
	cout<<"Su nombre es: "<<nombre;
	cout<<"\n\n";
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[2];
	cout<<"Ingrese su nombre: "<<endl;
	gets(nombre); //se usa pero no repeta el espacio permitido
	cout<<"\n\n";
	cout<<"Su nombre es: "<<nombre;
	
	getch();
	return 0;
}*/
/*
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char nombres[10];
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(nombres,10,'\n'); //Este es el mejor respeta el espacio permitido y los espacios
	cout<<"\n\n";
	cout<<"Su nombre es: "<<nombres<<endl;
	
	
	system("pause");
	return 9;
}*/
/*
		longitud de una cadena de caracteres - Funcion strlen()
*/
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char letra[]="Flavio Manuel Santos Chozo";
	int longitud = 0;
	longitud = strlen(letra);
	cout<<"\n\n";
	cout<<"La cantidad de letras es: "<<longitud<<endl;
	cout<<"\n\n";
	
	getch();
	return 0;
}*/
/*Hacer un programa que pida al usuario que digite una	cadena de caracteres, luego verificar
la longitud de la cadena , y si ésta supera a 10 caracteres mostrarla en pantalla , caso 
contrario no mostrarla
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	int longitud=0;
	char cadena[100];
	cout<<"Ingresa una cadena de caracteres: "<<endl;
	cin.getline(cadena,100,'\n');
	cout<<"\n";
	longitud=strlen(cadena);
	if(longitud>10){
		cout<<"Su cadena es: "<<cadena<<endl;
	}
	cout<<"\n";
	system("pause");
	return 0;
}
/*
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	int longitud=0; 
	char palabra[100];
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(palabra,100,'\n');
	cout<<"\n\n";
	cout<<"Su nombre es: "<<palabra<<endl;
	longitud=strlen(palabra);
	cout<<"\n\n";
	cout<<"Y la cantidad de letras en su nombre es: "<<longitud<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}*/
/*Copiar el contenido de una cadena a otra - Funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[100], copiar[100];
	int longitud=0;
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(nombre,100,'\n');
	longitud=strlen(nombre);
	strcpy(copiar,nombre);
	cout<<"Su nombre es: "<<copiar<<endl;
	cout<<"\n";
	cout<<"La cantidad de letras en su nombre es: "<<longitud<<endl;
	cout<<"\n";
	getch();
	return 0;
}*/
/*Comparar cadenas - Funcion strcmp()
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char contra1[100], contra2[100], copia[100];
	int longitud=0;
	cout<<"Ingrese su contrasena: "<<endl;
	cin.getline(contra1, 100, '\n');
	cout<<"\n";
	cout<<"Ingrese su contrasena nuevamente: "<<endl;
	cin.getline(contra2, 100, '\n');
	cout<<"\n";
	strcpy(copia,contra2);
	longitud=strlen(contra2);
	if(strcmp(contra1,contra2)==0){
		cout<<"Las contrasenas coinciden"<<endl;
	}else{
		cout<<"Las contrasenas no coinciden"<<endl;
	}
	cout<<"\n";
	cout<<"La contrasena es: "<<copia<<endl;
	cout<<"\n";
	cout<<"La longitud de la contrasena es de "<<longitud<<" letras."<<endl;
	cout<<"\n";
	system("pause");
	return 0;
}*/
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[100], usuario[100],copian[100],copiau[100];
	int cantidadn=0, cantidadu=0,i;
	cout<<"\t\tSu nombre y su usuario deben ser diferentes: "<<endl;
	cout<<"\n";
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(nombre,100,'\n');
	cout<<"\n";
	cout<<"Ingrese su usuario: "<<endl;
	cin.getline(usuario,100,'\n');
	cout<<"\n";
	cantidadn=strlen(nombre);
	cantidadu=strlen(usuario);
	strcpy(copian,nombre);
	strcpy(copiau,usuario);
	if(strcmp(nombre,usuario)==1){
		cout<<"Ingreso de datos correctos"<<endl;
	}else{
		cout<<"Ingreso de datos incorrectos"<<endl;
	}return 1;
	cout<<"\n";
	cout<<"La cantidad de letras en el nombre es: "<<cantidadn<<endl;
	cout<<"\n";
	cout<<"La cantidad de letras en el usuario es: "<<cantidadu<<endl;
	cout<<"\n";
	cout<<"Su nombre es: "<<copian<<endl;
	cout<<"\n";
	cout<<"Su usuario es: "<<copiau<<endl;
	cout<<"\n";
	getch();
	return 0;
}*/
//Añadir o concatenar una cadena con otra - strcat
/*
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
	char cad1[30], cad2[30], cad3[30];
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(cad1, sizeof(cad1));
	cout<<"Ingrese su apellido: "<<endl;
	cin.getline(cad2, sizeof(cad2));
	strcpy(cad3,cad2);
	strcat(cad3," ");
	strcat(cad3,cad1);
	cout<<"\nSu apellido y nombre son: \n"<<cad3<<endl;
	cout<<"\n\n";
	getch();
	return 0;
}*/
/*Ejercicio 4: Crear una cadena que tenga la siguiente frase  "Hola que tal", luego crear otra 
cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la 
primera cadena y mostrar el mensaje  completo "Hola que tal(NombreDelUsuario)
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char cad1[]="Hola que tal", cad2[30];
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(cad2,sizeof(cad2));
	strcat(cad1," ");
	strcat(cad1,cad2);
	cout<<"\n";
	cout<<cad1<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}*/
//Invertir una cadena - strrev
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char cad1[]="Flavio";
	strrev(cad1);
	cout<<cad1<<endl;
	getch();
	return 0;
}*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char cad1[100], cad2[100];
	cout<<"Ingrese una palabra palindroma: "<<endl;
	cin.getline(cad1, sizeof(cad1));
	strcpy(cad2,cad1);
	cout<<"La palabra ingresada es: "<<cad1<<endl;
	cout<<"El reverso de la palabra es: "<<cad2<<endl;
	strrev(cad1);
	if(strcmp(cad1,cad2)==0){
		cout<<"La palabra ingresada es polindroma"<<endl;
	}else{
		cout<<"La palabra no es polindroma"<<endl;
	}
	
	
	system("pause");
	return 0;
}
