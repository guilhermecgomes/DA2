#include <stdio.h>

void main(){
	int i,j,k,a,n,atri;
	scanf("%d",&n);
	atri = 1;
	for(i=1;i<=(n-1);i++){
		atri++;
		for(j=(i+1);j<=n;j++){
			atri++;
			for(k=i;k<=n;k++){
				atri++;
				a = a + 1;
			}
		}
	}
	printf("\n%d",atri);
}
