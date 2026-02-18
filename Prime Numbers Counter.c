#include <stdio.h>
int main()
{
    int n,count=0,factors;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        factors=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                factors=factors+1;
            }
        }
        if(factors==2)
        {
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}
