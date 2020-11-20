#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int velocidade_permitida (){

    /*Função para gerar valores inteiros aleatórios de 0 a 100*/
    int i;
    int velocidade_permitida;

    for (i=0;i<10;i++){

        velocidade_permitida = rand()%10*10; // Esta atribuição gera valores de 0 a 100

        if (velocidade_permitida < 30) // Estamos considerando que a velocidade mínima permitida é 30km/h
            continue;

        printf("%d \n",velocidade_permitida);
    }

    return velocidade_permitida;
}

int velocidade_atual(int velocidade_inicial){
    /*Apartir de uma velocidade recebida aleatoriamente*/

    int velocidade = velocidade_inicial;
    int valor_aleatorio;
    int contador;

    while(1){
        contador = 0;
        srand(time(NULL));
        valor_aleatorio = rand()%10;

        if(valor_aleatorio < 5){

            while(contador != 3){
                // do something
                velocidade = velocidade - valor_aleatorio;
                printf("%d ", velocidade);
                Sleep(1000);
                contador++;
            }
        }

        if(valor_aleatorio >= 5){

            while(contador!=5){
                velocidade = velocidade + valor_aleatorio;
                printf("%d ", velocidade);
                Sleep(1000);
                contador++;
            }
        }
    }
}

int main()
{

    velocidade_permitida ();
    velocidade_atual(30);

    return 0;
}
