#include <stdio.h>
int g;
void ch(int x, int y)
{
	if (x == y)
	{
		printf("GCD: %d, ", x);
		g = x;
	}
	else if (x > y)
	{
		ch(y, x - y);
	}
	else
	{
		ch(x, y - x);
	}
}

int main() {
	int a, b;
	printf("Enter two integers:");
	scanf_s("%d%d", &a, &b);
	ch(a, b);
	printf("LCM: %d", a * b / g);
	return 0;
}