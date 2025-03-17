#include <stdio.h> // preprocesor comands <libraries>

int i, j, k;
unsigned int minutosEstacionados = 30;

char y = 'y';
unsigned char dailyWorkedHours = 0;
int main()
{
    /*first hello world in C language*/
    printf("Hello World");
    return 0;
}

/*Basic Types:
    (A) Aritmeticos int 2 a 4 Bytes (byte =! bits 1 byte contiene 8 bits "256 combinaciones de numeros binarios" - 2 bytes contienen 16 bits)
                    char 1 Byute -128 to 127
                    unsigned char 1 byte  0 to 255
                    signed se utiliza un bit para los signos por lo tanto seria (15 bits = 2^15: -32.768 to 32.767)
                    unsigned int 0 to (16 bits = 2^16: 65,535) or 0 to (32 bits = 2^16: 4,294,967,295)

                    short 2 bytes
                    unsigned short 2 bytes 0 to 65,535

                    long 8 bytes
                    unsigned long
    (B) De punto flotante

                    float 4 bytes 1.2E-38 to 3.4E+38    6 decimal places
                    double 8 bytes 2.3E-308 to 1.7E+308 15 decimal places
                    long double 10 bytes 3.4E-4932 to 1.1E+4932 19 decimal places


    void: Especifica que no hay valor disponibles, se usa en 3 escenarios
    1.- funcion retorna tipo de datos void (muchas veces se configuran variables dentro de la funcion pero no se requiere retornar un valor)
        void function()
    2.- funcion tiene argumentos de tipo void
        int random(void)
    3.- Puntero o apuntador
        que va a la direccion fisica de la mermoria de un objeto pero no le importa el tipo de dato que tenga

    void function()


*/
