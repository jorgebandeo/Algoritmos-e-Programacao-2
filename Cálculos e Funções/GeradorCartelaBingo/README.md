Esta pasta contém um código em C++ que implementa um gerador de cartelas de Bingo. O código utiliza uma matriz de 5x5 para representar a cartela e preenche-a com números aleatórios, garantindo que não haja repetições de números em cada coluna. Ele também ordena os números em cada coluna em ordem crescente usando o algoritmo de ordenação por inserção (Insertion Sort).

O programa começa incluindo as bibliotecas necessárias, como iostream, time.h, stdlib.h, stdio.h e conio.h. Em seguida, define uma função chamada "Insertion" para ordenar as colunas da matriz. Além disso, há uma função chamada "verificador_de_repetiCAo" para verificar se um valor já foi escolhido em uma coluna específica da cartela, a fim de evitar repetições.

A função principal, "prenchimento_da_cartela", gera números aleatórios para preencher a matriz da cartela e garante que não haja repetições em cada coluna. A cada linha da matriz, o intervalo de valores é aumentado, garantindo uma variedade de números em cada coluna. Após o preenchimento, a função chama o algoritmo de ordenação para classificar os números em cada coluna.

Finalmente, o programa principal, "main", cria uma matriz de 5x5 e chama a função "prenchimento_da_cartela" para gerar e imprimir uma cartela de Bingo.

Esta pasta é útil para quem deseja gerar cartelas de Bingo de forma automatizada e aleatória em um programa C++.