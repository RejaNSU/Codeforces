#include<stdio.h>

int main(){

    int n,k,i,a[100],count=0;

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>= 0){
            count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}
