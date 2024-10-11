#include<stdio.h>
int main(){
int n,i,x,t=0,count=0;
t++;
printf("ENTER NO.OF ELEMENTS OF THE ARRAY: ");
t++;
scanf("%d",&n);
t++;
int A[n];
printf("ENTER %d ELEMENTS: ",n);
t++;
for(i=0;i<n;i++){
scanf("%d",&A[i]);
t++;
t++;
}
printf("ARRAY A:\n");
t++;
for(i=0;i<n;i++){
printf("%d\t",A[i]);
t++;
t++;
}
printf("\nENTER THE ELEMENT TO BE SEARCHED: ");
t++;
scanf("%d",&x);
t++;
for(i=0;i<n;i++){
t++;
if(A[i]==x){
t++;
count++;
printf("\nELEMENT FOUND AT POSITION %d",(i+1));
t++;
t++;
}
}
if(count>0){
printf("\nELEMENT FOUND %d times",count);
t++;
t++;
}
else{
printf("ELEMENT NOT FOUND");
t++;
t++;
}
t++;
t++;
t++;
printf("\nTIME COMPLEXITY:%d",t);
printf("\nSPACE COMPLEXITY:%d",(20+(4*n)));
return 0;
}