#include <stdio.h>
int gcd(int a, int 3b)
{
	if (a==0) return b;
	if (b==0) return a;
	if (a==b) return a;

//如果两个值都是偶数，2是一个公因数，GCD（a，b）＝2*GCD（a/2，b/2）。
	if (a&1==0 && b&1==0)
		return gcd(a>>1, b>>1)<<1;

 //如果只有一个值是偶数，则2不是一个共同的除数，可以将偶数除以2。
	else if (a&1==0 && b&1!=0)
		return gcd(a>>1, b);
	else if (b&1==0)
		return gcd(a, b>>1);

//如果两个值都为奇数，较大的值减去较小的值。
	else if (a>b)
		return gcd(a-b,b);
	else
		return gcd(a,b-a);
}


void main()
{
    int x,y;
    printf("Please Input x and y:");
    scanf("%d%d",&x,&y);
    printf("%d",gcd(x,y));
}
