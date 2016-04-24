#include<stdio.h>
int main(){
  int testy,ile,wynik=0,liczba;
  scanf("%d", &testy);
  for(int i=0;i<testy;i++){
    scanf("%d", &ile);
    for(int j=0;j<ile;j++){
      scanf("%d", &liczba);
      wynik+=liczba;
    }
    printf("%d\n",wynik);
    wynik=0;
  }
  return 0;
}
