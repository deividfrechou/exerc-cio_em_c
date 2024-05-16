#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int opcao;
	
	do{ 
	  system("cls");
	  system("color 1f");  //muda as cores do fundo e das letras 
	  info();
	  scanf("%d",&opcao);		 
	
	switch(opcao)
	{
		case 1: 		   
          system("pause");
		  cadastra();
	      system("pause");
		  break;		  	
		case 2:	
		  consulta();
	      system("pause");
		  break;
		case 3:	      
		  calcula();
	      system("pause");
		  break;
		case 4:	      		    
		  exit(0);		  
		default:
		  printf("\nEscolha uma opção válida \n\n");
		  system("pause");
		  break;		    
	}
	}while ((opcao >1) || (opcao <5));	
	return 0;
}

