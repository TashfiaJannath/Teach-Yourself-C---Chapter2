/*Prime number tester*/
#include<stdio.h>
int main(void)
{
    int num,i,is_prime;

    printf("Enter the number to test: ");
    scanf("%d", &num);

    /*now test for factors */

    for(i=2;i<=num/2;i=i+1){
        if((num%i)==0) printf("The  number is not prime. ");
        else printf("The number is prime.");}
        return 0;
        }
