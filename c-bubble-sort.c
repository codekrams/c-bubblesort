#include <stdio.h>
#include <stdlib.h>
void sortierung(int*, int);

int main()
{
        int test [] = {9,8,7,6,5};
        int laenge=sizeof(test)/sizeof(int);

        printf("Input:");
        int i;
        for (i=0; i<laenge; i++) {
            printf("%d", test[i]);
        }
        printf("\nAlgorithmus:\n");
        sortierung(test, laenge);

        printf("\nOutput: ");
        int j;
        for (j=0; j<laenge; j++) {
            printf("%d", test[j]);
        }
    return 0;
}

void sortierung (int *liste, int laenge){
    int listenplatz=0; 
    int i;
    for (i=1; i<laenge; i++) {
        int j;
        for(j=0; j<laenge-i; j++) { 
            if (liste[j]>liste[j+1]) {
            listenplatz = liste[j];
            liste[j]=liste[j+1];
            liste[j+1]=listenplatz;
            }
            int k;
            for (k=0; k<laenge; k++){ 
                printf("%d", liste[k]);
            }
            printf("\n"); 
        }
        printf("\n"); 
    }
}

