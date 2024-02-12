/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:17:05 by sojo              #+#    #+#             */
/*   Updated: 2023/08/01 15:22:47 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
void	put_str(char *strn)
{
	while(*strn)
	{
		write(1,strn,1);
		strn++;
	}
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char dest1[100] ;
	char dest2[100] ;
	char src[] = "Hello, Solomon, how are you doing today?";

	strncpy(dest1, src,70);
	ft_strncpy(dest2, src,70);
	put_str(dest1);
	put_str("\n");
	put_str(dest2);	

}
*/
