#include <stdio.h>
int egcd(int a, int b)
{
    int r=a,r1=b,e=0;
    while(r&1==0 && r1&1==0)
    {
        r=r/2;
        r1=r1/2;
        e++;
    }
    a=r;
    b=r1;

    int  s=1,t=0,s1=0,t1=1;
    while(r1!=0)
        {

       while(r&1==0)
        {
          r=r/2;
          if(s&1==0 && t&1==0) {s=s/2;t=t/2;}
          else {s=(s+b)/2;t=(t-a)/2; }
        }
       while(r1&1==0)
        {
          r1=r1/2;
          if(s1&1==0 && t1&1==0) {s1=s1/2;t1=t1/2;}
          else {s1=(s1+b)/2;t1=(t1-a)/2; }
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
