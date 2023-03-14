/* Nama File    		: billnteger.c */
/* Deskripsi    		: Menampilkan di layar apakah bilangan i termasuk bilangan bulat positif atau nol atau negative */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    // Kamus
    int i;

    // Algoritma
    printf("Masukkan bilangan bulat : ");
    
    if (scanf("%d",&i)){
        if (i > 0) {
        printf("Bilangan bulat positif\n");
    } else if (i < 0) {
        printf("Bilangan bulat negative\n");
    } else {
        printf("Bilangan nol\n");
    }
    } else {
        printf("Bukan termasuk sebuah bilangan\n");
    }
    return 0;
}