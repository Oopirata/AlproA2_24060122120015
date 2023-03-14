/* Nama File    		: volBolaKerct.c */
/* Deskripsi    		: Menghitung dan menampilkan volume bola Vb di layar, Vb = 4/3 x (Phi x rpangkat3), Menghitung dan menampilkan volume kerucut Vk di layar, Vk = 1/2 x Vb */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 26 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float Vb;
    float Phi = 3.14;
    float Vk;

    printf("Masukkan jari-jari :");
    scanf ("%f",&r);


    Vb = 1.3 * (Phi * (r*r*r));
    printf("Volume Bola adalah : %f", Vb);

    Vk = 0.5 * Vb;
    printf("\nVolume Kerucut adalah : %f", Vk);

    return 0;
}
