// The string  in C language dosen't exit we have to use arrays so every char is save one by one 
//"Es de humanos errar"


#include <stdio.h> // preprocesor comands <libraries>

// // variables declations  
// const int COSTHOTDOG = 100l; // we can use the suffix l or u for define long or undefined

// const float TOTALBILL = 100.58; // Is a good practique to define const variable in upperCase
// const char NEWLINE = '/n';

// #define PAPERCOST 3 // We don't use equals neither semicolon for define the const when is declared by #define - is better when you use at the begining of the program.

# define PIZZACOST 1.5
const char NEWLINE ='\n';


int main()
{   
    float costoPizzas;
    float numberOfSlices = 3;

    costoPizzas = PIZZACOST * numberOfSlices;
    printf("Total bill is: %c %f", NEWLINE, costoPizzas );
    return 0;
}