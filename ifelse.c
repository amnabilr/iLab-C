#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int a,b,c,d,e,max;

    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    scanf("%i",&e);

    printf("masukkan bilangan pertama : %i\n",a);

    printf("masukkan bilangan kedua : %i\n",b);

    printf("masukkan bilangan ketiga : %i\n",c);

    printf("masukkan bilangan keempat : %i\n",d);

    printf("masukkan bilangan kelima : %i\n",e);



    if((a>b)&&(a>c)&&(a>d)&&(a>e))
        max=a;
    else if((b>a)&&(b>c)&&(b>d)&&(b>e))
        max=b;
    else if((c>a)&&(c>b)&&(c>d)&&(c>e))
        max=c;
    else if((d>a)&&(d>b)&&(d>c)&&(d>e))
        max=d;
    else max=e;

    printf("\n");
    printf("Bilangan terbesar adalah %i\n",max);

    if(max>0)
        printf("Bilangan tersebut adalah bilangan positif(+)");
    else printf("Bilangan tersebut adalah bilangan negatif(-)");
}
