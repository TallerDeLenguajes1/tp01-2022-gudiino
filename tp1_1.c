#include <stdio.h>

int main(){
    printf("Hola mundo!\n");
    int num, *p;
    num = 10;
    p=&num;
    printf("Contenido del puntero: *p = %d\n", *p);
    printf("Direccion de memoria almacenada por el puntero: *p = %d\n", p);
    printf("Direccion de memoria de la variable: num = %d\n", &num);
    printf("Direccion de memoria del puntero: *p = %d\n", &p);
    printf ("Tamaño de memoria usado por la variable num es de %zd bytes\n", sizeof (int));
    return 0;
}