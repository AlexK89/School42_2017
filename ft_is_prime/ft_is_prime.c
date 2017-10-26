/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 11:30:31 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/16 11:30:33 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;
    int tempnum;
    
    i = 3;
    tempnum = nb / 2;
    if (nb == 0 || nb == 1 || nb < 0)
        return (0);
    if (nb == 2 || nb == 3)
        return (1);
    while (i <= tempnum)
    {
        if (nb % i == 0)
            return(0);
        i += 2;
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_is_prime(-3));
    printf("%d", ft_is_prime(0));
    printf("%d", ft_is_prime(1));
    printf("%d", ft_is_prime(2));
    printf("%d", ft_is_prime(3));
}
