#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] == 'a')
        i++;
    return (i);
}
int main(void)
{
    int     time;
    char    str[150];
    int     i;
    int     j;

    scanf("%d",&time);
    while (time--)
    {
        scanf("%s",str);
        i = 0;
        j = 1;
        while (str[i])
        {
            if (str[i] != 'a' && str[i + 1] == 'a')
            {
                j *= ft_strlen(str + i + 1);
            }
            i++;
        }
        write(1,"k",1);
        while(j--)
        {
            write(1,"a",1);
        }
        write(1,"\n",1);
    }
    return 0;
}