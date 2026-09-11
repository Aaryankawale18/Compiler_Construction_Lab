%{
//Name: Aaryan K. Kawale , PRN: 24070521162
#include<stdio.h>
%}
%%
one|ONE printf("1");
two|TWO printf("2");
three|THREE printf("3");
four|FOUR printf("4");
five|FIVE printf("5");
six|SIX printf("6");
seven|SEVEN printf("7");
eight|EIGHT printf("8");
nine|NINE printf("9");
ten|TEN printf("10");
prn|PRN PRINTF("2407052162");
%%
int main()
{
yylex();
return 0;
}
