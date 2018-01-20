#include <bits/stdc++.h>
using namespace std;
int A, B, T, voy,f;
char c;

int main(){
    cin>>T;
    while(T-->0){
        A=B=voy=f=0;
        while(f<2){
            scanf("%c",c);
            cout<<(c+0)<<" ";
            if(c == 9){
                A++;
                f=0;
            }
            else if (c == 32){
                voy++;
                f=0;
            }
            else if(c == 10){
                B+=voy;
                voy=0;
                f=0;
            }
            else if( c=='#'){
                f+=1;
            }
            else{
                voy =f= 0;
            }
        }
        printf("%d tab(s) replaced\n%d trailing space(s) removed",A,B);
    }
}
