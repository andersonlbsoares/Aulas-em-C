#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b){
    int x = *b;
    *b = *a;
    *a = x;
}

int main()
{
   int x, y;
   scanf("%d %d", &x, &y);
   troca(&x,&y);
  
 
   printf("%d %d", x, y);
}
