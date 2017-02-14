#include<conio.h>
change(int a[])
{
	a[9]=90;
	a[8]=80;
	a[7]=70;
	a[6]=60;
	a[5]=50;
	a[4]=40;
	a[3]=30;
	a[2]=20;
	a[1]=10;
}
int main()
{
	int nums[10]={90,80,73,70,65,60,55,50,45,40},i;
	printf("\nbeforefunctioncall:\n");
	for(int i=0;i<10;i++){
		printf("\t%d",nums[i]);
	}
	printf("\n");
	return 0;
}
