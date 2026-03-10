//İstifadəçinin daxil etdiyi ədədin kubunu hesablayan proqram yazın
#include <stdio.h>
int main(){
int eded, kub;
  printf("Ixtiyari eded daxil et:");
  scanf("%d",&eded);
  kub=eded*eded*eded;
  printf("%d ededinin kubu=%d",eded, kub);
  return 0;
}
