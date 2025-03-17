//  we can use continue only in cicles for, while and do while we can't use in swicth 

#include <stdio.h>

int main(){
    int n = 30;
    int i;
    for( i=0; i < n; i++){
        continue;
        printf("El valor actual de i es %d '\n'", i);
    }
        
    printf("El valor actual de i es %d '\n'", i);
    return 0;

}