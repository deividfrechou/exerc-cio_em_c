#include <stdio.h>
#include <stdlib.h>


void cadastra(){
	FILE *arquivo;
	int n1,n2,n3=0;
	
	fopen_s(&arquivo, "codigodev.txt", "a+"); 
	
	  printf("Digite Nome:");
	  do{
	  n2 = getchar();	  
	  fputc(n2, arquivo);
	  } while(n2 != '\n');

	  printf("Digite telefone:");
	  do{
	  n2 = getchar();	  
	  fputc(n2, arquivo);
	  } while(n2 != '\n');
	  
	  printf("Digite email:");
	  do{
	  n3 = getchar();	  
	  fputc(n3, arquivo);
	  } while(n3 != '\n');
		
    fclose(arquivo);
	return 0;
}
