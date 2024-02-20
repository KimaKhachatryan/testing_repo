#include <iostream>
int usage(int);
int add (int, int);
int main()
{
	return 0;
}

int add (int a, int b)
{
	return a + b;
}

int usage (int k)
{
		k += 15;
		return k;
}

void print()
{
	std::cout << add(7, 8);
}
