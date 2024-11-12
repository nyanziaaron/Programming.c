#include <stdio.h>
int main() {
    double pi,r,h,v;
printf("input pi value.\n");
scanf("%lf",&pi);
printf("enter r value.\n");
scanf("%lf",&r);
printf("enter h value.\n");
scanf("%lf",&h);
v=pi*r*r*h;
printf("volume:%.4lf\n",v);
    return 0;
}
