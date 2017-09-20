/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:07:17 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/14 19:07:25 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    printf("%i", i);
    return (i);
}

int main(void)
{
    char *str = "Hello";
    ft_strlen(str);
    return (0);
}
