/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:07:25 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/14 14:07:27 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_comb(void)
{
    int firs_symbol;
    int second_symbol;
    int third_symbol;
    int temp_second_symbol;
    int temp_third_symbol;
    
    firs_symbol = 0;
    
    while (firs_symbol < 8)
    {
        temp_second_symbol = firs_symbol + 1;
        while (temp_second_symbol < 9)
        {
            temp_third_symbol = temp_second_symbol + 1;
            while (temp_third_symbol < 10)
            {
                ft_putchar (firs_symbol + '0');
                ft_putchar (temp_second_symbol + '0');
                ft_putchar (temp_third_symbol + '0');
                if(firs_symbol < 7)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                temp_third_symbol++;
            }
            temp_second_symbol++;
        }
        firs_symbol++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
