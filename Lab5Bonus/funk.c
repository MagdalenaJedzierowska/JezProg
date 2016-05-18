#include <stdlib.h>
#include <stdio.h>

void funk(double dd){
	char s[50];
	snprintf(s,50,"%.2lf",dd);
	//printf("%s\n",s);
	
	int i;
	for(i=0;i<50;i++)
		//printf("%i\n", s[i]);
		if(s[i]=='.')
			break;
	//printf("%i\n",i);

	int m=i%3;
	if(m==0)m=3;
	int k;
	for(k=0;k<m;k++)
		printf("%c", s[k]);
	
	for(;k<i;k+=3)
		printf("_%c%c%c",s[k],s[k+1],s[k+2]);

	printf("%c%c%c\n", s[k],s[k+1],s[k+2]);
}

int main(){
	double d;
	scanf("%lf",&d);
	funk(d);
	//printf("\n%.10lf\n");
}