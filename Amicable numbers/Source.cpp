#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int d(int a)
{
	int b=1,c=0;
	while (b<a||b==1)
	{
		if (a%b==0)
		{
			c += b;
		}

		b++;
	}
	return c;
}
int main()
{
	unsigned int x,y,z,r=0;
	printf("the sum of all the amicable numbers under ");
	scanf("%d", &x);
	for (y = 1; y < x; y++)
	{
		for (z = 1; z < x; z++)
		{
			int t = d(y),p=d(z),n=1;
			//printf("%d %d %d %d     ",y, t,z,p);
			while (y>n*1000 && z<n*1000)
			{
				z += 1000;
				n++;
			}
			if (t==z && p==y && y!=z)
			{
				printf("%d %d ", y,z);
				r += y;
				r += z;
				y += 900;
				break;
			}
		}
		
	}
	printf("\nis %d ", r);

	return 0;
}