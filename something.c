#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *ptr;
}*front[4],*rear[4],*temp[4],*front1[4];

int count[4]={0};
void enque(int data,int grpNum){
    if (rear[grpNum] == NULL)
    {
        rear[grpNum] = (struct node *)malloc(1*sizeof(struct node));
        rear[grpNum]->ptr = NULL;
        rear[grpNum]->info = data;
        front[grpNum] = rear[grpNum];
    }
    else
    {
        temp[grpNum]=(struct node *)malloc(1*sizeof(struct node));
        rear[grpNum]->ptr = temp[grpNum];
        temp[grpNum]->info = data;
        temp[grpNum]->ptr = NULL;
 
        rear[grpNum] = temp[grpNum];
    }
    count[grpNum]++;
}

void display(int grpNum) {
    front1[grpNum] = front[grpNum];
 
    if ((front1[grpNum] == NULL) && (rear[grpNum] == NULL)) {
        printf("Queue is empty");
        return;
    }
    while (front1[grpNum] != rear[grpNum]) {
        printf("%d ", front1[grpNum]->info);
        front1[grpNum] = front1[grpNum]->ptr;
    }
    if (front1[grpNum] == rear[grpNum])
        printf("%d", front1[grpNum]->info);
}

void deq(int grpNum) {
    front1[grpNum] = front[grpNum];
 
    if (front1[grpNum] == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1[grpNum]->ptr != NULL)
        {
            front1[grpNum] = front1[grpNum]->ptr;
            printf("\n Dequed value : %d", front[grpNum]->info);
            free(front[grpNum]);
            front[grpNum] = front1[grpNum];
        }
        else
        {
            printf("\n Dequed value : %d", front[grpNum]->info);
            free(front[grpNum]);
            front[grpNum] = NULL;
            rear[grpNum] = NULL;
        }
        count[grpNum]--;
}

void queuesize(int grpNum)
{
    printf("\n Queue size : %d", count[grpNum]);
}

int main(){
    int num;
    int T;
    printf("Enter the number of inputs:");
    scanf("%d",&T);
    //Queue creation code
    for (int i = 0; i < 4; i++) {
        front[i]=NULL;
        rear[i]=NULL;
    }
    for(int i=0;i<T;i++) {
        printf("Enter the integer:");
        scanf("%d",&num);
        if(num>=0 && num<25)
            enque(num,0); 
        else if(num>24 && num<50)
            enque(num,1);
        else if(num>49 && num<75)
            enque(num,2);
        else if(num>74 && num<101)
            enque(num,3);
        else {
            printf("Please enter a number between 0 and 100:");
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("Elements of group %d are: \n",(i+1));
        display(i);
        printf("\n");
    }
}