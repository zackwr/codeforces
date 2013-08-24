#include<stdio.h>

int main()
{
	int n, i, c = 0;
	scanf("%d\n", &n);
	char s[n+1];

	for(i=0;i<n;i++) {
		scanf("%c", &s[i]);
		if((i > 0) && (s[i] == s[i-1])) {
			c++;
		}
	}
	printf("%d\n", c);
return 0;
}
