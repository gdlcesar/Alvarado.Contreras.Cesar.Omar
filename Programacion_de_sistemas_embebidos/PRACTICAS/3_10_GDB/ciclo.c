#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
  char c;
   //modela caracteres de flujo y los devuelve como unsigned char 
  while(c != EOF){
    c = fgetc(stdin);
    int ungect(int c, FILE *flujo);
    if(isalnum(c)) //devuelve el valor a caracter alfanumerico
      printf("%c\n", c);
    else
      c = fgetc(stdin);
  }
  return 1;
}
