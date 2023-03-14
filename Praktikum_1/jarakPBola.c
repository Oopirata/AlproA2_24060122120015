/* Nama File    		: jarakPBola.c */
/* Deskripsi    		: Menghitung dan menampilkan jarak y di layar, y = v0 x t - 1/2 x (g x tkuadrat) */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 24 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float v0;
    float t;
    float g = 10;
    float y;

    //Algoritma
    printf("Masukkan kecepatan awal :");
    scanf ("%f",&v0);
    printf("Masukkan waktu :");
    scanf ("%f",&t);

    y = v0 * t - 0.5 * (g*(t*t));

    printf("Jarak yang ditempuh : %f", y);
    return 0;
}
