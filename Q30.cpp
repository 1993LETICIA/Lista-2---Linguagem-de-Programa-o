#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n=4,m=3,l,c;

	int matriz[n][m];
	
	printf("\n Digite os valores da matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\n A matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
	for(c=0;c<m;c++){
	printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n\n A matriz transposta � :\n\n");
	for(l=0;l<m;l++){
	for(c=0;c<n;c++){
    printf("%d ",matriz[c][l]);
		}
    printf("\n");
	}
  
    return 0;
}
