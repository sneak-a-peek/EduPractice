#include <stdio.h>

int main() {
    int i, j, M[i], n, q, X[12]={9,5,4,3,4,1,4,1,9,7,7,5};
    n=12;
    q=0;
    for(i = 0; i < n; i++)
    M[i]=0;
    for(i = 0; i < 10; i++)
        for(i = 0; i < n; i++)
        M[X[i]]=M[X[i]]+1;
        for(i = 0; i < 10; i++)
            if(M[i]>1)
             {
                q=q+i*M[i];
                
            }       
    printf("q = %d\n", q);
    return 0;
}