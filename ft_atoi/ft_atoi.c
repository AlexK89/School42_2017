/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:29:50 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/14 20:29:52 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int num;
    int negative;
    
    i = 0;
    num = 0;
    negative = 1;
    while (str[i] ==  ' ' ||  str[i] == '\t' || str[i] == '\b' || str[i] == '\n'
           || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-')
    {
        negative = -negative;
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
        
    }

    num *= negative;
    printf("%d\n", num);
    return (num);
}

int main(void)
{
    char str[] = "       ++123456";
    ft_atoi(str);
    printf("ATOI = %i\n", atoi(str));
    return (0);
}
