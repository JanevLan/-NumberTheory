int multiply(int a,int b)
{
   int mul=0;
   int i=0;
   while(b!=0){
   if(b%2==1)  //b的flag标志位为1才累加
   mul+=a<<i;
   b>>=1; i++;
   }
   
   return mul;
}

void main()
{
    int x,y;
    printf("Please Input x and y:");
    scanf("%d%d",&x,&y);
    printf("%d",multiply(x,y));
}
