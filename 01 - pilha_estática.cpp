#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
/*
Programa que simula o funcionamento de uma pilha estática
*/
//#define TAM 5

main ()
  {
       int pilha[5], topo = -1, opcao, i, novo;
       opcao = 0;
       while (opcao != 4)
         {
             printf("\nDigite a sua opcao:\n1 - Inserir\n2 - Remover\n3 - Percurso\n4 - Sair");
             scanf("%d", &opcao);
             switch (opcao)
               {
                    case 1: printf("\nQual o elemento a ser inserido?");
                            scanf("%d", &novo);
                            if(topo == 4)
                              printf("\nPilha cheia");
                            else
                              {
                              topo++;
                              pilha[topo] = novo;
                              }
                            break;  
                    case 2: if(topo == -1)
                              printf("\nPilha Vazia!");
                            else
                              topo--;
                            break;  
                    case 3: if(topo == -1)
                              printf("\nPilha Vazia!");
                            else
                              {
                              printf("\n");
                              for(i=0; i<= topo; i++)
                                printf("%d - \b\b",pilha[i]);  
                              }                      
                            printf("\b\b\b\b");
                            break;  
                    case 4: printf("Programa encerrado!");
                            getch();
                            break;
                    default: printf("\nOpcao Invalida!");
                             getch();          
                }
         }
   }
