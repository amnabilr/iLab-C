#include <stdio.h>

int main()
{
    char nama[50];
    char npm[10];
    char kelas[10];

   printf("Nama = %s ",&nama);
   scanf("%s",&nama);
   printf("NPM = %s ",&npm);
   scanf("%s",&npm);
   printf("Kelas = %s ",&kelas);
   scanf("%s",&kelas);
   printf("Nama = %s\n",nama);
   printf("NPM = %s\n",npm);
   printf("Kelas = %s\n",kelas);
   printf("\n");
   printf("Nama %s, NPM %s, Kelas %s ",nama,npm,kelas);
}
