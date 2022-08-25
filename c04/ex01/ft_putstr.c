/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:34:08 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/24 13:16:47 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

void	ft_putstr(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}
