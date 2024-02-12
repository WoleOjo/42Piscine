/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:11:24 by sojo              #+#    #+#             */
/*   Updated: 2023/08/03 01:31:26 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	put_str(char *strn)
{
	while(*strn)
	{
		write(1,strn,1);
		strn++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>

int	main(void)
{
	char dest1[100] ;
	char dest2[100] ;
	char src[] = "Hello, Solomon, how are you doing today?";

	strcpy(dest1, src);
	ft_strcpy(dest2, src);
	put_str(dest1);
	put_str("\n");
	put_str(dest2);	
	
}


