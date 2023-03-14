/* Nama File    		: gayaSentr.c */
/* Deskripsi    		: Menghitung dan menampilkan gaya F di layar, F = m x (vkuadrat / r) */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 25 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float m;
    float v;
    float r;
    float F;

    //Algoritma
    printf("Masukkan massa :");
    scanf ("%f",&m);
    printf("Masukkan kecepatan :");
    scanf ("%f",&v);
    printf("Masukkan jari-jari :");
    scanf ("%f",&r);

    F = m * ((v*v) / r);
    printf("Besar gaya yang terjadi : %f", F);
    return 0;
}
