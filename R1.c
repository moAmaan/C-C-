#include<stdio.h>
#include<math.h>
#include<string.h>
#define F(x) x*cos((x)/(x-2))
#define eps 0.001


void main()
{
    int itr;
    printf("Equation is :");
    printf("\n  x*cos((x)/(x-2))\n");
  
     float x0,x1,x2;
    float f0,f1,f2;
    
    int i=0;
    for(x0=0.0; ;)
    {
        f0=F(x0);
        if(f0>0){
            break;
        }
        else
        {
            x0+=0.1;
        }
    }
   x1=x0-0.1;
   f1=F(x1);
   
    printf("\n\t-----------------------------------------");
    printf("\n\t\tIteration      x2       F(x)");
    printf("\n\t-----------------------------------------");
    for(int c=0;c<itr;c++){
do
{
    x2=((x0*f1)-(x1*f0))/(f1-f0);
    f2=F(x2);
    if(f0*f2<0){
        x1=x2;
        f1=f2;
    }
    else
    {
        x0=x2;
        f0=f2;
    }
    i++;
     printf("\n\t\t%d\t   %f\t%f",i,x2,f2);
}while(fabs(f2)>eps);

}
    printf("\n\t\t-----------------------------------------");
    printf("\n\t\t\tRoot=%f",x2);
    printf("\n\t\t-----------------------------------------");
    
}