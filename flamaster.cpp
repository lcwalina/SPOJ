#include <iostream>
using namespace std;
int main(void)
{
  string wyraz;
  int ile,dlugosc,flag;
  flag=1;
  cin>>ile;

  for(int i=0;i<ile;i++){
    cin>>wyraz;
    dlugosc=wyraz.length();
    for(int j=0;j<dlugosc;j++){
      if(wyraz[j+1]==wyraz[j])
        flag++;
      else if(flag>2){
        cout<<wyraz[j]<<flag;
        flag=1;
      }
      else if(flag<2){
        cout<<wyraz[j];
        flag=1;
      }
      else if(flag==2){
      cout<<wyraz[j]<<wyraz[j];
      flag=1;
    }
    }
    cout<<endl;
  }
  return 0;
}
