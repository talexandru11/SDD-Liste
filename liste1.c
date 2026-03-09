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
	p.numeProdus = numeProdus;
	p.pret = pret;
	p.inStock = inStock;
	p.clasaEnergetica = clasaEnergetica;

	return p;
}

void afisare(produs p) {
	printf("Cod: %d", p.codBare);
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