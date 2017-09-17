/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:36:09 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/14 15:36:11 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_putnbr(int nb)
{
    int i;
    char *lowest_int;
    
    lowest_int = "-2147483648";
    i = 0;
    if (nb == -2147483648)
    {
        while (lowest_int[i] != '\0')
        {
            ft_putchar(lowest_int[i]);
            i++;
        }
        return ;
    }
    if(nb < 0 && nb != -2147483648)
    {
        
        ft_putchar('-');
        nb = -nb;
    }
    if(nb > 9 && nb != -2147483648)
        ft_putnbr(nb/10);
    ft_putchar(nb % 10 + '0');
}

int main(void)
{
    int num;
    
    num = 12345;
    ft_putnbr(num);
    return (0);
}
