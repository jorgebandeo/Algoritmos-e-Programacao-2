# Algoritmos-e-Programacao-2
Este código C++ implementa operações relacionadas a matrizes, em particular, a soma de duas matrizes. Aqui está uma descrição das principais funções e funcionalidades do código:

- dinsom: Esta função é responsável por somar duas matrizes, M e N, e retornar o resultado em uma nova matriz R. Ela aloca dinamicamente espaço para a matriz resultante R e realiza a soma dos elementos correspondentes das matrizes M e N.

- preenche: Esta função permite ao usuário preencher uma matriz com valores. Ela solicita que o usuário insira os valores para cada elemento da matriz, percorrendo todas as linhas e colunas.

- printR: Essa função imprime uma matriz (neste caso, a matriz resultante R) na saída padrão. Ela percorre a matriz e imprime seus elementos linha por linha.

- x: A função x implementa uma operação especial de troca de elementos em uma matriz. Ela realiza a troca de elementos em uma matriz quadrada m (tamanho 3x3) de acordo com um padrão específico.

O código principal (na função main) solicita ao usuário o número de linhas e colunas das matrizes M e N, aloca dinamicamente memória para essas matrizes, permite ao usuário preencher a matriz N, aplica a operação x a N, imprime a matriz N resultante e, finalmente, libera a memória alocada para as matrizes.

Observe que a função dinsom está presente no código, mas não está sendo usada na função main. Se você deseja realizar a soma das matrizes M e N, pode descomentar a chamada R=dinsom(M,N,lin,col); e ajustar a saída para imprimir a matriz R. Certifique-se de alocar e liberar memória adequadamente para a matriz R se decidir usá-la.