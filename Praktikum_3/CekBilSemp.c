/* Nama File    : CekBilSemp.c */
/* Deskripsi    : Menentukan apakah bilangan integer N adalah bilangan sempurna atau bukan */
/* Pembuat      : Hanif Herofa - 24060122120015 */
/* Tanggal      : 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;
    int i;
    int faktor = 0;

    //Algoritma
    printf("Masukkan Bilangan integer: ");
    scanf("%d", &N);

    for ( i = 1; i <= N/2; i++){
        if (N % i == 0){
           faktor += i; 
        }
    }
    if (faktor == N){
        printf("Bilangan sempurna");
    }
    else{
        printf("Bukan bilangan sempurna");
    }

    return 0;
}