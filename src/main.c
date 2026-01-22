#include <stdio.h>

 
int is_even(int numero) {
    
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero_usuario;

        
    printf("Ingrese un número: ");
    scanf("%d", &numero_usuario);

    
    if (is_even(numero_usuario) == 1) {
        printf("El número %d es par \n", numero_usuario);
    } else {
        printf("El número %d es impar \n", numero_usuario);
    }

    return 0;
}