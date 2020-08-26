#include <stdio.h>

int main ()
{
    int fatorial;
    int resposta = 1;

    printf("Digite o número que você gostaria de saber o fatorial: \n");
    scanf("%i",&fatorial);
    
    for ( ; fatorial >= 1; --fatorial){
        resposta = resposta * fatorial;
    }
    printf("O numéro fatorial é %i.\n", resposta);

}