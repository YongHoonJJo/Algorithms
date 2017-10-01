#include <stdio.h>

int main()
{
	while(1) {
		int i, j, n, ans=0;
		int ns[20]={0}, minSp = 0x3f3f3f3f;

		scanf("%d", &n);
		if(!n) break;
		getchar();

		for(i=0; i<n; i++) {
			char s[30];
			gets(s);

			for(j=0; s[j]; j++)
				if(s[j] == ' ')
					ns[i]++;
			if(minSp > ns[i])
				minSp = ns[i];
		}

		for(i=0; i<n; i++)
			ans += (ns[i]-minSp);
		printf("%d\n", ans);
	}
	return 0;
}
