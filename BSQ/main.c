#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char e, o, f; // empty, obstacle, full
    scanf("%c%c%c", &e, &o, &f);

    // read undefined length characters until newline
    char str[100];
    fgets(str, sizeof(str), stdin);
    // fgets の仕様をよく分かってないけど、ヌル文字が入っていることがあるので、その時はもう1行読む
    while (str[0] == '\n')
    {
        fgets(str, sizeof(str), stdin);
    }

    int m = 0;
    while (str[m] != '\n')
    {
        m++;
    }

    // make char array n x m
    char **map = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        map[i] = malloc(m * sizeof(char));
        for (int j = 0; j < m; j++)
        {
            map[i][j] = str[j];
        }

        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n')
        {
            fgets(str, sizeof(str), stdin);
        }
    }

    // -- ここまでmap読込 --

    int x = 0, y = 0, length = 0;
    int limit = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - length; j++)
        {
            if (map[i][j] == o)
                continue;

            limit = n - i < m - j ? n - i : m - j;
            for (int l = 1; l < limit; l++)
            {
                if (map[i + l][j + l] == o)
                    break;
                for (int k = 0; k < l; k++)
                {
                    if (map[i + k][j + l] == o || map[i + l][j + k] == o)
                    {
                        flag = 1;
                        break;
                    }
                    if (k == l - 1 && l > length)
                    {
                        x = i;
                        y = j;
                        length = l;
                    }
                }
                if (flag)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    // -- ここからmap出力 --
    // clone map for output
    char **map2 = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        map2[i] = malloc(m * sizeof(char));
        for (int j = 0; j < m; j++)
        {
            map2[i][j] = map[i][j];
        }
    }

    // fill map2
    for (int i = x; i < x + length; i++)
    {
        for (int j = y; j < y + length; j++)
        {
            map2[i][j] = f;
        }
    }

    // print map
    for (int i = 0; i < n; i++)
    {
        {
            for (int j = 0; j < m; j++)
            {
                printf("%c", map2[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");

    // release map
    for (int i = 0; i < n; i++)
    {
        free(map2[i]);
        free(map[i]);
    }
    free(map2);
    free(map);

    return 0;
}