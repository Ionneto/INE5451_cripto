#include<stdio.h>
#include<string.h>

int main(){

	//DECLARA TEXTO CIFRADO INICIAL E BLOCOS
	int i;
	char texto[] = "EPIOMOPSMLNETSEEEECSISANRLCPCAOA";
	char blocos[strlen(texto)/8][8];
	printf("%s\n\n", texto);

	//DIVIDE O TEXTO NOS BLOCOS
	for(i=0; i<= strlen(texto); i++){
		blocos[i/8][i%8] = texto[i];
	}

	//DECLARA O TEXTO E OS BLOCOS FINAIS, DECIFRADOS
	char textoFinal[strlen(texto)+1];
	int chave[] = {2,4,6,1,8,3,5,7};
	for(i=0; i < strlen(texto); i++){
		textoFinal[i] = blocos[i/8][chave[i%8]-1];
	}
	textoFinal[strlen(texto)] ='\0';
	printf("%s\n", textoFinal);
	return 0;
}
