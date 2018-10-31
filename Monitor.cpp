#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

//Autor: Jefferson dos Santos de Carvalho (jeffersoncarvalho60@outlook.com) 
//Data: 05/04/2017

const char pixel[4] = " 0 "; //Define o pixel que vai ser "aceso" das letras

int cursor = 0; //Posi��o do cursor
int linha = 0; //posi��o da linha
int cursorTemp1, cursorTemp2, cursorTemp3 = 0; //Salvam a posi��o do cursor ao quebrar linha

char vetor[24][24][4];

void inicializaVetor(){ //Inicializa o vetor
	for(int i = 0; i < 24;i++){
		for(int j = 0; j < 24; j++){
			strcpy(vetor[i][j], "[ ]");
		}
	}
}

void imprimeVetor(){ //Imprime o vetor
	for(int i = 0; i < 24;i++){ 
			for(int j = 0; j < 24; j++){
				printf(vetor[i][j]);
			}
			printf("\n");
		}
	printf("Cursor principal: %d\n", cursor); //Acompanhamento das vari�vies
	printf("Linha principal: %d\n", linha);
	printf("CursorTemp1: %d\n", cursorTemp1);
	printf("CursorTemp2: %d\n", cursorTemp2);
	printf("CursorTemp3: %d\n", cursorTemp3);
}

void verificaLinha(){
	if(cursor == 24){
		if(linha == 0){
			linha += 6;
			cursor = 0;
			cursorTemp1 = 24;
		}else if(linha == 6){
			linha += 6;
			cursor = 0;
			cursorTemp2 = 24;
		}else if(linha == 12){
			linha += 6;
			cursor = 0;
			cursorTemp3 = 24;
		}
	}	
}

void backSpace(){ //Apagar a �ltima letra digitada
	strcpy(vetor[linha + 0][(cursor - 1) + 0], "[ ]");
	strcpy(vetor[linha + 0][(cursor - 1) - 1], "[ ]");
	strcpy(vetor[linha + 0][(cursor - 1) - 2], "[ ]");
	strcpy(vetor[linha + 1][(cursor - 1) - 0], "[ ]");
	strcpy(vetor[linha + 1][(cursor - 1) - 1], "[ ]");
	strcpy(vetor[linha + 1][(cursor - 1) - 2], "[ ]");
	strcpy(vetor[linha + 2][(cursor - 1) - 0], "[ ]");
	strcpy(vetor[linha + 2][(cursor - 1) - 1], "[ ]");
	strcpy(vetor[linha + 2][(cursor - 1) - 2], "[ ]");
	strcpy(vetor[linha + 3][(cursor - 1) - 0], "[ ]");
	strcpy(vetor[linha + 3][(cursor - 1) - 1], "[ ]");
	strcpy(vetor[linha + 3][(cursor - 1) - 2], "[ ]");
	strcpy(vetor[linha + 4][(cursor - 1) - 0], "[ ]");
	strcpy(vetor[linha + 4][(cursor - 1) - 1], "[ ]");
	strcpy(vetor[linha + 4][(cursor - 1) - 2], "[ ]");
	
	if(cursor == 0){
		//n�o faz nada
	}else{
		cursor -= 3;
	}
}

void letraA(){ //Letra A
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 1], pixel);
	strcpy(vetor[linha + 1][cursor + 2], pixel);
	strcpy(vetor[linha + 2][cursor + 2], pixel);
	strcpy(vetor[linha + 3][cursor + 2], pixel);
	strcpy(vetor[linha + 4][cursor + 2], pixel);
	
	cursor += 3;	
}

void letraB(){ //Letra B
	strcpy(vetor[linha + 0][cursor + 0], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 0], pixel);
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 1][cursor + 2], pixel);
	strcpy(vetor[linha + 2][cursor + 2], pixel);
	strcpy(vetor[linha + 3][cursor + 2], pixel);
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	strcpy(vetor[linha + 2][cursor + 1], pixel);
	
	cursor += 3;
}

void letraC(){ //Letra C
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 0][cursor + 2], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	strcpy(vetor[linha + 4][cursor + 2], pixel);
	
	cursor += 3;		
}

void letraD(){ //Letra D
	strcpy(vetor[linha + 0][cursor + 0], pixel);
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 1][cursor + 2], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 2], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 2], pixel);
	strcpy(vetor[linha + 4][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	
	cursor += 3;
	
}

void letraE(){ //Letra E
	strcpy(vetor[linha + 0][cursor + 0], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 0], pixel);
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 2][cursor + 1], " 0 ");
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	strcpy(vetor[linha + 0][cursor + 2], " 0]");
	strcpy(vetor[linha + 1][cursor + 2], "[ ]");
	strcpy(vetor[linha + 2][cursor + 2], " 0]");
	strcpy(vetor[linha + 3][cursor + 2], "[ ]");
	strcpy(vetor[linha + 4][cursor + 2], " 0]");
	
	cursor += 3;
	
}

