/*2.	Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, 
and 0 otherwise.Use this function in main to accept n numbers and check if they are even or odd.*/
#include<stdio.h>
int isEven(int);
int main()
{
    int number,x;
    printf("Enter the number::");
    scanf("%d",&number);
    x=isEven(number);
  
    if(x==1)
    {
        printf("%d is even",number);
    }
    else{
        printf("%d is odd number",number);
    }
    return 0;
}
int isEven(int number)
{
    if(number%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
/*OUTPUT
Enter the number::10
x=1 
-->if x=0 then it is not even number and if x=1 then it is even number

Enter the number::15
x=0 
-->if x=0 then it is not even number and if x=1 then it is even number*/