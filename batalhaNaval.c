#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

//cria lista de cabeçalho

    char letras[] = {'A', 'B', 'C', 'D', 'E' , 'F' ,'G','H', 'I', 'J'};
    int tab[10][10];

// zerar a matriz toda para evitar buffer

for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            tab[i][j] = 0;
        }
    }


//imprime o cabeçalho com letras nas respectivas colunas.
    printf("\n           BATALHA NAVAL\n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", letras[j]);
    }
    printf("\n");


//criar os dois navios, um na horizontal e outro na vertical.

for ( int i = 3; i < 6; i++) //navio na vertical representado por 3
{
    tab[i][4] = 3;
}

for ( int j = 3; j < 6; j++) //navio na horizontal representado por 3
{
    tab[8][j] = 3;
}

// Imprime navio na diagonal
for ( int i = 1; i < 4; i++) //navio na diagonal principal representado por 3
{
    tab[i][i] = 3;
}

for ( int j = 1; j < 4; j++) //navio na diagonal secundaria representado por 3
{
    tab[j][9-j] = 3;
}


//imprime o cabeçalho com letras nas respectivas linhas e tambem printa os elementos da matriz

    
    for (int i = 0; i < 10; i++) {
        printf(" %d ", i);
        for(int j = 0; j < 10; j++){
            printf(" %d ", tab[i][j]);
        }
        printf("\n");
    }
//ponto  interessante: a matriz tab[][] é preenchida com 0 e não faz parte da linha de cabeçalho de A a H e nem da coluna de 0 a 9
   
    return 0;
}
