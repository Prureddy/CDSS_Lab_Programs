//lex code 
%{ 
#include "y.tab.h" 
%} 
%% 
[a-zA-z] return L; 
[0-9] return D; 
%% 
//yacc code 
%{ 
#include<stdio.h> 
#include<stdlib.h> 
%} 
%token L D 
 
%% 
var:L E {printf("Valid Variable\n"); return 0;} 
E:E L; 
|E D; 
| ; 
%% 
 
int main() 
{ 
printf("Type the variable\n"); 
yyparse(); 
return 0; 
} 
int yyerror() 
{ 
printf("Invalid Variable\n"); 
exit(0); 
}
