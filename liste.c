#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};
typedef struct node nod;

void afisare(nod* head) {
	nod* temp = head;

	while (temp != NULL) {
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	nod n1, n2, n3;
	nod* head;

	n1.value = 10;
	n2.value = 20;
	n3.value = 30;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;

	afisare(head);

	return 0;
}