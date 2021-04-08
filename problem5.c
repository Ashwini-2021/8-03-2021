/*5.	Write a function that accepts a character as parameter and returns 1 if it is an alphabet, 
2 if it is a digit and 3 is it is a special symbol. In main, accept characters till the 
user enters EOF and use the function to count the total number of alphabets, digits and special symbols entered. */
#include<stdio.h>
#include<ctype.h>
int isGiven(char);
int main()
{
    char ch,as;
    int gives,x;
    printf("Enter any character:");
    scanf("%c",&ch);
    gives=isGiven(ch);
    printf("return =%d",gives);
    printf("\nreturns 1 if it is an alphabet,2 if it is a digit and 3 is it is a special symbol");
   /* printf("\n\nEnter the characters and if you want to stop enter EOF::");
    printf("%c",as);
   isalnum(as);
    printf("\ntotal alphabets=%c",as);*/
    return 0;
    
}
int isGiven(char ch)
{
    if(isalpha(ch))
    {
        return 1;
    }
    else if(isdigit(ch))
    {
        return 2;
    }
    else if(ispunct(ch))
    {
        return 3;
    }
    else{
        return 0;
    }
}