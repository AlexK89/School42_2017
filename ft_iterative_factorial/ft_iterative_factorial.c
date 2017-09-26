/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:11:17 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/15 16:11:19 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int finalnum;
    
    finalnum = nb;
    if (nb < 0 || nb > 12)
        return (0);
    if(nb == 0)
        return(1);
    while(nb > 1)
    {
        nb--;
        finalnum *= nb;
    }
    return(finalnum);
}

int main(void)
{
    int nb = 5;
    printf("%i\n", ft_iterative_factorial(nb));
    return (0);
}
