#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int temp,count=0;
	for(int i=0;i<n;i++){
	temp=a[i];
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j])
				count++;
				if(count>n/2){
					printf("%d \n",a[j]);
					exit();
				}
		}
	}
	if(count<5){
		printf("-1\n")
	}
	
}