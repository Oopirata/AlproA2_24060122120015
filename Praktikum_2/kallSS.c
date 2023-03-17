/* Nama File    		: kallSS.c */
/* Deskripsi    		: Menampilkan beberapa hasil operasi aritmatika terhadap kedua bilangan integer tergantung pada pilihan operasi yang dipilih */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int iA;
    int iB;
    char Op;

    //Algoritma
    printf("Masukkan bilangan bulat pertama : ");
    scanf("%d", &iA);
    printf("Masukkan bilangan bulat kedua : ");
    scanf("%d", &iB);
    printf("Masukkan pilihan operasi : ");
    scanf(" %c", &Op);

    if (Op == 'a'){
        printf("%d", iA + iB);
    } else if (Op == 'b'){
        printf("%d", iA - iB);
    } else if (Op == 'c'){
         printf("%d", iA * iB);
    } else if (Op == 'd'){
        printf("%f", (float)iA / iB);
    } else if (Op == 'e'){
        printf("%d", iA / iB);
    } else if (Op == 'f'){
        printf("%d", iA % iB);
    } else {
        printf("Bukan pilihan menu yang benar");
    }
    return 0;
}
