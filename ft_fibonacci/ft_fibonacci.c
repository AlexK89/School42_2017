/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 08:53:33 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/16 08:53:36 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if(index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index > 1)
    {
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    }
    return (0);
}

int main(void)
{
    ft_fibonacci(20);
    printf("%i", ft_fibonacci(20));
    return (0);
}
