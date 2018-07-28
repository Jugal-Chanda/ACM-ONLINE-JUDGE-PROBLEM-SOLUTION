#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,sum;
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
