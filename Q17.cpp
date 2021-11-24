#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float notas[5],ma_nota,me_nota,soma=0;
	int k,pma_Nota,pme_Nota;
	
	for(k=0;k<5;k++){
		scanf("%f",&notas[k]);
		if(k==0){
			ma_nota=notas[k];
			me_nota=notas[k];
			pma_Nota=0;
			pme_Nota=0;
			
		}
		
		if(ma_nota<notas[k]){
			ma_nota=notas[k];
			pma_Nota=k;
			
		}
		
		if(me_nota>notas[k]){
			me_nota=notas[k];	
			pme_Nota=k;
			
		}
	}
	

	for(k=0;k<5;k++){
		if(k!=pme_Nota && k!=pma_Nota){
			soma+=notas[k];
		}
	}
	
	printf("\n%.1f",soma);
    return 0;
}
