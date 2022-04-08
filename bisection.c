#include<stdio.h>
#include<math.h>
float fun (float);
void main(){
float a,b,eps,mid;
printf("\n Enter the value od a:");
scanf("%f",&a);
printf("\n Entre the value of b:");
scanf("%f",&b);
printf("\n Entre the value of eps");
scanf("%f",&eps);
mid=(a+b)/2;
while (fabs(fun(mid))>eps){
if((fun(a)*fun(mid))>0)
a=mid;
else
b=mid;
mid=(a+b)/2;
}
printf("%f",mid);
}
float fun (float x){
float y;
y=(x*x*x)-4*x -1;
return y;
}
