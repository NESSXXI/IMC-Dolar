//	Fig. 2.1
//Programa para imprimir texto.
/*
#include<iostream> //Permite al programa imprimir datos en la pantalla
int main(){ //la funcion main comienza la ejecucion del programa
	
	std::cout<<"Bienvenido a C++!\n\\"; //Muestra un mensaje
	
	
	return 0; //indica que el programa termino con exito
}/ //fin de la funcion main
*/
/*
Fig 2.2 Secuencias de escape
Secuencia de escape               @@               Descripcion
\n                                     Nueva linea
\t                                     Es una tabulacion entre palabras Ejemplo "Bienvenido a C++" con \t en Bienvenido: "Bienve\tnido..."    se imprime asi: Bienve	nido...
\r                                     Lo que esta antes de \r se borra y solo se imprime los que esta despues
\a                                     Sonido de Windows
\\                                     Se usa para imprimir solo un backslash
\'                                     Se usa para imprimir una comilla
\"                                     Se usa para imprimir un doble comilla
*/
//Fig. 2.3
//Imprime una linea de texto con varias instrucciones
/*
#include<iostream> //permite que el programa envie datos a la pantalla
//la funcion main comienza la ejecucion del programa
int main(){
	std::cout<<"Bienvenido ";
	std::cout<<"a C++";
	return 0;
}//fin de la funcion main
*/
//Fig 2.4
//Impresion de vrias lineas de texto con una sola instruccion
/*
#include<iostream>//Permite al programa imprimir varios datos en la pantalla
int main(){//empieza la ejecucion del programa
	std::cout<<"Bienvenido\na\n\nC++!\n";
	
	
	return 0;
}//Fin de la funcion main
*/
//Fig. 2.5
//Programa que muestra la suma de enteros
/*
#include<iostream>	//permite al programa realizar operaciones de entrada y salida
int main(){	//la función main empieza la ejecución del programa
	int numero1=0;	// primer entero a sumar (se inicializa con 0)
	int numero2=0;	// segundo entero a sumar (se inicializa con 0)
	int suma=0;	//suma de numero1 y numero2 (se inicializa con 0)
	std::cout<<"Ingresa el primer numero a sumar: \n";	// pide los datos al usuario
	std::cin>>numero1;	// lee el primer entero del usuario y lo coloca en numero1
	std::cout<<"Ingresa el segundo numero a sumar: \n";	// pide los datos al usuario
	std::cin>>numero2;	// lee el segundo entero del usuario y lo coloca en numero2
	suma=numero1+numero2;	// suma los números; almacena el resultado en suma
	std::cout<<"El resultado de la suma es: \n"<<suma<<std::endl;	// muestra la suma; fin de línea
	return 0;
}// fin de la función main
*/