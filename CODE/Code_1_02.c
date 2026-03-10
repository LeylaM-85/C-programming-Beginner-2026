//3 rəqəmli ədədin rəqəmləri cəmini tapan proqramı tərtib edin (468=4+6+8=18)
#include <stdio.h>
int main(){
int eded, yuz, onl, tek, cem;
printf("3 reqemli tam eded daxil edin:");
  scanf("%3d",&eded); // %3d - daxil edilen ededin yalniz ilk 3 reqemini goturur
  yuz=eded/100;
    onl=(eded/10)%10;
    tek=eded%10;
  cem=yuz+onl+tek;
  printf("%d ededinin reqemleri cemi =%d+%d+%d=%d",eded,yuz,onl,tek,cem);
}
