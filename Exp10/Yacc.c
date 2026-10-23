%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *s);
int yylex(void);
%}
//Name : Aaryan Kawale ; PRN : 24070521162
%token FOR LPAREN RPAREN LBRACE RBRACE SEMICOLON ASSIGN IDENTIFIER NUMBER
%%
program:
    for_loop
    ;
for_loop:
    FOR LPAREN initialization SEMICOLON condition SEMICOLON update RPAREN
    LBRACE body RBRACE
    {
        printf("Valid FOR loop structure\n");
    }
    ;
initialization:
    IDENTIFIER ASSIGN NUMBER
    ;
condition:
    IDENTIFIER
    ;
update:
    IDENTIFIER
    ;
body:
    /* Empty body for simplicity */
    ;
%%
void yyerror(char *s)
{
    fprintf(stderr, "Error: %s\n", s);
}
int main(void)
{
    printf("Enter a FOR loop:\n");
    yyparse();
    return 0;
}
