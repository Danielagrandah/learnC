#include <stdio.h>

int main()
{
    for (size_t i = 0; i < count; i++)
    {
        for (size_t i = 0; i < count; i++)
        {
            for (size_t i = 0; i < count; i++)
            {
                if(panic)
                    goto errorHandler;
            }
            
        }
        
    }
    

    errorHandler: // All the code to fix your whole mess. ;
    printf("Hello World");
    return 0;
}