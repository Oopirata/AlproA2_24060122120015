/* Nama File    : BilSempN.c */
/* Deskripsi    : Mencetak bilangan sempurna sampai dengan bilangan N */
/* Pembuat      : Hanif Herofa - 24060122120015 */
/* Tanggal       : 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;
    int i;
    int j;
    int faktor;

    //Algoritma
    printf("Masukkan Bilangan integer: ");
    scanf("%d", &N);
    if (N > 0){
        printf("Bilangan primanya adalah: ");
        for ( i = 1; i <= N; i++){
            faktor = 0;
            for ( j = 1; j <= i/2; j++){
                if (i % j == 0){
                    faktor += j;
                }
            }
            if (faktor == i){
                printf("%d ", i);
            }   
        }
    }
    return 0;
}