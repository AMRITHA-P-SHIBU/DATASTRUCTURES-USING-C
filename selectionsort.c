#include<stdio.h>
int main(){
int i=0,t=0,n,j,temp,a[20],s;
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
printf("THE ARRAY:");
t++;
for(i=0;i<n;i++){
printf("%d\t",a[i]);
t++;
t++;
}
i=0;
t++;
while(i<n-1){
s=i;
j=i+1;
t++;
t++;
t++;
while(j<n){
t++;
if(a[s]>a[j]){
s=j;
t++;
t++;
}
j++;
t++;
}
if(i!=s){
temp=a[i];
a[i]=a[s];
a[s]=temp;
t++;
t++;
t++;
t++;
}
i++;
t++;
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
printf("\nSPACE COMPLEXITY:%d",(24+(4*n)));
return 0;
}