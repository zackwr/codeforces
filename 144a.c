#include<stdio.h>

int main()
{
	int a[101], t, max = 0, min = 100, i, imax, imin;
	scanf("%d", &t);

	for(i=0;i<t;i++) {
		scanf("%d", &a[i]);
		if(a[i] > max) {
			imax = i+1;
			max = a[i];
		}
		if(a[i] <= min) {
			imin = i+1;
			min = a[i];
		}
	}
	if(imin < imax)
		imin++;

	printf("%d\n", imax - 1 + t - imin);
return 0;
}
