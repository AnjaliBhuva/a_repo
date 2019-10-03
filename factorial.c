#include<stdio.h>
#include<time.h>
int fact(int x)
{
    if(x==1)
        return 1;
    else
        return(x*fact(x-1));
}
void main()
{
    double ans;
    clock_t start,end;
    start=clock();
    int x,y;
    printf("enter the number\n");
    scanf("%d",&x);
    y=fact(x);
    printf("factorial of %d is %d\n",x,y);
    end=clock();
    ans=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time taken by your code is %f",ans);
}
