#include <stdio.h>

int main(void)
{
    int     time;
    int     i;
    char    str[110];
    int     led;

    scanf("%d", &time);
    while (time--)
    {
        scanf("%s", str);
        i = 0;
        led = 0;
        while (str[i])
        {
            if (str[i] == '1')
                led += 2;
            else if (str[i] == '2' || str[i] == '3' || str[i] == '5')
                led += 5;
            else if (str[i] == '7')
                led += 3;
            else if (str[i] == '4')
                led += 4;
            else if (str[i] == '0' || str[i] == '9' || str[i] == '6')
                led += 6;
            else if (str[i] == '8')
                led += 7;
            i++; 
        }
        printf("%d leds\n",led);
    }
    return (0);
}