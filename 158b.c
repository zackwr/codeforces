#include<stdio.h>

int main()
{
	int n, x, y = 0, s = 0;
	int a[5] = {0};
	scanf("%d", &n);

	while(n--) {
		scanf("%d", &x);
		a[x]++;
	}

	s = a[4];
	if(a[3] < a[1])
		y = a[3];
	else
		y = a[1];
	a[3] -= y;
	a[1] -= y;
	s += y;
	s += a[3];
	s += (2*a[2]+a[1]+3)/4;

	printf("%d\n", s);
return 0;
}
