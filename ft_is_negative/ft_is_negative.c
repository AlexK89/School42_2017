#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

int main(void)
{
    int number;
    
    number = 0;
    ft_is_negative(number);
    return (0);
}
