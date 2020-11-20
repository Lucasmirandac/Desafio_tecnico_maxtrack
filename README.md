# Desafio_tecnico_maxtrack
 Output de um simulador de volocímetro.
 
 Para compilar o programa é necessário que o arquivo main.c seja compilado através de uma IDE de progração em C, como codeblocks ou DevC++. O computador do usuário deve possuir o minGW para que a compilação seja efetivada.

------------------------------------
problema:

Este teste tem como objetivo avaliar o raciocínio e o encadeamento de ideias do candidato na resolução de problemas. Os critérios de avaliação das questões serão, principalmente, nível de detalhamento, organização e clareza na explicitação de ideias além da organização de código e lógica para questões de implementação. Leia as questões abaixo e resolva atentamente.
Questão 1: A equipe está desenvolvendo uma funcionalidade de Cockpit virtual. Este cockpit deve ter uma interface gráfica que contenha componentes que simulem um velocímetro com um marcador de velocidade sugerida, medidor de RPMs, nível de combustível, etc. (como a Figura 3).
Figura 3- Cockpit Overview
Na solução final, os dados consumidos por estes componentes devem ter origem na leitura CAN do veículo. Contudo, para uma versão inicial é preciso que os dados sejam simulados - considerando uma certa lógica - para que possam ser consumidos pelo serviço do cockpit.
Considerando este cenário, escreva um simulador (em C ou C++) que gere, randomicamente, valores para o velocímetro (na faixa de 0 a 160 como mostra a figura 3); valores para o marcador de velocidade sugerida – vide item (2) da figura 3 - (apenas valores cuja divisão por 10 resulta em um número inteiro, na faixa de 0 a 100); além disso, o simulador deve retornar uma cor no formato String indicando a situação do carro considerando sua velocidade atual e a velocidade sugerida, sendo: VERMELHO caso a velocidade esteja > ao valor do marcador; deve imprimir a cor AMARELA caso a velocidade esteja entre o valor do marcador e o mesmo valor decrescido de 20%; para velocidades abaixo dos 20% a cor VERDE. O output do simulador deve estar no formado chave:valor.
Exemplo de output do simulador:
 velocidade: 64
 marcador_velocidade_sugerida: 80
 situacao: amarela
Disponibilize o código bem como instruções para compilação.
-----------------------------------
