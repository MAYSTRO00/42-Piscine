#include <unistd.h>

void	ft_print_numbers(void)
{
	int	d;

	d = '0';
	while(d <= '9')
	{
		write(1, &d, 1);
		d++;
	}
}
/*int main(void)
{
	ft_print_numbers();
}*/
