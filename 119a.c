#include<stdio.h>

int gcd(int a, int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int a, b, n, m = 0, t;
	scanf("%d %d %d", &a, &b, &n);

	while(1) {
		if(m%2 == 0) {
			if(n == 0) {
				printf("1\n");
				return 0;
			}
			t = gcd(a, n);
			//printf("m:%d a:%d n:%d t:%d\n", m, a, n, t);
			n -= t;
			m++;
		} else {
			if(n == 0) {
				printf("0\n");
				return 0;
			}
			t = gcd(b, n);
			//printf("m:%d b:%d n:%d, t:%d\n", m, b, n, t);
			n -= t;
			m++;
		}
	}
return 0;
}
