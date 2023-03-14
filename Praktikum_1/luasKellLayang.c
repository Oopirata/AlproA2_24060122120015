/* Nama File    		: luasKellLayang.c */
/* Deskripsi    		: Menghitung dan menampilkan luas luas layang-layang dan keliling layang-layang di layar */
/* Pembuat      		: Hanif Herofa - 24060122120015 */
/*Tanggal Pembuatan		: 26 Februari 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Kell;

    //Algoritma
    printf("Masukkan sisi satu layang-layang :");
    scanf ("%f",&s1);
    printf("Masukkan sisi dua layang-layang :");
    scanf ("%f",&s2);
    printf("Masukkan diagonal satu layang-layang :");
    scanf ("%f",&d1);
    printf("Masukkan diagonal dua layang-layang :");
    scanf ("%f",&d2);


    Luas = 0.5 * d1 * d2;
    printf ("Luas layang-layang : %f", Luas);
    Kell = 2 * (s1 + s2);
    printf ("\nKeliling layang-layang : %f", Kell);
    return 0;
}
