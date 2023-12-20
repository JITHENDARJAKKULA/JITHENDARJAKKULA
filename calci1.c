#include<stdio.h>
#include<stdlib.h>
int main(){
 char ch;
 double a,b;
 while(1){
 printf("enter any operator(+,-,*,,/)" "if you want to exit print x:");
  scanf("%C",&ch);
   if(ch=='x')
   exit(0);
   printf("enter two first and second operand:");
   scanf("%lf %lf",&a,&b);
   switch(ch){
       case '+':
       printf("%lf + %lf=%lf\n",a,b,a+b);
       break;
       case '-':
       printf("%lf-%.lf=%lf\n",a,b,a-b);
       break;
       case '*':
       printf("%lf*%lf=%lf\n",a,b,a*b);
       break;
       case '/':
       printf("%lf/%.3lf=%lf\n",a,b,a/b);
       break;
       default:
       printf("Error! please write a correct operator");
   }
 }
 return 0;}


       
   
    
    
    
    
    
    
    
    
    
    
