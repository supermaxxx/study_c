#include <stdio.h>
/*
水仙花数是指一个 n 位数 ( n≥3 )，
它的每个位上的数字的 n 次幂之和等于它本身。
（例如：1^3 + 5^3+ 3^3 = 153）
*/
main()
{
int i,j,k,l,n;
printf("水仙花数(3位): ");
for(n=100;n<1000;n++)
{
i=n/100;/*分解出百位*/
j=n/10%10;/*分解出十位*/
k=n%10;/*分解出个位*/
if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
printf("%-5d",n);
}
printf("\n");
printf("水仙花数(4位): ");
for(n=1000;n<10000;n++)
{
i=n/1000;/*分解出千位*/
j=n/100%10;/*分解出百位*/
k=n/10%10%10;/*分解出十位*/
l=n%10%10;/*分解出个位*/
if(i*1000+j*100+k*10+l==i*i*i*i+j*j*j*j+k*k*k*k+l*l*l*l)
printf("%-5d",n);
}
printf("\n");
}

/*
result:
水仙花数(3位): 153 370 371 407
水仙花数(4位): 1634 8208 9474
*/