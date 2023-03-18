/* Nama File    : FaktorBil.c */
/* Deskripsi    : Menentukan faktor bilangan yang dapta dibentuk oleh bilangan N */
/* Pembuat      : Hanif Herofa - 24060122120015 */
/* Tanggal      : 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;
    int i;
    
    //Algoritma
    printf("Masukan bilangan N: ");
    scanf("%d",&N);

    printf("Faktor Bilangannya adalah: ");

    if (N > 0){
        for (int i = 1; i <= N; i++){
            if (N % i == 0){
                printf("%d ", i);
            }
        }    
    }
    return 0;
}