/* Nama File            : NilMax2Tabel.c */
/* Deskripsi            : Menampilkan di layar nilai maksimum ke 2 dari tabel yang berisi bilangan integer sembarang */
/* Pembuat              : Hanif Herofa - 24060122120015 */
/* Tanggal Pembuatan    : 20 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int K, i, max1 = 0, max2 = 0, T[100]; 

    /* Algoritma */
    printf("Masukan nilai K: ");
    scanf("%d",&K);

    for (i = 0; i < K; i++){
        printf("T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (i = 0; i < K; i++){
        if (T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }else if (T[i] == max1){
            max1 = T[i];
        }else if (T[i] > max2){
            max2 = T[i];
        }        
    }
    printf("Nilai terbesar ke-2 : %d", max2);
    return 0;
}