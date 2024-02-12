/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:17:26 by sojo              #+#    #+#             */
/*   Updated: 2023/07/24 22:38:43 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_characters(int i, int j, int k, int l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (i == '9' && j == '8' && k == '9' && l == '9')
	{
		write (1, "", 1);
	}
	else
		write(1, ", ", 2);
}

void	print_last_two_numbers(int i, int j, int k, int l)
{
	k = '0';
	while (k <= '9')
	{
		l = j + 1;
		while (l <= '9')
		{
			put_characters(i, j, k, l);
			l++;
		}
		k++;
	}
}

void	print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			print_last_two_numbers(i, j, k, l);
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
