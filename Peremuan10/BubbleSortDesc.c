// Nama Program: BubbleSortDesc.c //
// Nama : Hamam Azidani //
// Nim  : 24060122130099 //


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,pass,i;
    int T[]={19,1,28,5,6,10,11,3,7,20};
    int n = sizeof(T) / sizeof(T[0]);
    for (pass=0;pass<n-1;pass++){
        for (i=n-1;i>pass;i--){
                if (T[i]> T[i-1]){
                    temp=T[i];
                    T[i]=T[i-1];
                    T[i-1]=temp;
                }
        }
    }
     for(i=0;i<n;i++){
        printf("%d",T[i]);
    }
}
