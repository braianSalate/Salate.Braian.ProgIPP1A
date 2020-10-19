#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char a);
int main()
{
    printf("\033[2J");
    float resultadoConDesc = 0;
    float precioProducto = 50.3;
    int contadorLetras = 0;
    char miCadena[20] = "Palangana";
    char miLetra = "a";

    resultadoConDesc = aplicarDescuento(precioProducto);
    contadorLetras = contarCaracteres(miCadena, miLetra);

    printf("El precion es: %.2f, y si le aplico el 5 de descuento es: %.2f\n",precioProducto ,resultadoConDesc);
    printf("La letra %c aparece %d veces en la cadena %s\n", miLetra, &contadorLetras, miCadena);
    return 0;
}

float aplicarDescuento(float precio)
{
    int resultado = 0;
    int descuento = 0.05;

    if(precio > 0)
    {
        resultado = (float) precio - (precio*descuento);
    }
    return resultado;
}

int contarCaracteres(char cadena[], char a)
{
    int contador = 0;
    int tam = strlen(cadena);

    for(int i = 0; i<tam-1;i++)
    {
        if(cadena[i] == a)
        {
            contador++;
        }
    }
    return contador;
}
