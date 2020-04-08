#include<iostream> 
#include<string>
#include<math.h>

using namespace std;

int main()
{
	cout << "Ingrese los siguientes datos:" << "\n";

	string nom, direccion, hobby;
	int edad, telefono;

	cout << "cual es tu nombre:"; cin >> nom;
	cout << "cual es tu edad:"; cin >> edad;
	cout << "cual es su numero"; cin >> telefono;
	cout << "cual es su hobby:"; cin >> hobby;
	cout << " cual es tu direccion"; cin >> direccion;

	cout << "\nEdad: " << edad << endl;
	cout << "\nNom: " << nom << endl;
	cout << "\nDireccion:" << direccion << endl;
	cout << "\nHobby: " << hobby << endl;
	cout << "\nTelefono: " << telefono << endl;



	cout << "2 ejercicio" << "\n";
	cout << "ingrese dos nuneros " << "\n";
	float numero1, numero2;
	cout << "ingrese el primer numero :"; cin >> numero1;
	cout << "ingrese el segundo numero :"; cin >> numero2;

	cout << "suma:" << numero1 + numero2 << "\n" << "resta:" << numero1 - numero2 << "\n" << "multiplicacion:" << numero1 * numero2 << "\n" << "division:" << numero1 / numero2 << "\n" "raiz cuadrada:" << sqrt(numero1) << endl;



	cout << "3 ejercicio" << "\n";
	int radio, lado, base, altura, a, b, ladoA, ladoB, ladoC, p;
	float pi = 3.1415;
	cout << "ingresar el radio del circulo:"; cin >> radio;
	cout << "el radio del circulo es :" << pi * radio * radio << "\n";
	cout << "ingrese el lado del cuadrado: "; cin >> lado;
	cout << "el area del cuadrado es :" << lado * lado << "\n";
	cout << "ingrese los valor de la base  del triangulo  "; cin >> base;
	cout << "ingrese el valor de la altura del triangulo  "; cin >> altura;
	cout << "el area del triangulo es :" << base * altura / 2 << "\n";
	cout << "ingrese el valor del lado del triangulo equilatero:"; cin >> lado;
	cout << "el area del triangulo es:" << sqrt(3) / 4 * lado * lado << "\n";
	cout << "ingrese la medida de uno de los lados iguales  triangulo isosceles:"; cin >> a;
	cout << "ingrese la medida del lado irregular  del triangulo isosceles:"; cin >> b;
	cout << " el Area del triangulo isoceles es :" << b * sqrt(a * a - b * b / 4) / 2 << "\n";
	cout << "ingrese el valor del ladoA del triangulo escaleno"; cin >> ladoA;
	cout << "ingrese el valor del ladoB del triangulo escaleno"; cin >> ladoB;
	cout << "ingrese el valor del ladoC del triangulo escaleno"; cin >> ladoC;
	p = (ladoA + ladoB + ladoC) / 2;
	cout << "el valor de P es :" << p << endl;
	cout << "el area del triangulo escaleno es :" << sqrt(p * (p - ladoA) * (p - ladoB) * (p - ladoC));
	return 0;
}
