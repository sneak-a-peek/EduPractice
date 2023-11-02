#include <stdio.h>

int main(int **Y, int n, int m){
    int max, i, j, k = 0, d;
    max = Y[0][0];
    for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
    if (Y[j][i]>max) {max = Y[j][i]; k=i;}
    d=0;
    printf("%d\n", k);
    for(i=0;i<n;i++) d+=Y[i][k];
    return d; }
