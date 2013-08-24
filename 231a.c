#include<stdio.h>

int main()
{
	int ts = 0, n;
	scanf("%d", &n);

	while(n--) {
		int a = 0, b = 0, c = 0;
		scanf("%d %d %d", &a, &b, &c);
		if((a+b+c) > 1)
			ts++;
		//printf("%d %d\n",n, ts);
	}
	printf("%d\n", ts);
return 0;
}
