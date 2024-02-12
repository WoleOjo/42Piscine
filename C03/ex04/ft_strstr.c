/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 02:47:45 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 03:00:32 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] && to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*to_find;

	str = "Hello Solomon, how are you doing?";
	to_find = "lles";
	printf("1  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "";
	printf("2  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "you\0";
	printf("3  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "l";
	printf("4  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "?";
	printf("5  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
}
*/
