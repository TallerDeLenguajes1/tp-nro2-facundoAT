//============================================================================
// Name        : tp2_1_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 4
#define M 5

int main() {

int f,c;
double mt[N][M];
//double *punt;
//punt=mt;
//getch();
setvbuf(stdout,NULL,_IONBF,0);
for(f = 0;f<N; f++){
   setvbuf(stdout,NULL,_IONBF,0);
   for(c = 0;c<M; c++){
     // *((*(mt+c))+f)=rand() % 10;
      *((*(mt+f))+c)=rand() % 10;
   }
}

for(f = 0;f<N; f++){
   for(c = 0;c<M; c++){
     // printf("  %d  ", *((*(mt+c))+f));
      printf("  %.2lf  ", *((*(mt+f))+c));
   }
   printf("\n");
}
   return 0;
}
