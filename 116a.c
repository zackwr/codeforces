#include<stdio.h>

int main()
{
	int n, i, t = 0, s = 0, a, b;
	scanf("%d", &n);

	for(i=1;i<=n;i++) {
		scanf("%d %d", &a, &b);
		t += b - a;
		if(t>s)
			s = t;

	}
	printf("%d\n", s);
return 0;
}
