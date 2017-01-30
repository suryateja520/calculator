#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define PI 3.14159265
int main()
{
  int mode,i,c,d;
  char op;
  float n,m,sum,a,b,prod;
  printf("Enter the operation you want to perform:\n1.addition\t2.subtraction\t3.multiplication\t4.division\t5.reminder\t6.exponent\n");
  scanf("%d",&mode);
  switch(mode){
  case 1: printf("Enter the number of operands: ");
    scanf("%f",&n);
    printf("Enter the operands\n");
    for(i=0;i<n;i++){
      scanf("%f",&m);
      sum+=m;
    }
    printf("sum=%f\n",sum);
    break;
  case 2:printf("Enter the operand 1 and operand 2: ");
    scanf("%f%f",&a,&b);
    printf("Difference = %f\n",a-b);
    break;
  case 3:printf("Enter the number of operands: ");
    scanf("%f",&n);
    printf("Enter the operands\n");
    for(i=0;i<n;i++){
      scanf("%f",&m);
      prod*=m;
    }
    printf("product = %f\n",prod);
    break;
  case 4:printf("Enter numerator and denominator: ");
    scanf("%f%f",&a,&b);
    printf("result = %f\n",a/b);
    break;
  case 5:printf("Enter the numerator and denominator: ");
    scanf("%d%d",&c,&d);
    printf("Reminder = %d\n",c%d);
    break;
  case 6:printf("Enter the base and power: ");
    scanf("%f%f",&a,&b);
    printf("(%f)^(%f) = %f\n",a,b,pow(a,b));
      break;
  }
  return 0;
}
