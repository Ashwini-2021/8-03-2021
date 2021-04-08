/*3.	 Write a function isPrime, which accepts an integer as parameter and returns 1 if the number is 
prime and 0 otherwise. Use this function in main to display the first 10 prime numbers.*/
#include<stdio.h>
int isPrime(int);
int main()
{   
    int number,x,i,y,d,p=2;
    printf("enter any number which you want to check prime or not:");
    scanf("%d",&number);
    x=isPrime(number);
    if(x==1)
    {
        printf("%d is prime number",number);
    }
    else{
        printf("%d is not prime number",number);
    }
    printf("\nfirst 10 prime numbers are::");

        for(p=2;p<=30;p++)
          { 
               y=isPrime(p);
               if(y==1)
                  {
                    printf("\t%d",p);
                  }
          }
 return 0;
}

int isPrime(int number)
{   //printf("function call");
    int i,c=0;
    for(i=1;i<=number;i++)
    {   
         if(number%i==0)
         { 
             c++;
             }
    }
    if(c==2)
    {
    return 1;
    }
    else{
        return 0;
    }
}