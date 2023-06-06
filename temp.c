#include <stdio.h>

int main(void) {
	int t,n,k,a[20],i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++){
	        if(a[i]<=k){
	            k-=a[i];
	            printf("1");
	        }
	        else
	        printf("0");
	    }
	    printf("\n");
	    
	    
	}
	return 0;
}


