#include<stdio.h>
int main(){
int a[10];
int i,n,temp,pass,t=0;
t++;
printf("ENTER NO.OF ELEMENTS OF THE ARRAY: ");
t++;
scanf("%d",&n);
t++;
printf("ENTER THE ELEMENTS: ");
t++;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
t++;
t++;
}
for(pass=0;pass<n-1;pass++){
t++;
for(i=0;i<n-pass-1;i++){
t++;
if(a[i]>a[i+1]){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
t++;
t++;
t++;
t++;
}
}
}
printf("\nTHE SORTED ARRAY:");
t++;
for(i=0;i<n;i++){
printf("%d\t",a[i]);
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