#include<stdio.h>
int main(void){
    int choice;
    float a,b;
    printf("1.add 2subtract");
    scanf("%d", &choice);
    printf("Enter two num");
    scanf("%f %f", &a, &b);
    if(choice==1){
        printf("add=%f", a+b);}
    if(choice==2)
    {
        printf("subtract=%f", a-b);}
        }
