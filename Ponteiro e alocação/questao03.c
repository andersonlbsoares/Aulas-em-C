#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int a = 0;
   scanf("%d", &a);
   char **vetor = (char**) malloc(a * sizeof(char*));
 
   for (int i =0;i<a;i++){
     int n = 0;
     scanf("%d ", &n);
     vetor[i] = (char*)malloc((n+1)*sizeof(char));
     fgets(vetor[i], n+1, stdin);
   }
   
   for(int i =0;i<a;i++){
     for(int j =i;j<a;j++){
       if(strcmp(vetor[i], vetor[j])>0){
         char *temp = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = temp;
       }
     }
   }
   
   for (int i =0;i<a;i++){
     printf("%s\n", vetor[i]);
     free(vetor[i]);
   }
   
   free(vetor);
}