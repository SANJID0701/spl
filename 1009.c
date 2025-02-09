#include<stdio.h>
int main(){
    char name;
    double a, b;
    int x=100,y=15;

   scanf("%lf %lf",&a,&b);
   double c = (b * x)/y;
   double d = a + c;
   printf("TOTAL = R$ %lf\n",d);


    return 0;
}