#include <unistd.h>

int main(void)
{
	char a;
	int i;

	a = 'z';
	i = 1;
	while(a >= 'a')
	{
		if(i % 2 == 0)
		{
			char c = a - 32;
			write(1, &c, 1);
		}
		else
			write(1, &a, 1);
		i++;
		a--;
	}
	write(1, "\n", 1);
	return 0;
}
