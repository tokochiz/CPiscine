
#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int comparing_len = 5;
    printf("%d\n", ft_strncmp("abcde","abc", comparing_len));
    printf("%d\n", ft_strncmp("abcde","ab", comparing_len ));
    printf("%d\n", ft_strncmp("abcde","abc123", comparing_len));
    
    printf("%d\n", strncmp("abcde","abc", comparing_len));
    printf("%d\n", strncmp("abcde","ab", comparing_len ));
    printf("%d\n", strncmp("abcde","abc123", comparing_len));
}