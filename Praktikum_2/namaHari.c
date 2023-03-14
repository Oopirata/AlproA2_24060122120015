/* Nama File    		: billnteger.c */
/* Deskripsi    		: Mmenampilkan di layar nama-nama hari dari nomor hari, yaitu 1 s.d. 5 */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    //Kamus
    int nom;

    //Algoritma
    printf("Masukkan nomor hari : ");

    if (scanf("%d",&nom)){
        if (nom==1){
            printf("Senin");
        } else if (nom==2){
            printf("Selasa");
        } else if (nom==3){
            printf("Rabu");
        } else if (nom==4){
            printf("Kamis");
        } else if (nom==5){
            printf("Jum'at");
        } else if (nom==6){
            printf("Sabtu");
        } else if (nom==7){
            printf("Minggu");
        } else {
            printf("Masukkan nomor hari tidak tepat");
        }
    } else {
        printf("Masukkan nomor hari tidak tepat");
    }
    return 0;
}