/* Nama File            : SeqSearch.c */
/* Deskripsi            : Mencari nilai dalam array secara sequential*/
/* Pembuat              : Hanif Herofa - 24060122120015 */
/* Tanggal Pembuatan    : 17 Mei 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int T[100], N, X, i;
    int IX = 1;

    /* Algoritma */
    printf("Masukan nilai N : ");
    scanf("%d",&N);
    printf("Masukan nilai X: ");
    scanf("%d",&X);

    for (i = 0; i < N ; i++){
        printf("Masukan nilai T[%d] :",i);
        scanf("%d",&T[i]);
    }

    i = 0;
    while (i < N && T[i] != X)
    {
        i++;
    }
    if (T[i] == X){
        IX = i;
        printf("Data ditemukan pada indeks %d ", IX);
    }
    else{
        printf("Data tidak ditemukan");
    }
    return 0;
}
