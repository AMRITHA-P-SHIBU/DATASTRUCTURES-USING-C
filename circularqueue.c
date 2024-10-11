#include<stdio.h>
void enqueue(int *front,int *rear,int n,int queue[]){
if(*front==(*rear+1)%n){
printf("Queue Overflow");
}
else{
int item;
printf("Enter the element to be inserted:");
scanf("%d",&item);
*rear=(*rear+1)%n;
queue[*rear]=item;
if(*front==-1){
*front=0;
}}}
void dequeue(int *front,int *rear,int n,int queue[]){
if(*front==-1){
printf("Queue Underflow");
}
else{
printf("Element deleted is %d",queue[*front]);
if(*front==*rear){
*front=-1;
*rear=-1;
}
else{
*front=(*front+1)%n;
}}}
void display(int queue[],int front,int rear,int n){
if(front==-1){
printf("Queue is empty");}
else{
printf("The circular queue is:");
int i=front;
while(i!=rear){
printf("%d ",queue[i]);
i=(i+1)%n;
}
printf("%d",queue[rear]);
}}
int main(){
int rear=-1,front=-1,option,n;
char ch;
printf("Enter size of circular queue: ");
scanf("%d",&n);
int queue[n];
while(1){
printf("\nCircular Queue Operations");
printf("\nSelect your choice: ");
printf("\n1.ENQUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
scanf("%d",&option);
switch(option){
case 1:
enqueue(&front,&rear,n,queue);
break;
case 2:
dequeue(&front,&rear,n,queue);
break;
case 3:
display(queue,front,rear,n);
break;
case 4:
printf("Exiting...");
return 0;
break;
default:printf("Invalid choice");
}}
return 0;
}