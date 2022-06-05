#include <stdio.h>
void main () {
  int z = 45; /* membuat variabel 'z' bertipe data integer dengan nilai 45 */
  int *pz; /* membuat pointer untuk variabel z dengan nama 'pz' bertipe data integer*/
   pz = &z; /* mengisi alamat memori variabel z ke dalam pointer pz */

   printf("Alamat memori dari variabel z: 64ed042c \n");

   /* alamat memori yang disimpan pointer */
   printf("Alamat memori dari pointer pz: 64ed042c \n");

   printf("Nilai pada *pz: %d", *pz); /* menggunakan perintah printf untuk mencetak "Nilai pada *pz:  "
      dan mengambil nilai z menggunakan pointer*/
      return 0;
}