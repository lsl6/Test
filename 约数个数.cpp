#include <stdio.h>

int main() {
    int n;
    int x = 1200000;
    int sum=0;
    for(int i=1;i<=x;i++)
     if(x%i==0)
      sum++;
    printf("%d",sum);
	return 0;
}
