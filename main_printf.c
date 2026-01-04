#include "printf.h"

int	main(void)
{
	int	*num;
	int	n;

	n = 1;
	num = &n;
	printf("	%i\n", ft_printf("Hejka naklejka .,/13"));
	printf("	%i\n", printf("Hejka naklejka .,/13"));
	ft_printf("\n");

	printf("	%i\n",ft_printf("%c", 'c'));
	printf("	%i\n", printf("%c", 'c'));
	printf("\n");

	printf("	%i\n", ft_printf("%s", "42BornToCode"));
	printf("	%i\n", printf("%s", "42BornToCode"));
	printf("\n");

	printf("	%i\n", ft_printf("%p", num));
	printf("	%i\n", printf("%p", num));
	printf("\n");

	printf("	%i\n", ft_printf("%i", 42));
	printf("	%i\n", printf("%i", 42));
	printf("\n");

	printf("	%i\n", ft_printf("%d", 42));
	printf("	%i\n", printf("%d", 42));
	printf("\n");

	printf("	%i\n", ft_printf("%u", 42));
	printf("	%i\n", printf("%u", 42));
	printf("\n");

	printf("	%i\n", ft_printf("%x", 42));
	printf("	%i\n", printf("%x", 42));
	printf("\n");

	printf("	%i\n", ft_printf("%X", 42));
	printf("	%i\n", printf("%X", 42));
	printf("\n");
}
