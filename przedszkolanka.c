#include <stdio.h>

int NWD(int a, int b)
{
    if(a!=b)
        return NWD(a>b?a-b:a,b>a?b-a:b);
    return a;
}
int main(){
    int ile,a,b;
    scanf("%d", &ile);
    while(ile--){
    scanf("%d%d",&a,&b);
    printf("%d\n", (a*b)/NWD(a,b));
    }
    return 0;
}
