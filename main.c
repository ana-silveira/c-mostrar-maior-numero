/* 52. Fazer um programa para ler n�meros inteiros e ao final mostrar o maior n�mero
digitado. FLAG ser� NRO = �-1�.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int maiorNumero = 0;

    printf("Informe um n�mero: ");
    scanf("%d", &numero);

    while ( numero != -1 ){
        if (maiorNumero < numero) {
            maiorNumero = numero;
        }
        printf("Informe o pr�ximo n�mero: ");
        scanf("%d", &numero);
    }

    printf("O maior n�mero digitado � %d", maiorNumero );

}
