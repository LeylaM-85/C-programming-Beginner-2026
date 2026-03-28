#include <stdio.h>

int main() {
    int n, fakt = 1;
    printf("Faktorialı tapılacaq ədədi daxil edin: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        fakt *= i;
    }
    printf("%d! = %d\n", n, fakt);
    return 0;
}