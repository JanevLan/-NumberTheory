//参照A Computational Introduction to Number Theory and Algebra P81
#include <stdio.h>
int egcd(int a, int b)
{
    int r=a,r1=b,e=0;
    while(r&1==0 && r1&1==0)
    {
        r=r>>1;
        r1=r1>>1;
        e++;
    }
    a=r;
    b=r1;

    int  s=1,t=0,s1=0,t1=1;
    while(r1!=0)
    {

       while(r&1==0)
        {
          r=r>>1;
          if(s&1==0 && t&1==0) {s=s>>1;t=t>>1;}
          else {s=(s+b)>>1;t=(t-a)>>1; }
        }
       while(r1&1==0)
        {
          r1=r1>>1;
          if(s1&1==0 && t1&1==0) {s1=s1>>1;t1=t1>>1;}
          else {s1=(s1+b)>>1;t1=(t1-a)>>1; }
        }

       if(r1<r)
       {
            int tmp;
            tmp=r1; r1=r; r=tmp;
            tmp=s1; s1=s; s=tmp;
            tmp=t1; t1=t; t=tmp;
        }

       r1=r1-r;
       s1=s1-s;
       t1=t1-t;
   }

       return r<<e;

}


void main()
{
    int x,y;
    printf("Please Input x and y:");
    scanf("%d%d",&x,&y);
    printf("%d",egcd(x,y));
}
