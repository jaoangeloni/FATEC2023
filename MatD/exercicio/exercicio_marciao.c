//João Pedro Angeloni Alvarenga

#include <stdio.h>

int main (){
  int operacao;
  int p,q;
  
//  int negacao = !p;
//  int e = p && q;
//  int ou = p || q;
//  int seEntao = (!p) || q;
//  int seSe = (seEntao) + ((!q) || p);
//  int ouOu = !(seSe);
  
  printf ("MENU\n");
  printf ("1. ~p\n");
  printf ("2. p ^ q\n");
  printf ("3. p v q\n");
  printf ("4. p _v q\n");
  printf ("5. p -> q\n");
  printf ("6. p <-> q\n\n");
  
  scanf("%d", &operacao);
  
  switch (operacao)
  {
    case 1 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &p);
	printf("\nResultado: %d", !p);
    break;
    
    case 2 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &q);
	printf("\nResultado: %d", p && q);
    break;
    
    case 3 :
   	printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &q);
	printf("\nResultado: %d", p || q);
    break;
    
    case 4 :
   	printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &q);
	printf("\nResultado: %d", !(((!p)||q) && ((!q)||p)));
    break;
    
    case 5:
   	printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &q);
	printf("\nResultado: %d",(!p)||q);
    break;
    
    case 6 :
   	printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
	scanf("%d", &q);
	printf("\nResultado: %d", ((!p)||q) && ((!q)||p));
    break;

    default :
    printf ("Invalido!\n");
  }
//  getch();
}
