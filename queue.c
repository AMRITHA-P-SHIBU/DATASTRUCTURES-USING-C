#include<stdio.h>
int queue[20],front=-1,rear=-1;
void enqueue(int size,int item){
if(rear>=size-1){
printf("\nQueue Overflow");
}
else{
if(front==-1)
front=0;
rear=rear+1;
queue[rear]=item;
printf("%d is inserted into the queue\n",item);
}
}
void deque(){
if(rear<front){
printf("\nQueue underflow");
}
else{
int item;
item=queue[front];
front=front+1;
printf("%d is deleted from the queue\n",item);
}
}
void display(){
if(rear<front){
printf("The queue is empty\n");
}
else{
printf("The queue is:\n");
for(int i=front;i<=rear;i++){
printf("%d\t",queue[i]);
}
}
}
int main(){
int choice,item,size;
printf("Enter size of queue: ");
scanf("%d",&size);
while(1){
printf("\nSelect your choice: ");
printf("\n1.ENQUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("\nEnter element to be inserted: ");
scanf("%d",&item);
enqueue(size,item);
break;
case 2:
deque();
break;
case 3:
display();
break;
case 4:
printf("Exiting...");
return 0;
break;
default:printf("Invalid choice");
break;
}
}
return 0;
}