#include <iostream>
void klo();
void f()
{
	std::cout << "hello";
}

int usage(int);

void foo();

int add (int, int);
int main()
{
	klo();
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
void foo()
{
	std::cout << add(7, 8) << std::endl;
}

void print()
{
	std::cout << add(7, 8);
}
void klo()
{
	std::cout << "Cloning";
}
