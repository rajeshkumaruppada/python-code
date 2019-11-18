#include <stdio.h>
#include<math.h>
int main() {
    long k,j;
    scanf("%ld%ld",&k,&j);
    if((k>0&&k<=pow(10,10))&&(j>0&&j<=pow(10,10)))
    {
        if(k==1&&j==1)
            printf("2");
        else if(k==0||j==0)
            printf("0");
        else
            printf("2");
    }
    else
    {
        printf("0");
    }
    return 0;
}
