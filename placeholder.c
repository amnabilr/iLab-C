#include<stdio.h>
int main ()
{
    char nama[20];
    int umur;
    float nilai;
    printf("Masukkan Nama Anda :  ");
    scanf("%s", &nama);
    printf("Masukkan Umur Anda :  ");
    scanf("%d", &umur);
    printf("Masukkan Nilai Anda :  ");
    scanf("%f", &nilai);
    printf("\n------------------------------\n");
    printf("Nama  : %s \n",nama);
    printf("Umur  : %d \n",umur);
    printf("Nilai : %5.2f\n",nilai);
    return 0;

}
