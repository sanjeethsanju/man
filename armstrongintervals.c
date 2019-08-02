#include<stdio.h>
#include<conio.h>
int main()
{
    int low,high,i,temp1,temp2,remainder,result=0,n=0;
    printf("enter the value of low and high\n");
    scanf("%d%d",&low,&high);
    for(i=low+1;i<high;++i)
    {
        temp1=i;
        temp2=i;
        while(temp1!=0)
        {
            temp1/=10;
            ++n;
        }
        while(temp2!=0)
        {
            remainder=temp2%10;
            result+=pow(remainder,n);
            temp2/=10;
        }
        if(result==i)
        {
        printf("%d ",i);
        }
        n=0;
        result=0;
    }
    return 0;
}
