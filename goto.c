#include <stdio.h>
#include <stdlib.h>
int main()
{
float a, b;//buatlah 2 buah variabel bertipe data float dengan nama ‘a’ dan ‘b’;

    scanf("%f",&a);
    scanf("%f",&b);

    printf("masukkan nilai a : %0.f \n", a);
    printf("masukkan nilai b : %0.f \n", b);
/*buatlah perintah printf yang akan mencetak text  "masukkan nilai b : "
dan perintah scanf untuk menginput nilai variabel b*/

/*buatlah kondisi if
-> Jika b lebih dari 0 maka goto tak_berhingga; */
if (b>0) goto tak_berhingga;

    printf("%f dibagi dengan %f adalah %f\n",a,b,a/b);
    goto selesai;//tulislah statement goto selesai

    tak_berhingga://buatlah label untuk statement goto dengan nama tak_berhingga
    printf("%f dibagi dengan %f adalah %f\n",a,b,a/b);

        selesai:
            ;
}
