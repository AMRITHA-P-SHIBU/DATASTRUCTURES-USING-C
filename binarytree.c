#include <stdio.h>
int main() {
int n, i;
printf("Enter the number of nodes: ");
scanf("%d", &n);
int arr[n+1];
printf("Enter the values at the nodes:\n");
for ( i=0; i<n; i++ ) {
scanf("%d", &arr[i]);
}
printf("The elements are:\n");
for ( i=0; i<n; i++ ) {
printf("%d ",arr[i]);
}
int k=0;
int key;
int node;
printf("\nEnter any element:");
scanf("%d",&key);
for(i=0;i<n;i++){
                if(arr[i]==key){
                node=i+1;
                }
                }
                while(k==0){
if (node==0) {
printf("Exiting...\n");
break;
}
if (node<1 || node>n) {
printf("Invalid node! Enter any valid node (1-%d): ",n);
break;
}
if (node == 1) {
printf("The node is root node\n");
} else {
printf("The parent node is %d\n",arr[(node/2)-1]);
int leftChildIndex = 2*node;
int rightChildIndex = (2*node)+1;
if (leftChildIndex > n) {
printf("This node has no left child\n");
} else {
printf("The left child of the node is %d\n",arr[leftChildIndex-1]);
}
if (rightChildIndex > n) {
printf("This node has no right child\n");
break;
} else {
printf("The right child of the node is %d\n",arr[rightChildIndex-1]);
break;
}
}
}
return 0;
}