/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_errno.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:44:36 by znajdaou          #+#    #+#             */
/*   Updated: 2025/01/31 11:10:14 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ERRNO_H
# define T_ERRNO_H

// includes
# include "libft.h"

// errno representative
typedef enum s_errno
{
	ERR_SUCCESS = 0,
	ERR_INVALID_ARG,
	ERR_EMPTY_ARG,
	ERR_MALLOC_FAIL,
	ERR_UNKNOWN,
	ERR_COUNT
}			t_errno;

// Errno message structure
typedef struct s_errno_msg
{
	t_errno	code;
	char	*message;
}			t_errno_msg;

// Errno function
void		ft_perror(char *msg, t_errno errno_num);
void		ft_strerr(t_errno errno_num);

#endif
