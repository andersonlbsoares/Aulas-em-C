#include <stdio.h>

int main()
{
    int a;
    int b;
    int primo;

    b = 2;
    primo = 1;

    scanf("%d", &a);

    if (a <= 1) primo = 0;

    while (primo == 1 && b <= a / 2) {
	    if (a % b  == 0) primo = 0;
	    b = b + 1;
    }

    if (primo == 1) printf("sim");
    else printf("nao");

    return 0;
}
