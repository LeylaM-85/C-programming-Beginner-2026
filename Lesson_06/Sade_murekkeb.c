#include <stdio.h>

int main() {
    int n, sade = 1;
    printf("Yoxlanılacaq ədədi daxil edin: ");
    scanf("%d", &n);
    
    if(n <= 1) {
        sade = 0;
    } else {
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                sade = 0;
                break;
            }
        }
    }
    
    if(sade)
        printf("%d sadə ədəddir.\n", n);
    else
        printf("%d mürəkkəb ədəddir.\n", n);
        
    return 0;
}