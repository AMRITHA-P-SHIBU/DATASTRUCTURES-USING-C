#include <stdio.h>
#include <stdlib.h>
struct node {
int coeff, expo;
struct node* next;
};
struct node* createNode(int coeff, int expo) {
struct node* newNode = (struct node*)malloc(sizeof(struct node));
newNode->coeff = coeff;
newNode->expo = expo;
newNode->next = NULL;
return newNode;
}
void insertNode(struct node* *poly, int coeff, int expo) {
struct node* newNode = createNode(coeff, expo);
if (*poly == NULL) {
*poly = newNode;
} else {
struct node* temp = *poly;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
}
void displayPolynomial(struct node* poly) {
while (poly != NULL) {
printf("%dx^%d", poly->coeff, poly->expo);
if (poly->next != NULL && poly->next->coeff >= 0) {
printf("+");
}
poly = poly->next;
}
printf("\n");
}
struct node* addPolynomial(struct node* poly1, struct node* poly2) {
struct node* result = NULL;
while (poly1 != NULL && poly2 != NULL) {
if (poly1->expo > poly2->expo) {
insertNode(&result, poly1->coeff, poly1->expo);
poly1 = poly1->next;
} else if (poly1->expo < poly2->expo) {
insertNode(&result, poly2->coeff, poly2->expo);
poly2 = poly2->next;
} else {
int sumCoeff = poly1->coeff + poly2->coeff;
if (sumCoeff != 0) {
insertNode(&result, sumCoeff, poly1->expo);
}
poly1 = poly1->next;
poly2 = poly2->next;
}
}
while (poly1 != NULL) {
insertNode(&result, poly1->coeff, poly1->expo);
poly1 = poly1->next;
}
while (poly2 != NULL) {
insertNode(&result, poly2->coeff, poly2->expo);
poly2 = poly2->next;
}
return result;
}
int main() {
struct node* poly1 = NULL;
struct node* poly2 = NULL;
struct node* sum = NULL;
 int n, coeff, expo;
printf("Enter no of terms in 1st polynomial: ");
scanf("%d", &n);
printf("Enter the terms in format (coeff expo):\n");
for (int i = 0; i < n; i++) {
scanf("%d %d", &coeff, &expo);
insertNode(&poly1, coeff, expo);
}
printf("\nFirst polynomial is: ");
displayPolynomial(poly1);
printf("Enter no of terms in 2nd polynomial: ");
scanf("%d", &n);
printf("Enter the terms in format (coeff expo):\n");
for (int i = 0; i < n; i++) {
scanf("%d %d", &coeff, &expo);
insertNode(&poly2, coeff, expo);
}
printf("\nSecond polynomial is: ");
displayPolynomial(poly2);
sum = addPolynomial(poly1, poly2);
printf("\nSum of polynomials is: ");
displayPolynomial(sum);
return 0;
}
