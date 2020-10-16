#include <stdio.h>

int yy(char p) {
	switch(p) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': return 1;
		default: return 0;
	}
}

int main() {
	char word[100], *p = word;
	gets(word);
	int num=0;
	while(*p!='\0') {
		switch(num) {
			case 0:if(!yy(*p)) num++;break;
			case 1:if(yy(*p)) num++;break;
			case 2:if(!yy(*p)) num++;break;
			case 3:if(yy(*p)) num++;break;
			case 4:if(!yy(*p)) num++;break;
		}
		p++;
	}
	if(num==4)
	  printf("yes");
	else 
	  printf("no");
	return 0;
}

