/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:59:18 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/15 18:59:19 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int temp;
    
    i = 1;
    temp = nb;
    if ((nb == 0 && power == 0) || power == 0)
        return (1);
    while (i < power)
    {
        nb = nb * temp;
        i++;
    }
    return (nb);
}

int main(void)
{
    printf("%i\n", ft_iterative_power(0, 1));
    return (0);
}
