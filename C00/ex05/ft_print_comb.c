/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 00:59:09 by sojo              #+#    #+#             */
/*   Updated: 2023/07/24 22:37:33 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_last_line(char i, char j, char k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		write(1, "", 1);
	}
	else
		write(1, ", ", 2);
}

void	print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				print_last_line(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	print_comb();
}*/
