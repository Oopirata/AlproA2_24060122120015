/* Nama Program : SimetriTabel.c */
/* Deskripsi    : Menambahkan semua nilai ada yang pada baris dan kolom sebuah array 2 dimensi dan menampilkannya dilayar */
/* Nama Pembuat : Hanif Herofa - 24060122120015 */
/* Tanggal      : 22 maret 2023 */
#include <stdio.h>
#include <stdlib.h>

int main() {

  //kamus
  int *array_a;
  int *array_b;
  int h,i,j,k=0;

  //algoritma
  printf("Masukkan jumlah elemen array a: ");
  scanf("%d",&h);
  array_a = (int*)malloc(h*sizeof(int));

  printf("Masukkan jumlah elemen array b: ");
  scanf("%d",&i);
  array_b = (int*)malloc(i*sizeof(int));

  if(h==i){
        printf("Masukkan nilai array a : ");
      for(j=0;j<h;j++){
        printf("\nMasukkan nilai indeks ke- %d : ",j);
        scanf("%d",&array_a[j]);
   }
        printf("\nMasukkan nilai array b : ");
      for(j=0;j<i;j++) {
        printf("\nMasukkan nilai indeks ke- %d : ",j);
        scanf("%d",&array_b[j]);
    }

      for(j=0;j<h;j++){
        if(array_a[j]==array_b[j]){
          k++;
        }

      }
        if(k==h) {
          printf("Simetri");
      }else{
          printf("Tidak simetri");
        }
      

  }else {
    printf("array tidak simetri");
  }


  free(array_a);
  free(array_b);
  return 0;
}