/* Nama File    		: jarakGLBB.c */
/* Deskripsi    		: Menghitung dan menampilkan jarak S di layar, S = v0 x t + 1/2 x (a x tkuadrat)*/
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 22 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v0;
    float t;
    float a;
    float S;

    printf("Masukkan kecepatan awal :");
    scanf ("%f",&v0);
    printf("Masukkan waktu :");
    scanf ("%f",&t);
    printf("Masukkan percepatan :");
    scanf ("%f",&a);


    S = v0 * t + 0.5 * (a*(t*t));
    printf ("Hasilnya adalah : %f", S);
    return 0;
}
