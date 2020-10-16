#include <stdio.h>

/*枚举每个元素
 该元素与前面的元素比较，找到小的即可
 该元素与后面的元素比较，找到大的即可
 上面两项为真，即说明当前元素可以作为三元组的中心*/

void Triple(){
	int n,ans=0;
	scanf("%d",&n);
	int data[1000];
	for(int i=0;i<n;i++)
	 scanf("%d",&data[i]);
    for(int j=1;j<n-1;j++) {
    	int hasSmall=0;
    	for(int i=0;i<j;i++) {
    		if(data[i]<data[j]) {
    			hasSmall=1;
    			break;
			}
		}
	    int hasBig=0;
	    for(int k=j+1;k<n;k++) {
	    	if(data[j]<data[k]) {
	    		hasBig=1;
	    		break;
			}
		}
		if(hasSmall&&hasBig)
		  ans++;
	}
	printf("%d",ans);
}

int main(){
	Triple();
	return 0;
}
