/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:55:04 by sojo              #+#    #+#             */
/*   Updated: 2023/08/09 20:00:26 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

        if (nb < 2)
        {
		return (0);
        }
        n = 2;
        while (n * n <= nb)
        {
		if (nb % n == 0)
                        return (0);
               n++;
        }
        return (1);
}

int     ft_find_next_prime(int nb)
{
        while (nb < 2147483647 && !ft_is_prime(nb))
                nb++;
        return (nb);
}
