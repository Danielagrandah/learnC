#include <stdio.h> // preprocesor comands <libraries>

int n = -2;
    
int main()
{
   
    if (n > 10 && n < 20)
    printf("number is larger than 10 but shorter that 20");
    else if (n == 10)
    printf("n is equal to 10");
    else if( n > 20)
    printf("n is larger that 20");
    else if(n < 10 && n >= 0)
    printf("n is bettwen 0 and 10");
    else
    printf("number can be negative");
    
    
    return 0;
} 