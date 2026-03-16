//Daxil edilmiş ad və soyadın uzunluğunu tapan proqram qrun.
#include <stdio.h>
#include <string.h>

int main() {
    char tam_ad[100];
    int uzunluq;

    printf("Ad ve soyadinizi daxil edin: ");
    
    // fgets() istifadə edirik ki, boşluq daxil olmaqla bütün sətri oxuya bilək
    fgets(tam_ad, sizeof(tam_ad), stdin);

    // fgets() sonuna avtomatik \n (yeni sətir) əlavə etdiyi üçün onu silirik
  //strcspn() ("String Complement Span")
    tam_ad[strcspn(tam_ad, "\n")] = 0;
  
//strlen() (String Length): o Mətnin neçə simvoldan ibarət olduğunu (uzunluğunu) hesablamaq üçün. 
    uzunluq = strlen(tam_ad);

    printf("Daxil etdiyiniz '%s' metninin uzunlugu: %d\n", tam_ad, uzunluq);

    return 0;
}
