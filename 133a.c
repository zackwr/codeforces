#include<stdio.h>

int strlen(char *s)
{
	int i = 0;
	while(*(i+s))
		i++;
return i;
}
int main()
{
	char s[101], ans[4] = "NO";
	scanf("%s", s);
	int i;
	for(i=0;i<strlen(s);i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
			ans[0] = 'Y', ans[1] = 'E', ans[2] = 'S';
	}
	printf("%s\n", ans);
return 0;
}
