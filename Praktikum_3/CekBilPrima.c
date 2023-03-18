/* Nama File    : CekBilPrima.c */
/* Deskripsi    : Menentukan apakah bilangan integer N adalah bilangan prima atau bukan */
/* Pembuat      : Hanif Herofa - 24060122120015 */
/* Tanggal      : 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;
    int i;
    int cek = 0;
    
    //Algoritma
    printf("Masukkan bilangan integer: ");
    scanf("%d",&N);

    for (i = 1; i <= N; i++){
        if (N % i == 0){
            cek++;
        }
    }

    if (cek == 2){
        printf("Bilangan prima");
    }

    else{
        printf("Bukan bilangan prima");
    }
    

    return 0;
}