#include<stdio.h>
int main()
{   int n;
    printf("Enter an number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {   if(i%2==1)
            printf("%d ",i);
    }
    return 0;

}
