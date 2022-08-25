/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:19:13 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/23 14:29:35 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)

{
	int	racine;
	int	sqrt;

	racine = 1;
	sqrt = 0;
	if (nb < 0)
		return (0);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
		{
			return (racine);
		}
		racine = racine + 1;
	}
	return (0);
}
