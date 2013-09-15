#include<stdio.h>

int strlen(char *s)
{
	int i = 0;
	while(*(s+i))
		i++;
return i;
}

int main()
{
	char s[101];
	scanf("%s", s);
	int i, count = 1;
	for(i=1;i<strlen(s);i++) {
		if(s[i] == s[i-1])
			count++;
		else
			count = 1;
		if(count > 6) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
return 0;
}
