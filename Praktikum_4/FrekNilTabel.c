/* Nama File            : FrekNilTabel.c */
/* Deskripsi            : Menghitung dan menampilkan nilai elemen yang frekuensi munculnya lebih dari satu kali */
/* Pembuat              : Hanif Herofa - 24060122120015 */
/* Tanggal Pembuatan    : 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int T[1000], X[1000];
    int K , i, L, P = 0;

    /* Algoritma */
    printf("Masukan nilai K: ");
    scanf("%d", &K);

    for (i = 0; i < K; i++){
        printf("Masukan nilai T[%d]: ",i);
        scanf("%d",&T[i]);
        X[i] = 1;
    }    
    for (i = 0; i < K; i++){
        P = 1;
        for (L = i+1 ; L < K; L++){
            if (T[i] == T[L]){
                P++;
                X[L] = 0;
            }            
        }
        if (X[i] != 0 ){
            X[i] = P;
        }
    }
    for (i = 0; i < K; i++){
        if (X[i] > 1){
            printf("%d ", T[i]);
        }
    }
    return 0;
}