#include <stdio.h>

main(){
	float r, canhhv, chieudaihcn, chieuronghcn;
	float chuvihinhtron, dientichhinhtron, chuvihv, dientichhv, chuvihcn, dientichhcn;
	
	printf("Nhap ban kinh hinh tron: ", r);
	scanf("%f",&r);
	
	printf("Nhap canh hv:", canhhv);
	scanf("%f",&canhhv);
	
	printf("Nhap chieu dai hinh chu nhat:", chieudaihcn);
	scanf("%f",&chieudaihcn);
	
	printf("Nhap chieu rong hinh chu nhat:", chieuronghcn);
	scanf("%f",&chieuronghcn);
	
	chuvihinhtron = 2*r*3.14;
	dientichhinhtron = r*r*3.14;
	chuvihv = canhhv * 4;
	dientichhv = canhhv*canhhv;
	chuvihcn = 2*(chieudaihcn+chieuronghcn);
	dientichhcn=chieudaihcn*chieuronghcn;
	
	printf("\nChu vi hinh tron la: %.1f", chuvihinhtron);
	printf("\nDien tich hinh tron la: %.1f", dientichhinhtron);
	printf("\nChu vi hinh vuong la: %.1f", chuvihv);
	printf("\nDien tich hinh vuong la: %.1f", dientichhv);
	printf("\nChu vi hinh chu nhat la: %.1f", chuvihcn);
	printf("\nDien tich hinh chu nhat la: %.1f", dientichhcn);
	
return 0;
}





