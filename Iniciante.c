#include <stdio.h>
  int main(){
      // criar o tabuleiro 10x10
   int jogo[10][10] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

   };
      //criar os 2 navios
     int navio1[3] = {3, 3, 3};  //  horizontal
     int navio2[3] = {3, 3, 3};  //  vertical

   jogo[9][3] = navio1[0]; //9D  // horizontal
   jogo[9][4] = navio1[1]; //9E
   jogo[9][5] = navio1[2]; //9F  
 
   jogo[5][3] = navio2[0]; //5D  // vertical
   jogo[6][3] = navio2[1]; //6E
   jogo[7][3] = navio2[2]; //7F 
 
   //exibir tabuleiro e navios
printf("**Batalha Naval:**\n");
printf("\n");

printf("  A B C D E F G H I J\n"); 

    int linha,colunaH;

        for (linha = 0; linha < 10; linha++){   
printf("%d ", linha);
        for (colunaH = 0; colunaH < 10; colunaH++){
printf("%d ", jogo[linha][colunaH]);
        }
      printf("\n"); //pula linha apos cada loop completo
}




      printf("\n"); // pula ultima linha




    return 0;
  }

  //Testado