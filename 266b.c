#include<stdio.h>

int strlen(char *s)
{
	int i = 0;
	while(*(s+i))
		i++;
return i;
}

void iter(char s[])
{
	int i;
	char tmp;
	for(i=1;i<strlen(s);i++) {
		if((s[i] == 'G') && (s[i-1] == 'B')) {
			tmp = s[i];
			s[i] = s[i-1];
			s[i-1] = tmp;
			i++;
		}
	}
}

int main()
{
	int i, n, t;
	scanf("%d %d", &t, &n);
	char s[t];

	scanf("%s", s);

	for(i=0;i<n;i++)
		iter(s);

	printf("%s\n", s);
return 0;
}
