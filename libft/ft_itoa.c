/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:44:09 by epraduro          #+#    #+#             */
/*   Updated: 2022/11/21 18:21:04 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	i = 0;
	nb = n;
	res = (char *)malloc(sizeof(char) * (ft_count(nb) + 1));
	if (!res)
		return (NULL);
	i = ft_count(nb);
	res[i--] = '\0';
	if (nb < 0)
		nb *= -1;
	while (i >= 0)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
