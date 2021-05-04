#include<stdio.h>
void main()
{
    int n;
    printf("Enter no\n");
    scanf("%d",&n);
    int x=1;
   while(x<=n)
    {
        int c=x;
        while(c>0)
        {
            int r=c%10;
            if(r!=9)
            {
               break;
            }
            else
            {
              n++;
              x++;
            }
            c/=10;
        }
        if(x/10!=9)
        {
            printf("%d",x);
        printf(" ");
        }
        else
        {
            n++;
            x++;
        }
      x++;
    }

}