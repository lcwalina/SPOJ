#include<stdio.h>

int power_modulo_fast(int a, int b, int m)
{
int i;
int result = 1;
long int x = a%m;

for (i=1; i<=b; i<<=1)
{
x %= m;
if ((b&i) != 0)
{
result *= x;
result %= m;
}
x *= x;
}

return result;
}

int main(void){
  int ile,podstawa,wykladnik,wynik;
  scanf("%d", &ile);
  for(int i=0;i<ile;i++){
    scanf("%d%d", &podstawa, &wykladnik);
    wynik=power_modulo_fast(podstawa,wykladnik,10);
    printf("%d\n", wynik);
  }

  return 0;
}
