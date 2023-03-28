/* Nama Program : JumBarKolMat.c */
/* Deskripsi    : Menambahkan semua nilai ada yang pada baris dan kolom sebuah array 2 dimensi dan menampilkannya dilayar */
/* Nama Pembuat : Hanif Herofa - 24060122120015 */
/* Tanggal      : 22 maret 2023 */

#include <stdio.h>

int main() {

  // kamus

  int M,N;
  int Array[50][50];
  int k,j;
  int sumbar,sumkol;
  int total = 0;  

  //algoritma

  printf("Masukkan ukuran tabel M : ");
  scanf("%d",&M);
  printf("Masukkan ukuran tabel N : ");
  scanf("%d",&N);
  
  printf("Masukkan nilai elemen array dua dimensi :");
  for (k=0;k<M;k++) {
    for(j=0;j<N;j++){
      printf("Indeks ke [%d] : ",k,j);
      scanf("%d",&Array[k][j]);
    }
  }

  for(k=0;k<M;k++){
    sumbar=0;
    for(j=0;j<N;j++) {
      sumbar += Array[k][j];
    }
    total += sumbar;
  }

  for(k=0;k<N;k++) {
    sumkol = 0;
    for(j=0;j<M;j++){
     sumkol += Array[k][j];
    }
    total += sumkol;

  }
  printf("Hasil penjumlahan semua elemennya adalah : %d ",total);

  return 0;
}