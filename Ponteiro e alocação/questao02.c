#include <stdio.h>

void converte_tempo(int segundos, int *hora, int *min, int *seg)
{
   *hora = segundos/3600;
   segundos %= 3600;
   *min = segundos/60;
   segundos %= 60;
   *seg = segundos;
}

int main()
{
   int tempo, h, m, s;
   scanf("%d", &tempo);
   converte_tempo(tempo, &h, &m, &s);
   printf("%d:%d:%d", h, m, s);
}