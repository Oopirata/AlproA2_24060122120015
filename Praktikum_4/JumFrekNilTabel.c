/* Nama File            : JumFrekTabel.c */
/* Deskripsi            : Menghitung dan menampilkan jumlah nilai elemen frekuensi yang muncul lebih dari satu kali */
/* Pembuat              : Hanif Herofa - 24060122120015 */
/* Tanggal Pembuatan	: 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int i, K, L, Jum = 0, P;
    int T[100];
    /* Algoritma */
    printf("Masukan nilai K: ");
    scanf("%d",&K);

    for (i = 0; i < K; i++){
        printf("Masukan niali T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (i = 0; i < K; i++){
        P = 1;
        for (L = i+1; L < K; L++){
            if(T[i] != 0 && T[i] == T[L]){
                P = P+1;
                T[L] = 0;
            }
        }
        if (P > 1){
            Jum = Jum + P * T[i];
        } 
    }
    printf("Jumlah nilai frekuensi: ");
    printf("%d", Jum);
    return 0;
}