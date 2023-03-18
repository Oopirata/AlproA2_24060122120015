/* Nama File    : BilPrimaN.c */
/* Deskripsi    : Mencetak bilangan prima sampai dengan bilangan integer sembarang N */
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
            for ( j = 1; j <= i; j++){
                if (i % j == 0){
                    faktor ++;
                }
            }
            if (faktor == 2){
                printf("%d ", i);
            }
            
        }
    }
    return 0;
}