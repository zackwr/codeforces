#include<stdio.h>

void quick_sort(int a[], int f, int t)
{
	if(f >= t)
		return;
	int p = a[f], i = f, j, tmp;

	for(j=f+1;j<=t;j++) {
		if(a[j] < p) {
			i++;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}

	tmp = a[i];
	a[i] = a[f];
	a[f] = tmp;
	quick_sort(a,f,i-1);
	quick_sort(a,i+1,t);
}
int main()
{
	int t, i, sum = 0, ans = 0, j = 0;
	scanf("%d", &t);
	int a[t];

	for(i=0;i<t;i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	sum /= 2;

	quick_sort(a, 0, t-1);

	for(i=t-1;i>=0;i--) {
		ans += a[i];
		if(ans > sum) {
			printf("%d\n", ++j);
			break;
		}
		j++;
	}
return 0;
}
