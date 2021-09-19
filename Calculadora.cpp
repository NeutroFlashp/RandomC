#include <iostream>
#include <conio.h>
#define M_PI 3.141592

using namespace std;
using namespace System;

float Area_triangulo(float base, float altura) {
	float area = base * altura / 2;
	return area;
}

float Area_rectangulo(float base, float altura) {
	float area2 = base * altura;
	return area2;
}

float Area_circulo(float radio) {
	float area3 = M_PI * pow(radio, 2);
	return area3;
}

float Area_cuadrado(float lado) {
	float area4 = pow(lado, 2);
	return area4;
}


int main() {

	float base, altura, radio, lado;
	int opciones;
	Console::SetWindowSize(80, 25);
	Console::ForegroundColor = ConsoleColor::Black;
	Console::BackgroundColor = ConsoleColor::Yellow;
	Console::Clear();
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	Console::SetCursorPosition(30, 1);
	cout << "Calculadora Casio xd" << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	system("pause");


	do
	{
		Console::BackgroundColor = ConsoleColor::Green;
		Console::Clear();
		cout << "-----------------" << endl;
		cout << "\tMenu" << endl;
		cout << "-----------------" << endl;

		cout << "1.Area del triangulo" << endl;
		cout << "2.Area del rectangulo" << endl;
		cout << "3.Area de un circulo" << endl;
		cout << "4.Area de un cuadrado" << endl;
		cout << "5.SALIR" << endl;

		cout << "-----------------" << endl;
		cin >> opciones;
		Console::BackgroundColor = ConsoleColor::Red;
		system("cls");
		if (opciones != 5) {
			switch (opciones)
			{
			case 1:
				cout << "Ingrese base" << endl;
				cin >> base;
				cout << "Ingrese altura" << endl;
				cin >> altura;
				cout << "El area de la figura es: " << Area_triangulo(base, altura) << endl;
				break;
			case 2:
				cout << "Ingrese base" << endl;
				cin >> base;
				cout << "Ingrese altura" << endl;
				cin >> altura;
				cout << "El area de la figura es: " << Area_rectangulo(base, altura) << endl;
				break;
			case 3:
				cout << "Ingrese radio" << endl;
				cin >> radio;
				cout << "El area de la figura es: " << Area_circulo(radio) << endl;
				break;
			case 4:
				cout << "Ingrese lado" << endl;
				cin >> lado;
				cout << "El area de la figura es: " << Area_cuadrado(lado) << endl;
				break;
			default:cout << "ERROR" << endl;
				break;
			}
			getch();
		}
	} while (opciones != 5);
	return 0;
}