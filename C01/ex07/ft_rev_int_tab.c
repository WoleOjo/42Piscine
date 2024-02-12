/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:39:26 by sojo              #+#    #+#             */
/*   Updated: 2023/07/27 14:26:46 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;
	int	len;

	i = 0;
	while (i <= size / 2)
	{
		len = size - 1;
		store = *(tab + i);
		*(tab + i) = *(tab + len - i);
		*(tab + len - i) = store;
		i++;
	}
}
