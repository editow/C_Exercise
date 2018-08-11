#include<stdio.h>
#include<math.h>
int main()
{
	int n, f;
	long double pi, t;
	n = f = 1;
	pi = 0, t = 1;
	while (fabs(t) >= 1e-7){
		pi += t;
		n += 2;
		f = -f;
		t = f * 1.0 / n;
	}
	printf("pi = %lf\n", pi * 4);
	return 0;
}