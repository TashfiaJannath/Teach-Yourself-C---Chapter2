#include<stdio.h>
int main(void)
{
    int i,num;
    printf("Enter an integer");
    scanf("%d", &num);
    for(i=num;i>=0;i=i-1){
        printf("%d \a",i);}
        return 0;}
