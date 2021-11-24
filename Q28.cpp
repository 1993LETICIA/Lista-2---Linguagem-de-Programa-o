#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,soma=0;
  
 
printf("\n Digite o número de linhas:\n");
scanf("%d",&n);
printf("\nDigite o número de colunas:\n");
scanf("%d",&m);

	int matriz[n][m];
	
	printf("\n Digite os valores da matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz1[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\n A matriz digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n\n A diagonal Principal é: \n\n");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
        soma=soma+matriz[l][c];
      }
			
		}
	}
  printf("\n A soma dos valores é %d",soma);
    return 0;
}
