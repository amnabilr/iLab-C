#include <stdio.h>
#include <stdlib.h>
int main()
{

    int bil = 1;
    int hasil = 10;
    int x;
    printf("Deret 10 bilangan kuadrat pertama : ");
    //Buatlah perulangan untuk mencetak 10 bilangan kuadrat pertama dengan menggunakan perulangan do - while//
    do {
        x = bil * bil;
        printf (" %d ", x);
        bil = bil + 1;
    } while (bil <= hasil);
    return 0;
}
