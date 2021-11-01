#include <stdio.h>

using namespace std;

int func1(int);

int a;
int main()
{
	printf("sayi giriniz:");
	printf("toplam:%d", func1(a));
}

int func1(int toplam)
{
	int i = 1;
	while (i <= 10)
	{
		scanf_s("%d", &a);
		toplam = toplam + a;
		i++;

	}
	return toplam;
}