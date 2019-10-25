#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,d,A,area_tri,S,f_radius,Red_rose,Violates,Sun_flower;
    while(scanf("%lf",&a) != EOF)
    {
        scanf("%lf %lf",&b,&c);
        p = (a+b+c);
        S = p/2;
        area_tri = sqrt(S * (S - a) * (S - b) * (S - c));
        f_radius = (2*area_tri)/p;
        Red_rose = 3.1416*(f_radius*f_radius);
        Violates = area_tri - Red_rose;
        d = (a*b*c)/(4*area_tri);
        Sun_flower = (3.1416*(d*d))- area_tri;
        printf("%.4lf %.4lf %.4lf\n",Sun_flower,Violates,Red_rose);
    }
    return 0;

}
