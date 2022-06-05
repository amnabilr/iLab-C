#include <stdio.h>
int main(){
    

int jarijari;
float keliling;
double luas;

printf("Masukkan Jari-jari Lingkaran : ");
// Menyimpan nilai yang user input ke varible jarijari
scanf("%d", &jarijari);
printf("%d", jarijari);
printf("\n");

keliling = 2 * jarijari * 3.14;
printf("Maka Keliling Lingkaran = %f \n",keliling);

luas = 3.14 * jarijari * jarijari;
printf("Maka Luas Lingkaran = %f \n",luas);


}