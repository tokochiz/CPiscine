#include <stdio.h>
#include <string.h>

/*
s1 比較対象の文字列
s2 比較対象の文字列
戻り値
・負の数 : 辞書順で、s1 の方が小さい（前に来る）とき
・正の数 : 辞書順で、s1 の方が大きい（後に来る）とき
・0 : s1 と s2 が同じ
*/
int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("dfghjk", "ab"));
	printf("%d\n", ft_strcmp("abc", "r7hjkl"));

	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("dfghjk", "ab"));
	printf("%d\n", strcmp("abc", "vcxs"));
}