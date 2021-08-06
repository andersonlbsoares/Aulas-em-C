#include <stdio.h>
#include <stdlib.h>

int main(){
    char a, b;
    int vencedor;
    scanf("%c\n", &a);
    scanf("%c", &b);
    vencedor = 0;
    
    if(a == 'S' && b =='P') printf("jog1");
    if(a == 'S' && b =='L') printf("jog1");
    if(a == 'P' && b =='R') printf("jog1");
    if(a == 'P' && b =='K') printf("jog1");
    if(a == 'R' && b =='L') printf("jog1");
    if(a == 'R' && b =='S') printf("jog1");
    if(a == 'L' && b =='K') printf("jog1");
    if(a == 'L' && b =='P') printf("jog1");
    if(a == 'K' && b =='S') printf("jog1");
    if(a == 'K' && b =='R') printf("jog1");

    if(b == 'S' && a =='P') printf("jog2");
    if(b == 'S' && a =='L') printf("jog2");
    if(b == 'P' && a =='R') printf("jog2");
    if(b == 'P' && a =='K') printf("jog2");
    if(b == 'R' && a =='L') printf("jog2");
    if(b == 'R' && a =='S') printf("jog2");
    if(b == 'L' && a =='K') printf("jog2");
    if(b == 'L' && a =='P') printf("jog2");
    if(b == 'K' && a =='S') printf("jog2");
    if(b == 'K' && a =='R') printf("jog2");

    if(b == 'K' && a =='K') printf("empate");
    if(b == 'R' && a =='R') printf("empate");
    if(b == 'S' && a =='S') printf("empate");
    if(b == 'P' && a =='P') printf("empate");
    if(b == 'L' && a =='L') printf("empate");

    
    return 0;
}