#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    stars = 0;

    printf("input size: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++){
        blank1 = i;
        blank2 = (size-1-i)*2;
        for(int j=0; j <blank1; j++){
            printf(" ");
        }
        printf("*");
        for(int j =0; j <blank2; j++){
            printf(" ");
        }
        printf("*\n");
    }
    
    for(int i =0; i<size; i++){
        stars = size*2;
        for(int j=0; j<stars; j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=0; i <size; i++){
        blank1=i;
        stars=size*2-(blank1*2); //10, 8, 6,4,2
        for(int j=0; j<blank1; j++){
            printf(" ");
        }
        for(int j=0; j<stars; j++){
            printf("*");
        }
        printf("\n");
    }

    stars = size*2;
    for(int j =0; j <stars; j++){
            printf("*");
        }

    return 0;
}
