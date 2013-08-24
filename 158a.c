#include<stdio.h>

int main()
{
	int n, m, i, s = 0;
	int a[51] = {0};
	scanf("%d %d", &n, &m);

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=(n-1);i>=0;i--) {
		//printf("a[i]:%d\n", a[i]);
		if((a[i] >= a[m-1]) && (a[i] > 0))
			s++;
	}
	//printf("a[m-1]:%d\n", a[m-1]);
	printf("%d\n", s);
return 0;
}
