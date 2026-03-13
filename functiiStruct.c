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

produs Initializare(int codBare,const char* numeProdus, float pret, bool inStock, char clasaEnergetica) {
	produs p;
	p.codBare = codBare;
	p.numeProdus = (char*)malloc(sizeof(char) * strlen(numeProdus)+1);
	strcpy_s(p.numeProdus, strlen(numeProdus) + 1, numeProdus);
	p.pret = pret;
	p.inStock = inStock;
	p.clasaEnergetica = clasaEnergetica;

	return p;
}

void Afisare(produs p) {
	if (p.numeProdus != NULL) {
		printf("Cod: %d\n", p.codBare);
		printf("Nume: %s\n", p.numeProdus);
		printf("Pret: %5.2f\n", p.pret);
		printf("In stoc: %s\n", p.inStock ? "Da" : "Nu");
		printf("Clasa energetica: %c\n\n", p.clasaEnergetica);
	}

	else
	{
		printf("Something went wrong.\n");
	}
}

void ModificaPret(produs* p, float noulPret) {
	if (noulPret > 0) {
		p->pret = noulPret;
	}
}

void Dezalocare(produs* p) {
	if (p->numeProdus != NULL) {
		free(p->numeProdus);
		p->numeProdus = NULL;
	}
}

typedef struct node {
	produs value;
	struct node* next;
} nod;



int main() {
	
	produs p = Initializare(14232536, "Monitor", 2500.0f, true, 'A');
	Afisare(p);
	ModificaPret(&p, 1500);
	Afisare(p);
	Dezalocare(&p);
	Afisare(p);

}