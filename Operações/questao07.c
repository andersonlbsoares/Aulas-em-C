#include <stdio.h>
  void main(){
    float x, y;
    scanf("%f\n",&x);
    scanf("%f\n",&y);

    float precounidade = y/x;
    printf("%f\n", precounidade*4);
    printf("%f\n", precounidade*8);
    printf("%f\n", precounidade*12);
    printf("%f\n", precounidade*16);
}