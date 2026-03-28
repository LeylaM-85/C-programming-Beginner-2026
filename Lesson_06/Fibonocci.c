#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    printf("Neçə Fibonacci ədədi göstərilsin: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}