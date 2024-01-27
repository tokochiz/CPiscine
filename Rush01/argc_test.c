#include <stdio.h>
#include <unistd.h>

 void put_str(char *str)
 {
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
	
 }

int main(int argc, char **argv)
{
	int i;
	i = 1;

while(i < argc)
	{
		put_str(argv[i]);
	i++;
	}
	return 0;
}