#include <bits/stdc++.h>
using namespace std;
int n, numP, x, i, first, second, tam;
int v [105];

int main(){
    scanf("%d", &n);
        for(i=0; i<n;i++){
            scanf("%d", &x);
            v[i]= x;
        }
        if((v[0]%2==0) || (v[n-1]%2==0) || n%2==0){
            printf("No");
        }
        else{
            i, tam=0, 0;
            while(i<n){
                first= v[i];
                second= v[(i+1)];
                if(!(first%2==0) && !(second%2==0))
                {
                    numP++;
                    i++;
                }
                else{
                    i+=2;
                    tam+=2;
                }
            }
            if(!(++numP%2==0)){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }
    //}

}
