/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _boolean.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:49:23 by sojo              #+#    #+#             */
/*   Updated: 2023/08/09 16:09:54 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool{
	false = 0,
	true = 1,
}t_bool;

# define EVEN(n) (n % 2 == 0)
# define SUCCESS 0
# define FALSE false
# define TRUE true
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
