 #include <stdio.h>
 #include <math.h>

 float cuadradoDnumero (float num);
 void cuadradoDnumero2 (float num);
 void invertir (int *a, int *b);
 void ordenar (int *a, int *b);

 int main(){
    float num, aux;
    int a, b;
    printf("\n Ingrese una numero cualquiera: ");
    scanf("%f", &num);
    aux=cuadradoDnumero(num);
    printf("\n -------------------a");
    printf("\n Resultado devuelto por una funcion");
    printf("\n El cuadrado del numero ingresado es %.2f\n", aux);
    printf("\n -------------------b");
    printf("\n Resultado mostrado por una funcion");
    cuadradoDnumero2(num);
    printf("\n -------------------c");
    printf("\nDireccion de la variable num: %d\n", &num);
    printf("\nContenido de la variable num: %.2f\n", num);
    printf("\n -------------------d");
    printf("\n Ingrese dos numero enteros:");
    printf("\nPrimer numero: ");
    scanf("%d", &a);
    printf("\nSegundo numero: ");
    scanf("%d", &b);
    printf("Al inicio - a= %d, b= %d \n", a, b);
    invertir(&a, &b);
    printf("Despues del cambio - a= %d, b= %d \n", a, b);
    printf("\n -------------------e");
    printf("\nValor inicial a= %d, b= %d \n", a, b);
    ordenar(&a, &b);
    printf("\nValor ordenado a= %d, b= %d \n", a, b);
    return 0;
 }
 // funcion que retorna resultado
 float cuadradoDnumero (float num)
 {
    return pow(num,2);
 }
 // funcion que muestra un resultado
 void cuadradoDnumero2 (float num)
 {
    printf("\n El cuadrado del numero ingresado es %.2f", pow(num,2));
 }
//invertir valores de dos variables
 void invertir (int *a, int *b)
 {
     int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 }
//ordenar valores
void ordenar (int *a, int *b)
{
    if (*a>=*b)
    {
        invertir(a, b);
    }
}