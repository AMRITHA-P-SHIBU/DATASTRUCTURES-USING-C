#include<stdio.h>
struct polynomial{
int expo;
int coeff;
};
int main(){
int firstCount,i;
printf("Enter the no.of elements: ");
scanf("%d",&firstCount);
struct polynomial x[firstCount];
for(i=0;i<firstCount;i++){
printf("Enter the coefficient of the element %d: ",(i+1));
scanf("%d",&x[i].coeff);
printf("Enter the exponent of the element %d: ",(i+1));
scanf("%d",&x[i].expo);
}
printf("The Polynomial is:\n");
for(i=0;i<firstCount;i++){
printf("%dx^%d",x[i].coeff,x[i].expo);
if(i<firstCount-1){
printf("+");
}
}
printf("\n");
return 0;
}