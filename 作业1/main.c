#include <stdio.h>
int gcd(int a, int 3b)
{
	if (a==0) return b;
	if (b==0) return a;
	if (a==b) return a;

//�������ֵ����ż����2��һ����������GCD��a��b����2*GCD��a/2��b/2����
	if (a&1==0 && b&1==0)
		return gcd(a>>1, b>>1)<<1;

 //���ֻ��һ��ֵ��ż������2����һ����ͬ�ĳ��������Խ�ż������2��
	else if (a&1==0 && b&1!=0)
		return gcd(a>>1, b);
	else if (b&1==0)
		return gcd(a, b>>1);

//�������ֵ��Ϊ�������ϴ��ֵ��ȥ��С��ֵ��
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
