#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int velocidade_permitida (){

    /*Função para gerar valores inteiros aleatórios de 0 a 100*/
    int i;
    int velocidade_permitida;
    srand(time(NULL));  //função utilizada para alterar o valor de rand
    velocidade_permitida = 30 + rand()%10*7; // Esta atribuição gera valores de 0 a 100 com um mínimo de 30

    return velocidade_permitida;
}

int velocidade_atual(){

    /*esta função calcula o valor aleatorio da velocidade de 0 a 160*/

    int valor_aleatorio;

    srand(time(NULL)); //função utilizada para alterar o valor de rand
    valor_aleatorio = rand()%160;
    return valor_aleatorio;
}

int main()
{
    struct output_cockpit{

        int velocidade;
        int marcador_velocidade_sugerida;
        char situacao[15];
    };

    struct output_cockpit output;

    output.marcador_velocidade_sugerida = velocidade_permitida ();
    output.velocidade = velocidade_atual();

    if (output.velocidade < output.marcador_velocidade_sugerida*0.2){
        strcat (output.situacao,"Verde");
        }
    if (output.velocidade>output.marcador_velocidade_sugerida)
        strcat (output.situacao,"Vemelho");

    if (output.velocidade < output.marcador_velocidade_sugerida*0.8 && output.velocidade>=output.marcador_velocidade_sugerida*.2)
        strcat (output.situacao,"Amarelo");

    printf("Velocidade: %d \n",output.velocidade);
    printf("Velocidade sugerida: %d \n",output.marcador_velocidade_sugerida);
    printf ("%s \n", output.situacao);

    system("pause");
    return 0;
}
