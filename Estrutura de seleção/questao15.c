#include <stdio.h>

void main(){
    int x, y, z = 0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if (x == y && x==z) printf("empate");
    else if (x == y) printf("jog3");
    else if (x == z) printf("jog2");
    else if (y == z) printf("jog1");
    else if (y == x) printf("jog3");
    else if (z == y) printf("jog1");
    else if (z == x) printf("jog2");
    


}