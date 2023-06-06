// Nama     : Hanif Herofa
// Nim      : 24060122120015
// Judul    : SelectionDescending.c
// tanggal  : 06/06/2023
#include <stdio.h>

int main (){
    int temp,pass,imax,i;
    int T[]={19,1,28,5,6,10,11,3,7,20};
    int n = sizeof(T) / sizeof(T[0]);
    for(pass=0;pass<n-1;pass++){
        imax = pass;
        for (i=pass+1;i<n;i++){
            if (T[imax]<T[i]){
                imax=i;
            }
        }
        temp = T[imax];
        T[imax]=T[pass];
        T[pass]=temp;     
    }
    for(i=0;i<n;i++){
        printf("%d",T[i]);
    }
}
