#include<stdio.h>

int main()
{
	int s[4];
	scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
	int ans = 0, i, j, a[4] = {1, 1, 1, 1};

	for(j=0;j<4;j++) {
		for(i=j+1;i<4;i++) {
			if((s[j] == s[i]) && (a[j] == 1)) {
				ans++;
				a[j] = 0;
			}
		}
	}
	printf("%d\n", ans);
return 0;
}
