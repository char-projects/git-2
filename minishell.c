#include <stdio.h>

int main(void)
{
	printf("Hola Mundo!\n");
	return (0);
}

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int main(void)
{
	char *str = "testing testing";
	ft_putstr(str);
}*/
