/* Data de submissao: 17/03/2020
 * Nome: Augusto Piato Amstalden
 * RA: 213364
 */

#include <stdio.h>
#define MAX 100

char pilha[MAX];
int inicio, fim;

int pilhaCheia() {
	return (fim == MAX); 	// caso o final for igual a MAX esta cheia
}

int pilhaVazia() {
	return (inicio == fim); 	// verifica se esta vazio
}

void push(char c) {
	if(pilhaCheia() == 0) {
		pilha[fim++] = c;		// adiciona um elemento à pilha
	}
}

int pop() {
	char aux;
	if(pilhaVazia() == 0) {
		aux = pilha[fim - 1];		// remove um elemento da pilha
		fim--;

		return aux;		// retorna o elemento devolvido
		}
	}

int main() {

	char aux;
  char buffer[MAX];
  fgets(buffer, MAX, stdin);

	for(int i = 0; i <= MAX; i++) {
		if(buffer[i] == '\0') {		// caso a entrada ja tinha sido inteira lida
			printf("\n");
			break;
		}

		if((buffer[i] != ' ') && (buffer[i] != '\n')) {	// se estiver na mesma palavra da entrada
			push(buffer[i]);
		}
		else {
			while(pilhaVazia() == 0) {	// printa a palava ao contrario
				aux = pop();
				printf("%c", aux);
			}
			if(buffer[i] != '\n') {
				printf(" ");		// da espaço entre as palavras
			}
		}
	}

  return 0;
}

