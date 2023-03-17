/* Nama File    		: CekSegitiga.c */
/* Deskripsi    		: Menentukan jenis segitiga berdasarkan 3 sisi dan menampilkannya di layar */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int S1;
    int S2;
    int S3;

    //Algoritma
    printf("Masukkan sisi 1 segitiga : ");
    scanf("%d", &S1);
    printf("Masukkan sisi 2 segitiga : ");
    scanf("%d", &S2);
    printf("Masukkan sisi 3 segitiga : ");
    scanf("%d", &S3);

    if (S1 <= 0 || S2 <= 0 || S3 <= 0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    } else if (S1 == S2 && S2 == S3){
        printf("Segitiga sama sisi");
    } else if (S1 == S2 || S2 == S3 || S3 == S1){
         printf("Segitiga sama kaki");
    } else {
        printf("Segitiga sembarang");
    }
    return 0;
}
