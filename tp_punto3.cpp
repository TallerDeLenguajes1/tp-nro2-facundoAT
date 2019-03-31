//============================================================================
// Name        : taller.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 15

int main(void){

   int** matriz;
   int f,c,cont;
   int *Arreglo;

   matriz = (int **) malloc(sizeof(int*)*F);
   Arreglo = (int*) malloc(sizeof(int)*15);
   srand(time(NULL));

   for (f = 0; f < F; ++f){
      cont = 0;
      int num= rand() % 11 + 5;
      matriz[f] = (int *) malloc(sizeof(int) * (num));

      for (c = 0; c < num; ++c){
         matriz[f][c] = rand() % 900 + 100;
         printf("%d  ", matriz[f][c]);
         if ((matriz[f][c]%2)==0){
            cont++;
         }
      }
      Arreglo[f] = cont;
      puts("\n");
   }
   puts("\nCantidad de pares por cada fila:");
   for (int i = 0; i < F; ++i){
      printf("%d  ", Arreglo[i]);
   }
}
