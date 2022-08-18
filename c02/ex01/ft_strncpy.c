/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:27:52 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/16 17:50:44 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	b;

	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		++i;
	}
	while (b < n)
	{
		dest[b] = '\0';
		i++;
	}
	return (dest);
}
