#include <stdio.h>
int N,M;
int arr[10];

void check(int idx){
    
    if(idx==M){
        for(int i=0;i<M;i++) printf("%d ",arr[i]);
        printf("\n");
        return;
    }

   
    for(int i=1;i<=N;i++){
        arr[idx]=i;
        check(idx+1);  
    }
}

int main(){
    scanf("%d%d",&N, &M);
    check(0);
    return 0;
}
