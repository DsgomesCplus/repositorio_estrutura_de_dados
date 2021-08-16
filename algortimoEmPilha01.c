#include <stdio.h>
#include <stdlib.h>

//#define TAM 5

int main()
    {
/*
    ALGORITMO DE UM PROGRAMA QUE SIMULA UMA PILHA ESTATICA
*/
    int pilha[5], topo =-1 , opcao, i , novo;
        
        opcao = 0;

        while (opcao != 4)
        {
            printf("\n Menu de Controle:\n| \n1 - Inserir valor: \n2 - Remover valor: \n3 - Consultar Valores \n4 - Sair: \n");
            
            /*Menu interação da Pilha*/
            scanf("%d",&opcao);
            /*Lendo os valores*/
            switch (opcao)
            {
                case 1:printf("\n Qual o elemento a ser inserido: ");
                    scanf("%d",&novo);
                    if (topo == 4)
                    {
                        printf("\n Pilha Cheia");
                    }
                    else {
                        topo++;
                        pilha[topo] = novo;
                    }
                    break;

                case 2: if (topo == -1)
                    {
                        printf("\n Pilha vazia");
                    }
                    else{
                        topo--;
                    }
                    break;

                case 3: if(topo == -1)
                    {
                        printf("\n Pilha vazia");
                    } else{
                        printf("\n");
                        for (i=0; i<= topo; i++)
                            {
                             printf("%d - \b\b", pilha[i]);
                            }
                            printf("\b\b\b\b");
                        }
                        
                        break;
                case 4: printf("Programa Encerrado!");
                        getch();
                        break;
                default: printf("\n Opcao Invalida!");
                        getch();
                        break;
                }
        }


}