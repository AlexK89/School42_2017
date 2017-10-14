/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 08:43:52 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/16 08:43:54 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int temp;
    
    temp = nb;
    if ((nb == 0 && power == 0) || power == 0)
        return (1);
    if (power > 1)
        temp *= ft_recursive_power(nb, power - 1);
    return (temp);
}

int main(void)
{
    printf("%i\n", ft_recursive_power(-5, 5));
    return (0);
}
