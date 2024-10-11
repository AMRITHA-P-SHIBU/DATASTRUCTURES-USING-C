#include<stdio.h>
int main(){
int i,n,x,mid,t=0,flag=0;
t++;
printf("ENTER NO.OF ELEMENTS OF ARRAY: ");
t++;
scanf("%d",&n);
t++;
int l=0,r=n-1;
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
while(l<=r){
t++;
mid=(l+r)/2;
t++;
if(x==A[mid]){
flag=1;
t++;
t++;
break;
}
else if(x>A[mid]){
l=mid+1;
t++;
t++;
}
else if(x<A[mid]){
r=mid-1;
t++;
t++;
}}
if(flag==0){
printf("ELEMENT NOT FOUND");
t++;
t++;
}
if(flag==1){
printf("ELEMENT FOUND AT POSITION %d",(mid+1));
t++;
t++;
}
t++;
t++;
t++;
printf("\nTIME COMPLEXITY:%d",t);
printf("\nSPACE COMPLEXITY:%d",(32+(4*n)));
return 0;
}