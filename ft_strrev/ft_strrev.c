/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozhush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:14:20 by vkozhush          #+#    #+#             */
/*   Updated: 2017/08/14 19:14:32 by vkozhush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
    int start;
    int end;
    char temp;
    
    start = 0;
    end = 0;
    while (str[end] != '\0')
    {
        end++;
    }
    end--;
    
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s", str);
    return (str);
}

int main(void)
{
    char str[] = "Hello";
    ft_strrev(str);
    return (0);
}
