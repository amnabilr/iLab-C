#include <stdio.h>
int main()
{
int pangkat, hasil;

printf("Fungsi Pangkat 3");
scanf("%d", &pangkat);
printf("\nMasukkan sembarang bilangan bulat: %d ", pangkat);
hasil = pangkat * pangkat * pangkat;
printf("\n%d ^ 3 = %d", pangkat, hasil);

return 0;
}
