#include <unistd.h>

void	print(void)
{
	write(1, "a", 1);
}

int	main (void)
{
	print();
	return (0);
}
