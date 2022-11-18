/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:06:39 by epraduro          #+#    #+#             */
/*   Updated: 2022/11/16 13:52:10 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				b;

	i = 0;
	b = 0;
	while ((s1[i] || s2[i]) && b == 0 && i < n)
	{
		if (s1[i] != s2[i])
			b = s1[i] - s2[i];
		i++;
	}
	return (b);
}
