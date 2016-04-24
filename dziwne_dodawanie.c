#include<stdio.h>

int potega(int liczba, int wykladnik){
  for(int i=1;i<wykladnik;i++){
    liczba*=10;
  }
  return liczba;
}
int counter=-1;;
int odwroc(int liczba){
  counter++;
  int wynik,odwrocona,j,liczba2=liczba;
  wynik=liczba;
  odwrocona=0;
  for(j=0;wynik>0;j++){
    wynik/=10;
  }
  j--;
  for(;liczba2!=0;j--){
    wynik=liczba2%10;
    if(j>=1) odwrocona+=wynik*(potega(10,j));
    else odwrocona+=wynik;
    liczba2=liczba2/10;
  }
  int result=odwrocona+liczba;
  if(odwrocona==liczba)return odwrocona;
  else return odwroc(result);
}

int main(){
  int test,liczba;
  scanf("%d", &test);
  for(int i=0;i<test;i++){
    scanf("%d", &liczba);
    counter=-1;
    printf("%d ",odwroc(liczba));
    printf("%d\n",counter);
  }
  return 0;
}
