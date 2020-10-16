#include <stdio.h>
#include <string.h>

int sum=0;

void DiZengnum(int n){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char s[8];
		sprintf(s,"%d",i); //把格式为%d的数字i往数组中传送 
		bool flag=1;
		for(int j=1;j<strlen(s);++j){
			if(s[j-1]>s[j]){
				flag=0;
				break;
			}
		}
	if(flag) 
	sum++;
	}
	printf("%d",sum);
}

int main(){
	int n;
//	scanf("%d",&n);
	DiZengnum(n);
//	printf("%d",sum);
	return 0;
}
