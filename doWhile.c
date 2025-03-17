#include <stdio.h>

int main(){
    int n = 10;
    //it's execute the code at least once - is used when you have to inicializace
    do
    {
        printf("n is equal to %d '\n'", n);
        n = n-1;
    } while (n > 10);
    
   
    return 0;

}

