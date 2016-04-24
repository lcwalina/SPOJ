#include<stdio.h>

int check(int digit){
  int i;
    for(i=2;i<=(digit/2);i++){
    if((digit % i) == 0) return 1;
  }
  return 0;
}

int main(void) {
  int ile,i,digit;
  scanf("%d", &ile );
  for(i=0;i<ile;i++){
    scanf("%d", &digit);
    if(check(digit)==1) printf("NIE\n");
    else if(digit>=2) printf("TAK\n");
    else printf("NIE\n");
  }

  return 0;
}
