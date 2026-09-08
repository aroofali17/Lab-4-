#include <stdio.h>
int main(){
    float n1,n2,result;
    char op;
    printf("Enter first number:");
    scanf("%f",&n1);
    printf("Enter operator(+ - * /):");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf("%f",&n2);
switch(op){
case '+':
result = n1+n2;
printf("Result = %.2f\n",result);
break;
case '-':
result = n1-n2;
printf("Result = %.2f\n",result);
break;
case '*':
result=n1*n2;
printf("Result = %.2f\n",result);
break;
case '/':
if (n2==0){
printf("Error\n");
}
else
{
result = n1/n2;
printf("Result = %.2f\n",result);
}
break;
default:
printf("Invalid symbol\n");
}
return 0;
}

