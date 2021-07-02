#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void mostraVetor();
void vetorOrdenado(int vetor[16]);
void infoVetor(int vetor[16]);
void busca(int vetor[16]);
int main(){
  srand(time(NULL));
  mostraVetor();
  printf("\n\n\n\n");
  system("pause");
  return 0;
}
void mostraVetor(){
  printf("V A L O R E S \n");
  printf("     D O      \n");
  printf("  V E T O R   \n\n");
  int vetor[16];
  int pos=1;
  for (int x = 0; x < 15; x++){    
    int temp = (rand()%490)+30;
    bool igual=false;
    for (int y = 0; y < 15; y++){
      if(temp == vetor[y]){
        igual=true;
      }
    }
    if(igual==false){
      vetor[x]=temp;
      printf("posicao: %i valor :%i \n",pos,vetor[x]);
      pos++;
    }else{
          x--;
    }
  }
  vetorOrdenado(vetor);
}
  //----------------------------------------------------------------------------
  void vetorOrdenado(int vetor[16]){
    printf("\n V A L O R E S  \n");
    printf("      D O       \n");
    printf("   V E T O R    \n");
    printf("O R D E N A D O \n\n");
    int pos=1;
    for(int i = 0;i < 15; i++){
      for(int j = i+1;j < 15; j++){
          if(vetor[i] > vetor[j]){
              int aux=vetor[i];
              vetor[i]=vetor[j];
              vetor[j]=aux;
              }
          }
      printf("posicao: %i valor :%i \n",pos,vetor[i]);
      pos++;
      }
    infoVetor(vetor);
  }
  //----------------------------------------------------------------------------
  int media(int vetor[16]){
    int media;
    for(int x = 0;x < 15; x++){
      media=media+vetor[x];
      }
    media=media/15;
    return media;
    }
    
  int maior(int vetor[16]){
    int maior=vetor[0];
    for(int x = 0;x < 15; x++){
      if(maior<vetor[x]){
        maior=vetor[x];
        }
      }
    return maior;
  }
  int menor(int vetor[16]){
    int menor=vetor[0];
    for(int x = 0;x < 15; x++){
      if(menor>vetor[x]){
        menor=vetor[x];
        }
      }
    return menor;
  }
  void infoVetor(int vetor[16]){
    printf("\nI N F O R M A C O E S \n");
    printf("         D O          \n");
    printf("      V E T O R       \n\n");
    printf("O maior valor e de: %i\n",maior(vetor));
    printf("O valor medio e de: %i\n",media(vetor));
    printf("O menor valor e de: %i\n",menor(vetor));
    busca(vetor);
  }
//------------------------------------------------------------------------------
  void busca(int vetor[16]){
    printf("\nB U S C A  \n");
    printf("   D E     \n");
    printf("V A L O R  \n");
    int busca;
    bool encontrado=false;
    int pos=1;
    printf("\n\n"); 
    printf("Digite o valor que deseja buscar: ");
    scanf("%i",&busca);
    fflush(stdin);
    for(int x = 0;x < 15; x++){
      if(busca==vetor[x]){
        printf("\nvalor encontrado na posicao: %i\n",pos);
        encontrado=true;
        }
      pos++;
      }
    if(encontrado==false){
      printf("\nvalor nao encontrado");
    }
  }
