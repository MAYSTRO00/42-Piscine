#include <unistd.h>

/*void print_n(void)
{
	char	c;

	c = 57;
	while (c >= 48)
	{
		write (1, &c, 1);
	c--;
	}
}
*/
void print_n1(void)
{
	int	i;
	char c;

	i = 9;
	while (i >= 0)
	{
		 c = i + '0';
		write (1, &c, 1);
	i--;
	}
}

int	main(void)
{
	print_n1();
	return (0);
}
