#include <stdio.h>
#include <math.h>

void main(){
	int s,n,i,j;
	for(n=0;n<=10;n++){
		s = 0;
		i = n;
		while (i > 0) {
			for(j=1;j<=i;j++){
				s = s + 1;
			}
			i = floor(i/2);
		}
		printf("\nn = %d e s = %d",n,s);
	}
}

