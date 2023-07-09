/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:02:41 by fernacar          #+#    #+#             */
/*   Updated: 2023/04/20 20:52:45 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(long n, const char *base, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= (long)ft_strlen(base))
		ft_putnbr_base_fd(n / ft_strlen(base), base, fd);
	write(fd, &base[n % ft_strlen(base)], 1);
}
