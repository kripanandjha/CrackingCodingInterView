/*
[Google] Give you an array which has n integers,
it has both positive and negative integers. 
Now you need sort this array in a special way.
After that,the negative integers should in the front,
and the positive integers should in the back.
Also the relative position should not be changed.
eg. -1 1 3 -2 2 ans: -1 -2 1 3 2.
O(n)time complexity and O(1) space complexity is perfect.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *arrayPOS;
	int *arrayNEG;
	int numbPOS;
	int numbNEG;
}tLista;


void ordenaLista(tLista list){
	int i, x;
	
	printf("\n");
	
	
	for(x=0; x<list.numbPOS; x++){
		printf("%d ", list.arrayPOS[x]);
	}
	for(i=0; i<list.numbNEG; i++){
		printf("%d ", list.arrayNEG[i]);
	}
	printf("\n");
}

int main(void){
	
	int array[] = {1,5,0,-1,-2,-3,0,-1,7,-2};
	int i, z=0, w=0;
	
	tLista lista;
	lista.arrayNEG = malloc(10 * sizeof *lista.arrayNEG);
	lista.arrayPOS = malloc(10 * sizeof *lista.arrayPOS);
	
	for(i=0; i<sizeof(array)/4; i++){
		if(array[i] < 0){
			lista.arrayNEG[z] = array[i];
			z++;
			lista.numbNEG = z;
		}
		
		else{
			lista.arrayPOS[w] = array[i];
			w++;
			lista.numbPOS = w;
		}
	}
	
	ordenaLista(lista);
	
	free(lista.arrayNEG);
	free(lista.arrayPOS);
	
	return 0;
}
