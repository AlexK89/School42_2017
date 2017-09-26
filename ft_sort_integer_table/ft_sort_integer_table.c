/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:23:23 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/15 13:23:24 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int temp;
    
    i = 0;
    while (i < size)
    {
        if (tab[i] > tab[i + 1])
        {
            
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = -1;
        }
        i++;
    }
    i = 0;
    while (i < size)
    {
        printf("%i ", tab[i]);
        i++;
    }
}

int main(void)
{
    int size = 8;
    int array[8] = { 4, 7, -3, 6, 2, 8, -9, 6 };
    ft_sort_integer_table(array, size);
    return (0);
}
