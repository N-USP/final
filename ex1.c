#include <stdio.h>
#include <math.h>

int main( void )
{
    double x;
    double y;
    scanf("%lf %lf",&x,&y);

    double z;
    z = (x + y) * (x + y);
    printf("%.2f\n",z);

} 