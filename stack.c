#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top =-1;
void push(int stack[],int num)
{
if(top==SIZE-1)
{
    printf("\n Stack overflow");

}
else{
    top ++;
    stack[top]=num;
}
}
void pop(int stack[])
{
    int dt;
    if(top==-1)
    {

        printf("\n stack underflow");
    }
    else{
        dt=stack[top];
        top--;
        printf("\n poped item=%d",dt);

    }
}
void display(int stack[])
{

    int i;
    if(top==-1)
    {

        printf("\n stack is empty");
    }
    else{
        printf("\nstack content is\n");
        for(i=top;i>=0;i--)
        {

            printf("|%d|\n",stack[i]);
        }
    }
}
int main()
{
    int num,choice;
    printf("1.PUSH \n 2.POP \n 3.Display 4.Exit");
    while(1)
    {

        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {

            case 1:
                printf("\n Enter the number u want to print:");
                scanf("%d",&num);
                push(stack,num);
                break;
                case 2:
                    pop(stack);
                    break;
                case 3:
                    display(stack);
                    break;
                    case4:
                        Exit(0);
        }
        }
        return 0;
}
