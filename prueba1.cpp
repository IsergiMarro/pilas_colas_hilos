#include<iostream>
#include <stdlib.h> 
#include <string.h> 
#include <time.h>
#include <windows.h>
#include<stdio.h>


using namespace std;

struct Nodo {
	int valor;
	Nodo* siguiente;

};
void Push(Nodo*&, int);
void Pop(Nodo*&);

void Add(Nodo*&, int);
void Remove(Nodo*&);
Nodo* fin = NULL;

int main() {
	Nodo* inicio = NULL;
	Nodo* pila = NULL;
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, contar = 0;
	char s;
	

	do {
		int num, c,i;
		srand(time(NULL));

		for (c = 1; c <= 1; c++)
		{
			//cout << "----------INGRESE LA CAJA A LA CAJA---------   " + c;
			//cin >> c;
			
				for (i = 1; i <= 200; i++) {
					num = 1 + rand() % (1 - 90);
					Add(inicio, num);
				
					Sleep(200);// tiempo de 2 segundos por registro //

					cout << num << " ";
				}
			
		}
		
		cin >> s;
	} while ((s == 's'));
	cout << "--------------- inicio: " << inicio->valor << endl;
	cout << "--------------- fin: " << fin->valor << endl;
	do {
		cout << "Desea sacar un valor (s/n): ";
		cin >> s;
		if (s == 's') {
			Remove(inicio);
			if (inicio == NULL) {
				cout << "La Cola esta vacia" << endl;
				s = 'n';
			}
			else {
				cout << "--------------- inicio: " << inicio->valor << endl;
				cout << "--------------- fin: " << fin->valor << endl;
				//cout << "---------------------- peek: " << pila->valor << endl;
			}
		}


	} while ((s == 's'));

	system("PAUSE");
	return 0;

}

void Add(Nodo*& inicio, int v) {
	Nodo* add = new Nodo();
	add->valor = v;
	add->siguiente = NULL;
	if (inicio == NULL) {
		inicio = add;
	}
	else {
		fin->siguiente = add;
	}
	fin = add;
}
void Remove(Nodo*& inicio) {
	int v;
	Nodo* fin = NULL;
	v = inicio->valor;
	Nodo* cola = inicio;

	if (inicio == fin) {
		inicio = NULL;
		fin = NULL;
	}
	else {
		inicio = inicio->siguiente;
	}

	delete cola;
}




void Push(Nodo*& pila, int v) {
	Nodo* push = new Nodo();
	push->valor = v;
	push->siguiente = pila;
	pila = push;
}


void Pop(Nodo*& pila) {
	int v = NULL;
	Nodo* pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
	/*if(pila == NULL){
	}*/
	delete pop;
}
