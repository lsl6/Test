#include <stdio.h>

void nine(int x){
	int sum=0;
	int a,b,c,d;
	for(int i=1;i<=x;i++){
	a=i%10;
	b=(i/10)%10;
	c=((i/10)/10)%10;
	d=(((i/10)/10))%10;
	if(a==9 || b==9 || c==9 || d==9)
		sum++;
	}
	printf("%d",sum);
}

int main(){
	int n=2019;
//	int sum=0;
//	int a,b,c,d;
    nine(n);
//	printf("%d",sum);
	return 0;
}
