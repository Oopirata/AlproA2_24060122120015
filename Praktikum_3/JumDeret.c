/* Nama File    : JumDeret.c */
/* Deskripsi    : Menghitung jumlah total deret bilangan sebanyak N */
/* Pembuat      : Hanif Herofa - 24060122120015 */
/* Tanggal       : 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int N;
    int i;
    int total = 0;

    //Algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d",&N);

    if (N > 0){
        for (int i = 1; i <= N; i++){
        total += i;    
        }     
    }
    printf("%d", total);

    return 0;
}