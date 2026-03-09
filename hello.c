#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    int i, j;

    printf("input size: ");
    scanf("%d", &size);
    blank1 = 0;
    blank2 = size;
    
    for(i; i < size; i++){
        printf(" " * "%d", blank1);
    }
    return 0;
}
