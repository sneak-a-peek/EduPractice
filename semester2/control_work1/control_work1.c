#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f = fopen("data.txt", "r");
    FILE *f1 = fopen("data.txt", "r+");
    int i = 0,l;
    int w;
    while (!feof(f)) 
    {
        l = ftell(f);
        if (fscanf(f, "%d", &w) == 1)
        if (w%2 == 0) {fseek(f1, l, SEEK_SET);
        fprintf(f1, "%s", "\40\40");}
    }
    fclose(f);
    fclose(f1);
    system("PAUSE");
    return 0;
}