#include<stdio.h>
int main(){
  int rozmiar,ile,tab[100];
  scanf("%d",&ile);
  while(ile--){
  scanf("%d", &rozmiar);
  for(int i=0;i<rozmiar;i++){
    scanf("%d",&tab[i]);
  }
  while(rozmiar){
    printf("%d ",tab[rozmiar-1]);
    rozmiar--;
  }
  printf("\n");
}
  return 0;
}
