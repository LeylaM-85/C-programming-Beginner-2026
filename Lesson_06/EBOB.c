#include <stdio.h>

int main() {
    int a, b;
    printf("İki ədəd daxil edin: ");
    scanf("%d %d", &a, &b);
    
    int num1 = a, num2 = b; // Orijinal ədədləri saxlamaq üçün
    
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d və %d üçün ƏBOB: %d\n", num1, num2, a);
    return 0;
}