void letraH(){ //Letra H
	strcpy(vetor[linha + 0][cursor + 0], "[0 ");
	strcpy(vetor[linha + 1][cursor + 0], "[0 ");
	strcpy(vetor[linha + 2][cursor + 0], "[0 ");
	strcpy(vetor[linha + 3][cursor + 0], "[0 ");
	strcpy(vetor[linha + 4][cursor + 0], "[0 ");
	strcpy(vetor[linha + 2][cursor + 1], " 0 ");
	strcpy(vetor[linha + 0][cursor + 2], " 0]");
	strcpy(vetor[linha + 1][cursor + 2], " 0]");
	strcpy(vetor[linha + 2][cursor + 2], " 0]");
	strcpy(vetor[linha + 3][cursor + 2], " 0]");
	strcpy(vetor[linha + 4][cursor + 2], " 0]");
	
	cursor += 3;
	
}

void letraL(){ //Letra L
	strcpy(vetor[linha + 0][cursor + 0], "|0 ");
	strcpy(vetor[linha + 1][cursor + 0], "|0 ");
	strcpy(vetor[linha + 2][cursor + 0], "|0 ");
	strcpy(vetor[linha + 3][cursor + 0], "|0 ");
	strcpy(vetor[linha + 4][cursor + 0], "|0 ");
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	strcpy(vetor[linha + 4][cursor + 2], " 0]");
	
	cursor += 3;
	
}

void letraO(){ //Letra O
	strcpy(vetor[linha + 0][cursor + 0], pixel);
	strcpy(vetor[linha + 1][cursor + 0], pixel);
	strcpy(vetor[linha + 2][cursor + 0], pixel);
	strcpy(vetor[linha + 3][cursor + 0], pixel);
	strcpy(vetor[linha + 4][cursor + 0], pixel);
	strcpy(vetor[linha + 0][cursor + 1], pixel);
	strcpy(vetor[linha + 0][cursor + 2], pixel);
	strcpy(vetor[linha + 1][cursor + 2], pixel);
	strcpy(vetor[linha + 2][cursor + 2], pixel);
	strcpy(vetor[linha + 3][cursor + 2], pixel);
	strcpy(vetor[linha + 4][cursor + 2], pixel);
	strcpy(vetor[linha + 4][cursor + 1], pixel);
	
	cursor += 3;
	
}



int main(){
	setlocale(LC_ALL, "");
	
	
	inicializaVetor();
	
	for(int p = 0; p <500; p++){
		
		
		imprimeVetor();
		int n = 0;
		
		int c = getch(); //Aguarda o usu�rio pressionar uma letra e guarda o c�digo na vari�vel c
		
		if(c == 8 && (cursor == 0) && (linha == 0)){ // Esse if serve pra quando apertar o back-space com o monitor vazio
			//n�o faz nada
		}else if(c == 8){ //BackSpace
			system("cls");
			if((linha % 6 == 0) && cursor == 0){
				if(linha == 6){
					linha -= 6;
					cursor = cursorTemp1;	
				}else if(linha == 12){
					linha -= 6;
					cursor = cursorTemp2;
				}else if(linha == 18){
					linha -= 6;
					cursor = cursorTemp3;
				}
			}
			backSpace();
		}else if(cursor == 24 && linha == 18){ //Se o monitor estiver cheio n�o faz nada e n�o modifica as vari�vies.
			
		}else if(c == 'a'){
			system("cls"); //Limpa a tela
			verificaLinha(); //Verifica a posi��o da linha e coluna e atribui os valores corretos
			letraA();//Chama a fun��o que "pinta" a letra "A" na posi��o correta
		}else if(c == 'b'){
			system("cls");
			verificaLinha();
			letraB();
		}else if(c == 'c'){
			system("cls");
			verificaLinha();
			letraC();
		}else if(c == 'd'){
			system("cls");
			verificaLinha();
			letraD();
	    }else if(c == 'e'){
			system("cls");
			verificaLinha();
			letraE();
	    }else if(c == 'h'){
			system("cls");
			verificaLinha();
			letraH();
	    }else if(c == 'l'){
			system("cls");
			verificaLinha();
			letraL();
	    }else if(c == 'o'){
			system("cls");
			verificaLinha();
			letraO();
		}else if(c == 13){ //aqui serve para quebrar linha;
			if(linha == 0){
				cursorTemp1 = cursor;
				linha += 6;
				cursor = 0;
			}else if(linha == 6){
				cursorTemp2 = cursor;
				linha += 6;
				cursor = 0;
			}else if(linha == 12){
				cursorTemp3 = cursor;
				linha += 6;
				cursor = 0;
			}else if(linha == 18){ //Se quebrar linha estando na ultima ele n�o faz nada
				//n�o faz nada
			}
		}	
		system("cls");
	}	
}
