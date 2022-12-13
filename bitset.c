#include <stdio.h>
#include <stdlib.h>

int main (){
   unsigned int k[200]; //criando vetor 
   int x = 0;
   int y = 0;
   int z = 0;
   int i = 0;
   int w = 0;
   int j = 0;

   for(i = 0; i<200; i++){ //colocando 0 em todos os valores do vetor
      k[i] = 0;
   }

   while(x != -1){ // enquanto nao for -1, sera armazenado o valor dentro do seu bit representado no vetor 
      printf("digite os valores que deseja ordenar entre 0 e 5000, e -1 para executar:\n");
      scanf("%d", &x);

      if(x != -1 && x >= 0 && x <= 5000){//for para armazenamento dos numeros digitados em cada bit representado por ele 
         w = x/32;
         j = 1 << (x-(32*w));
         k[w] = k[w] | j;
      }
   }
   
   
   while (y<=5000){// printando os numeros representados por cada bit do vetor 
      if ((k[z] >> (y-(32*z))) & 1 ){
         printf ( "%d\n" , y);
       }
      y++;
      z = y/ 32 ;
   }

   return 0;
}
