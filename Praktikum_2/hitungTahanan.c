/* Nama File    		: hitungTahanan.c */
/* Deskripsi    		: Menghitung dan menampilkan di layar total tahanan jika dirangkai seri */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int NoTahanan1;
    int NoTahanan2;
    int NoTahanan3;

    //Algoritma
    printf("Masukkan tahanan 1 : ");
    scanf("%d", &NoTahanan1);
    printf("Masukkan tahanan 2 : ");
    scanf("%d", &NoTahanan2);
    printf("Masukkan tahanan 3 : ");
    scanf("%d", &NoTahanan3);

    if (NoTahanan1 >=0 && NoTahanan2 >=0 && NoTahanan3 >=0){
        printf("%d", NoTahanan1 + NoTahanan2 + NoTahanan3);
    } else {
        printf("Masukkan tahanan tidak boleh negatif");
    }
    return 0;

}