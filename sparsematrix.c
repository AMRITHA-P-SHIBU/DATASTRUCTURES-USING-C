#include<stdio.h>
int main(){
int i,j,row,col;
printf("Enter the no.of rows and coloumns of the matrix: ");
scanf("%d %d",&row,&col);
int a[row][col];
printf("Enter the elements into the matrix: ");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&a[i][j]);
}
}
printf("\nThe Sparse Matrix is:\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
int count=0,k;
for(i=0;i<row;i++){
for(j=0;j<col;j++){
if(a[i][j]!=0){
count++;
}
}
}
int b[count+1][3];
k=1;
b[0][0]=row;
b[0][1]=col;
for(i=0;i<row;i++){
for(j=0;j<col;j++){
if(a[i][j]!=0){
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}
}
}
b[0][2]=k-1;
printf("Row\tColoumn\tValue\n");
for(i=0;i<count+1;i++){
for(j=0;j<3;j++){
printf("%d\t",b[i][j]);
}
printf("\n");
}
return 0;
}