/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:17:23 by sojo              #+#    #+#             */
/*   Updated: 2023/08/09 15:31:53 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	range = max - min;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = min;
	j = 0;
	while (j < range)
	{
		arr[j] = i + j;
		j++;
	}
	return (arr);
}
