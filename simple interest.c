#include<stdio.h>
int main(){
    double a,p,r,t;
    printf("input principle amount.\n");
    scanf("%lf",&p);
     printf("input interest rate.\n");
    scanf("%lf",&r);
     printf("input time.\n");
    scanf("%lf",&t);
    a=(p*r*t)/100;
    printf("simple intrest:%.4lf\n",a);
    return 0;
}
