#include<stdio.h>

int strlen(char s[])
{
	int i = 0, l = 0;
	while(s[i] != '\0') {
		i++;
		l++;
	}
return l;
}
int main()
{
	int n;
	char s[101];
	scanf("%d", &n);

	while(n--) {
		scanf("%s", s);
		if(strlen(s) <= 10)
			printf("%s\n", s);
		else if(strlen(s) > 10)
			printf("%c%d%c\n", s[0], strlen(s)-2, s[strlen(s)-1]);
	}
return 0;
}
