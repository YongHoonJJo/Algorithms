#include <cstdio>

int main()
{
	char ch;
	int cnt=0;
	while((ch=getchar()) != EOF) {
		if(ch == '"') {
			cnt++;
			cnt&1 ? printf("``") : printf("''");
		}
		else printf("%c", ch);
	}
}
