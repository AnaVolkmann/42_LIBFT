int ft_atoi(const char *str)
{
    int i;
    int neg;
    int number;

    i = 0;
    number = 0;
    neg = 1;

    while(str[i] != '\0' && ((str[i] <= 13 && str[i] >= 9) || str[i] == ' '))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        number = number * 10 + (str[i] - 48);
        i++;
    }
    return (number * neg);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = " 1234567a";

    printf("ft_atoi:%i\n", ft_atoi(s));
    printf("atoi original:%i\n", atoi(s));
}