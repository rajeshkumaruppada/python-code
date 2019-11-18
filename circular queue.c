#include<stdio.h>
#include<stdlib.h>
int queue[50],front=-1,rear=-1,size;
void insert();
void dlt();
void display();
int main()
{
    int ch;
    printf("enter the size of the circular queue\n");
    scanf("%d",&size);
    while (1)
    {
        printf("enter the choice\n");
        printf("1.insert 2.delete 3.display 4.exit \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: insert();break;
        case 2: dlt();break;
        case 3: display();break;
        case 4: exit(0);
        }
    }
    return 0;   
}
void insert()
{
    int element;
    if((front==-1&&rear==size-1)||(front==rear+1))
       printf("queue is full\n");
    else
    {

        printf("enter the element to insert:\n");
        scanf("%d",&element);
        rear=(rear+1)%size;
        queue[rear]=element;
    }
}
void dlt()
{
    if((front==-1&&rear==-1)||(front==rear))
       printf("queue is empty\n");
    else
    {
        front=(front+1)%size;
        printf("the deleted element is %d\n",queue[front]);
    }
}
void display()
{
    int count,i,j;
    if((front==-1&&rear==-1)||(front==rear))
       printf("queue is empty\n");
    else{
        printf("the elments are :\n");
        if(front<=rear)
       {
            for(count=front+1;count<=rear;count++)
                printf("%d\n",queue[count]);
        }
        if(front>rear)
        {
            for(i=front;i<=size-1;i++)
                printf("%d\n",queue[i]);
            for(j=0;j<=rear;j++)
                printf("%d\n",queue[j]);
        }
    }
}