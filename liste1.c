#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Prod {
	int codBare;
	char* numeProdus;
	float pret;
	bool inStock;
	char clasaEnergetica;

};
typedef struct Prod produs;

produs initializare(int codBare,const char* numeProdus, float pret, bool inStock, char clasaEnergetica) {
	produs p;
	p.codBare = codBare;
	p.numeProdus = (char*)malloc(sizeof(char) * strlen(numeProdus)+1);
	strcpy_s(p.numeProdus, strlen(numeProdus) + 1, numeProdus);
	p.pret = pret;
	p.inStock = inStock;
	p.clasaEnergetica = clasaEnergetica;

	return p;
}

void afisare(produs p) {
	printf("Cod: %d\n", p.codBare);
	printf("Nume: %s\n", p.numeProdus);
	printf("In stoc: %s\n", p.inStock ? "Da" : "Nu");
	printf("Clasa energetica: %c", p.clasaEnergetica);

}

void modificaAtribut(produs p) {

}

void dezalocare() {

}

typedef struct node {
	produs value;
	struct node* next;
} nod;



int main() {
	
	produs p = initializare(14232536, "Monitor", 2500.0f, true, 'A');

	afisare(p);

}