#include<stdio.h>
int main(void)
{
  int D,n,i,j,wynik;
  scanf("%d", &D);
  for(j=0;j<D;j++){
  wynik=1;
  scanf("%d", &n);
  if(n<40){
  for(i=1;i<=n;i++){
    wynik*=i;
  }
  printf("%d %d\n",((wynik/10)%10),wynik%10);
  }
  else printf("0 0\n");
}
  return 0;
}
