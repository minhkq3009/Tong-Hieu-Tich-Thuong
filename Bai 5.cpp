#include <stdio.h>
main (void){
float top, button, height, S;
printf("Nhap so a = ", top);
scanf("%f", &top);
printf("Nhap so b = ", button);
scanf("%f", &button);
printf("Nhap so h = ", height);
scanf("%f", &height);

S = (top + button)/2*height;
printf("\nDien tich hinh thang la: %.1f", S);
return 0;
}
