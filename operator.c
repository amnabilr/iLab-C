#include<stdio.h>
int main ()
{
    int x,y,z1,z2;
    x = -2 < -10;
    y = 0 > -5;
    z1 = x || y;
    z2 = x && y;
    printf("hasil dari z = x || y adalah %d\n", z1);
    printf("hasil dari z = x && y adalah %d\n", z2);
}
