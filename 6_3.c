#include<stdio.h>
void main(){
	
	int n,i,j,tot;
	printf("enter number  ");
    scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		tot=0;
		for(j=1;j<=i;j++){
			
			if(i%j == 0){
				tot+=1;
			}
			
		}if(tot==2){
			printf("%d is a prime number \n",i);
		}
		
		
	}
}
