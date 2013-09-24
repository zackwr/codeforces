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
	char s[100];
	int i, a[27], count = 0;

	for(i=0;i<27;i++)
		a[i] = 0;

	scanf("%s", s);

	for(i=0;i<strlen(s);i++)
		a[s[i] - 97] = 1;
	for(i=0;i<27;i++) {
		if(a[i] == 1)
			count++;
	}

	if(count % 2 == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
return 0;
}
