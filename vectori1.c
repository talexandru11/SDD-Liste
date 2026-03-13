#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* nume;
	int varsta;
	float salariu;
} Angajat;

Angajat Initializare(const char* nume, int varsta, float salariu) {
	Angajat a;
	a.nume = (char*)malloc(sizeof(char) * (strlen(nume) + 1));
	strcpy_s(a.nume, strlen(nume) + 1, nume);
	a.varsta = varsta;
	a.salariu = salariu;
	return a;
}

void Dezalocare(Angajat* a) {
	if (a->nume != NULL) {
		free(a->nume);
	};
	a->nume = NULL;
	a->varsta = 0;
	a->salariu = 0;
}

void Afisare(Angajat a) {
	printf("Angajatul %s in varsta de %d ani are un salariu de %5.2f RON.\n", a.nume, a.varsta, a.salariu);
}

void AfisareVector(Angajat* vector, int nrAngajati) {
	for (int i = 0; i < nrAngajati; i++) {
		Afisare(vector[i]);
	}
}

//void DezalocareVector(Angajat** angajati, nrAngajati*) {
//	for (int i = 0; int i < (*nrAngajati); int i++)
//	{
//		for
//	}
//}

int main() {
	Angajat a = Initializare("George", 20, 3500);
	Afisare(a);
	Dezalocare(&a);
	Afisare(a);

	Angajat* angajati = NULL;
	int nrAngajati = 3;
	angajati = (Angajat*)malloc((sizeof(Angajat) * nrAngajati));
	angajati[0] = Initializare("Andrei", 24, 3457);
	angajati[1] = Initializare("Stefan", 25, 6700);
	angajati[2] = Initializare("Marius", 40, 24500);

	AfisareVector(angajati, nrAngajati);
}