#include <stdio.h>
int main (void )
{
  int operacao;
  bool p,q;
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
//	scanf("%b", p);
//	int resultado = !p;
    break;
    
    case 2 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 3 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 4 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 5 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    
    case 6 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    //FAZER A LOGICA
    //IMPRIMIR O RESULTADO
    break;
    

 

    default :
    printf ("Invalido!\n");
  }
  
  getch();
  return 0;
}
