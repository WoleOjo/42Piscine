/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:51:49 by sojo              #+#    #+#             */
/*   Updated: 2023/07/27 14:01:08 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	store;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			store = tab[j];
			if (tab[j] > tab[j + 1])
			{
				tab[j] = tab[j + 1];
				tab[j + 1] = store;
			}
			j++;
		}
		i++;
	}
}
