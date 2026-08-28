#include <unistd.h>

/*int main(void)
{
	write (1, "Hello World!\n", 13);
	return 0;
}*/

/*int main(void)
{
	char str[] = "Hello World!";
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

int main(void)
{
	char *str;

	str = "Hello World!";
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
	return 0;
}
