#include <stdio.h>

void main(){
/*	int s,j,i,n,a,b,c,d;
	a = 0; b = 0;c = 0;s = 0; d = 0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++){
		a = a + 1;
		for(j=i;j<= n;j++){
			b = b + 1;
			s = s + 1;
		}
	}
	if(n>3){
		d = ((n+2)*(n-3))/2;
	}
	c = a + b + s;
	printf("valor de n: %d \n",n);
	printf("valor de a(primeiro for): %d \n",a);
	printf("valor de b(segundo for): %d \n",b);
	printf("valor de s: %d \n", s);
	printf("2valor de s: %d \n",d);
	printf("valor do esforço computacional: %d \n",c);
}*/

/*	int s,i,n,m,k,l,atri,comp,c,b;
	scanf("%d",&n);	int a[n];	for(l=0;l<=n;l++){	a[l] = l;	printf("{%d}",a[l]);	}
	
	s = 0; atri = 2;
	for(i=1;i<=n;i++){
		s = s + a[i];
		atri = atri + 1;
		comp = comp + 1;
	}
	
	printf("\ns: %d",s);
	m = s/n; atri = atri + 1;
	k = 1; atri = atri + 1;
	printf("\nm: %d",m);
	atri = atri + 1;
	for(i=2;i<=n;i++){
		b = ((a[i]-m)*(a[i]-m));
		c = ((a[k]-m)*(a[k]-m));
		printf("\nb: %d\nc: %d",b,c);
		if(((a[i]-m)*(a[i]-m))<((a[k]-m)*(a[k]-m))){
			k = i; atri = atri + 1;
		}
		atri = atri + 1;	
	}
	printf("\nk: %d",k);
	printf("\natri: %d",atri);
	printf("\ncomp: %d",comp);
}*/

	int n,i,j,k;
	scanf("%d",&n);
	int a[n][n];
	for(i=1;i<=(n-1);i++){
		for(j=(i+1);j<=n;j++){
			for(k=i;k<=n;k++){
				a[j][k] = a[j][k]-((a[i][k] * a[j][i]) / a[i][i]);
			}
		}
	}	



	
}

