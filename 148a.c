#include<stdio.h>

int main()
{
	int k, l, m, n, d, i, count = 0;
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);

	for(i=1;i<=d;i++) {
		if(i % k == 0)
			count++;
		else if(i % l == 0)
			count++;
		else if(i % m == 0)
			count++;
		else if(i % n == 0)
			count++;
	}

	printf("%d\n", count);
return 0;
}
